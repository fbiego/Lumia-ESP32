/*
   MIT License

  Copyright (c) 2022 Felix Biego

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/

#include <Arduino.h>
#include "SPIFFS.h"
#include "main.h"
#include <lvgl.h>
#include "FT6336U.h"
#include "ui.h"
#include <Arduino_GFX_Library.h>
#include <ESP32Time.h>
#include <ArduinoNvs.h>

#include <WiFi.h>
#include <WiFiMulti.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

Arduino_DataBus *bus = new Arduino_ESP32SPI(21 /* DC */, 15 /* CS */, 14 /* SCK */, 13 /* MOSI */, -1 /* MISO */, VSPI /* spi_num */);
Arduino_GFX *gfx = new Arduino_ST7796(bus, 22 /* RST */, 0 /* rotation */);
ESP32Time rtc(3 * 3600);
FT6336U ft6336u(I2C_SDA, I2C_SCL, RST_N_PIN, INT_N_PIN);
WiFiMulti wifiMulti;
HTTPClient http;

AppComponent testApp[] = {
    {.id = 0, .parent = 0, .type = LABEL, .text = "Hello world", .xPos = 20, .yPos = 20, .width = 25, .height = 25},
    {.id = 1, .parent = 0, .type = BUTTON, .text = "Click", .xPos = 20, .yPos = 70, .width = 100, .height = 10},
    {.id = 2, .parent = 0, .type = SLIDER, .text = "", .xPos = 20, .yPos = 150, .width = 250, .height = 5},
    {.id = 3, .parent = 0, .type = SWITCH, .text = "", .xPos = 20, .yPos = 250, .width = 50, .height = 20},
    {.id = 4, .parent = 0, .type = LABEL, .text = "Test app", .xPos = 20, .yPos = 300, .width = 25, .height = 25},
};

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);
  gfx->draw16bitBeRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
  lv_disp_flush_ready(disp);
}

void my_input_read(lv_indev_drv_t *drv, lv_indev_data_t *data)
{
  data->point.x = touch_data.xpos;
  data->point.y = touch_data.ypos;

  if (touch_data.event == 1)
  {
    data->state = LV_INDEV_STATE_PR;
  }
  else
  {
    data->state = LV_INDEV_STATE_REL;
  }
  // return false; /*No buffering now so no more data read*/
}

void requestResult(int requestCode, int statusCode, String payload, long time)
{

  Serial.printf("Request %d received, time %dms, code: %d\n", requestCode, time, statusCode);

  if (statusCode == HTTP_CODE_OK)
  {
    Serial.println(payload);
  }

  switch (requestCode)
  {
  case TIME_REQUEST:
    if (statusCode == HTTP_CODE_OK)
    {
      DynamicJsonDocument json(100);
      deserializeJson(json, payload);
      long t = json["timestamp"].as<long>();
      rtc.setTime(t);

      // lv_calendar_set_today_date(ui_appCalendarObj, rtc.getYear(), rtc.getMonth() + 1, rtc.getDay());
    }
    break;
  case APPS_REQUEST:
    if (statusCode == HTTP_CODE_OK)
    {
      DynamicJsonDocument json(2048);
      deserializeJson(json, payload);
      JsonArray array = json.as<JsonArray>();
      int x = 0;

      for (JsonVariant j : array)
      {
        JsonObject v = j.as<JsonObject>();
        String name = v["name"].as<String>();
        strncpy(appList[x].name, name.c_str(), name.length() + 1);
        appList[x].id = v["id"].as<uint32_t>();
        appList[x].version = v["version"].as<uint32_t>();
        appList[x].size = v["size"].as<uint32_t>();
        appList[x].state = true;
        x++;
        
        if (x >= MAX_APPS)
        {
          break;
        }
      }
    }
    break;
  }
}

void sendRequest(void *parameter)
{
  long t;

  for (int r = 0; r < MAX_REQUEST; r++)
  {
    if (request[r].active)
    {
      t = millis();
      http.begin(request[r].url);
      int httpCode;
      if (request[r].method)
      {
        httpCode = http.POST(request[r].data);
      }
      else
      {
        httpCode = http.GET();
      }

      String payload = http.getString();

      // http.end();
      t = millis() - t;
      requestResult(request[r].code, httpCode, payload, t);
      request[r].active = false;
    }
  }
  http.end();
  activeRequest = false;
  // When you're done, call vTaskDelete. Don't forget this!
  vTaskDelete(NULL);
}

void connectWiFi(void *parameter)
{
  uint8_t status;
  while (true)
  {
    status = wifiMulti.run();
    Serial.printf("WiFi trying: %d\n", status);
    if (status == WL_CONNECTED || status == WL_CONNECT_FAILED || status == WL_DISCONNECTED)
    {
      break;
    }
  }
  Serial.printf("WiFi exit: %d\n", status);
  // When you're done, call vTaskDelete. Don't forget this!
  vTaskDelete(NULL);
}

bool runRequest()
{
  // returns true if the task was created
  // returns false if the previous task has not completed, new one cannot be created
  if (!activeRequest)
  {
    activeRequest = true;
    // xTaskCreatePinnedToCore(
    xTaskCreate(
        sendRequest,     // Function that should be called
        "HTTP Requests", // Name of the task (for debugging)
        8192,            // Stack size (bytes)
        NULL,            // Parameter to pass
        1,               // Task priority
        NULL
        // NULL,               // Task handle
        // 1
    );

    return true;
  }
  else
  {
    return false;
  }
}

void getNVSData()
{
  String val;
  val = NVS.getString("ssid1");
  strncpy(ssid1, val.c_str(), val.length() + 1);
  val = NVS.getString("ssid2");
  strncpy(ssid2, val.c_str(), val.length() + 1);
  val = NVS.getString("ssid3");
  strncpy(ssid3, val.c_str(), val.length() + 1);
  val = NVS.getString("ssid4");
  strncpy(ssid4, val.c_str(), val.length() + 1);
  val = NVS.getString("ssid5");
  strncpy(ssid5, val.c_str(), val.length() + 1);
  val = NVS.getString("pass1");
  strncpy(pass1, val.c_str(), val.length() + 1);
  val = NVS.getString("pass2");
  strncpy(pass2, val.c_str(), val.length() + 1);
  val = NVS.getString("pass3");
  strncpy(pass3, val.c_str(), val.length() + 1);
  val = NVS.getString("pass4");
  strncpy(pass4, val.c_str(), val.length() + 1);
  val = NVS.getString("pass5");
  strncpy(pass5, val.c_str(), val.length() + 1);
  brightness = NVS.getInt("brightness", brightness);
  themeColor = NVS.getInt("theme", themeColor);
}

void setWifi()
{
  wifiMulti.addAP(ssid1, pass1);
  wifiMulti.addAP(ssid2, pass2);
  wifiMulti.addAP(ssid3, pass3);
  wifiMulti.addAP(ssid4, pass4);
  wifiMulti.addAP(ssid5, pass5);

  String wifiList = "Saved Wifi";
  wifiList += "\n1. " + String(ssid1);
  wifiList += "\n2. " + String(ssid2);
  wifiList += "\n3. " + String(ssid3);
  wifiList += "\n4. " + String(ssid4);
  wifiList += "\n5. " + String(ssid5);

  lv_label_set_text(ui_appWifiList, wifiList.c_str());
}

void saveWifiList()
{
  setWifi();
  NVS.setString("ssid1", String(ssid1));
  NVS.setString("ssid2", String(ssid2));
  NVS.setString("ssid3", String(ssid3));
  NVS.setString("ssid4", String(ssid4));
  NVS.setString("ssid5", String(ssid5));
  NVS.setString("pass1", String(pass1));
  NVS.setString("pass2", String(pass2));
  NVS.setString("pass3", String(pass3));
  NVS.setString("pass4", String(pass4));
  NVS.setString("pass5", String(pass5));
}

void saveSettings(){
  NVS.setInt("brightness", brightness);
  NVS.setInt("theme", themeColor);
}

lv_obj_t *create_component(lv_obj_t *parent, AppComponent component)
{
  lv_obj_t *object;
  if (component.type == LABEL)
  {
    object = create_label(parent, component.text, component.yPos);
  }
  else if (component.type == BUTTON)
  {
    object = create_button(parent, component.text, component.xPos, component.yPos, component.width);
  }
  else if (component.type == SLIDER)
  {
    object = create_slider(parent, component.xPos, component.yPos, component.width, component.height);
  }
  else if (component.type == SWITCH)
  {
    object = create_switch(parent, component.xPos, component.yPos);
  }

  return object;
}

void loadTestApp()
{
  size_t n = sizeof(testApp) / sizeof(testApp[0]);
  appSize = n;

  closeApp();

  lv_obj_t *container = app_canvas();

  for (int i = 0; i < n; i++)
  {
    create_component(container, testApp[i]);
  }

  launchApp("Test App", &ui_img_gear_png);
}

void setup()
{
  Serial.begin(115200);

  gfx->begin();
  gfx->fillScreen(BLACK);

  ft6336u.begin();
  pinMode(MOTOR, OUTPUT);
  digitalWrite(MOTOR, LOW);
  NVS.begin();

  getNVSData();

  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(ledPin, ledChannel);

  if (!SPIFFS.begin(FORMAT_SPIFFS_IF_FAILED))
  {
    Serial.println("SPIFFS Mount Failed");
    ledcWrite(ledChannel, brightness);
    gfx->fillScreen(BLUE);
    delay(2000);
    ESP.restart();
  }

  rtc.setTime(1663491331); // Sunday, September 18, 2022 8:55:31 AM

  lv_init();

  screenWidth = gfx->width();
  screenHeight = gfx->height();

  Serial.print("Width: ");
  Serial.print(screenWidth);
  Serial.print("\tHeight: ");
  Serial.println(screenHeight);
  disp_draw_buf = (lv_color_t *)malloc(sizeof(lv_color_t) * screenWidth * 10);
  if (!disp_draw_buf)
  {
    Serial.println("LVGL disp_draw_buf allocate failed!");
  }
  else
  {
    lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, screenWidth * 10);

    /* Initialize the display */
    lv_disp_drv_init(&disp_drv);
    /* Change the following line to your display resolution */
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register(&disp_drv);

    /* Initialize the input device driver */
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_input_read;
    lv_indev_drv_register(&indev_drv);

    ui_init();

    // lv_disp_load_scr(ui_lockScreen);

    Serial.println("Setup done");
  }

  ledcWrite(ledChannel, 100);
  currentMillis = millis();
  while (currentMillis + 2000 > millis())
  {
    lv_timer_handler();
  }
  vibrate(200);
  openLock();
  setWifi();

  xTaskCreate(
      connectWiFi,    // Function that should be called
      "WIFI Connect", // Name of the task (for debugging)
      8192,           // Stack size (bytes)
      NULL,           // Parameter to pass
      1,              // Task priority
      NULL);

  uint64_t mac = ESP.getEfuseMac();
  // Serial.print("Mac: ");

  // for (int i = 0; i < 6; i++)
  // {
  //   if (i > 0)
  //   {
  //     Serial.print(":");
  //   }
  //   Serial.print(byte(mac >> (i * 8) & 0xFF), HEX);
  // }
  // Serial.println();

  String info = "";

  info += "\nChip model: " + String(ESP.getChipModel());
  info += "\nChip cores: " + String(ESP.getChipCores());
  info += "\nChip frequency: " + String(ESP.getCpuFreqMHz()) + "Mhz";
  info += "\nChip version: " + String(ESP.getChipRevision());

  info += "\nRAM size: " + String((ESP.getHeapSize() / 1024.0), 0) + "kB";
  info += "\nPSRAM size: " + String((ESP.getPsramSize() / (1024.0 * 1024.0)), 0) + "MB";

  info += "\nFlash size: " + String((ESP.getFlashChipSize() / (1024.0 * 1024.0)), 0) + "MB";
  info += "\nFlash speed: " + String((ESP.getFlashChipSpeed() / 1000000.0), 0) + "Mhz";

  info += "\nSDK version: " + String(ESP.getSdkVersion());
  info += "\nFirmware size: " + String((ESP.getSketchSize() / (1024.0 * 1024.0)), 0) + "MB";
  // info += "\nStorage space: " + String((SPIFFS.totalBytes() / (1024.0 * 1024.0)), 0) + "MB";
  info += "\nMAC address: ";

  for (int i = 0; i < 6; i++)
  {
    if (i > 0)
    {
      info += "-";
    }
    info += String(byte(mac >> (i * 8) & 0xFF), HEX);
  }
  // info += "\nScreen resolution: " + String(screenWidth) + "x" + String(screenHeight);
  // info += "\nScreen model: " ;
  // info += "\nTouch model: FT6336U" ;

  Serial.println(info);

  uint32_t total = ESP.getFlashChipSize();
  int free = SPIFFS.totalBytes() - SPIFFS.usedBytes();
  int used = total - free;
  String usage = String(used / (1024.0 * 1024.0), 2) + " MB used out of " + String(total / (1024.0 * 1024.0), 2) + " MB";

  lv_bar_set_value(ui_storageBar, int((used / (total * 1.0)) * 100.0), LV_ANIM_OFF);
  lv_label_set_text(ui_storageText, usage.c_str());
  lv_slider_set_value(ui_brightnessSlider, brightness, LV_ANIM_OFF);
  lv_colorwheel_set_rgb(ui_themeWheel, lv_color_hex(themeColor));
  lv_event_send(ui_themeWheel, LV_EVENT_VALUE_CHANGED, NULL);
  lv_label_set_text(ui_aboutText, info.c_str());

  request[0].active = true;
  request[0].method = false;
  request[0].code = TIME_REQUEST;
  request[0].url = "https://iot.fbiego.com/api/v1/time";

  request[1].active = true;
  request[1].method = false;
  request[1].code = APPS_REQUEST;
  request[1].url = "https://iot.fbiego.com/esp32/apps";

  Serial.println("Device ready");
}

void loop()
{

  // read the touch data
  touch_data.event = ft6336u.read_td_status();
  touch_data.xpos = ft6336u.read_touch1_x();
  touch_data.ypos = ft6336u.read_touch1_y();

  lv_timer_handler(); /* let the GUI do its work */
  // delay(5);

  // if (wifiMulti.run() == WL_CONNECTED)
  if (WiFi.isConnected())
  {
    lv_obj_clear_flag(ui_wifiIcon, LV_OBJ_FLAG_HIDDEN);
    if (!onConnect)
    {
      Serial.println("WiFi Connected");
      runRequest();
      onConnect = true;
    }
  }
  else
  {
    onConnect = false;
    lv_obj_add_flag(ui_wifiIcon, LV_OBJ_FLAG_HIDDEN);
  }
  lv_label_set_text(ui_lockScreenTime, rtc.getTime("%H:%M").c_str());
  lv_label_set_text(ui_lockTime, rtc.getTime("%H:%M").c_str());
  lv_label_set_text(ui_lockScreenDate, rtc.getTime("%A, %B %d").c_str());
  lv_label_set_text(ui_actionDate, rtc.getTime("%m/%d").c_str());
}
