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
#define LGFX_USE_V1
//#define LGFX_AUTODETECT // Autodetect board

#include <Arduino.h>
#include "SPIFFS.h"
#include "main.h"
#include <lvgl.h>
#include "ui.h"
#include <LovyanGFX.hpp>
#include <ESP32Time.h>
#include <ArduinoNvs.h>

#include <WiFi.h>
#include <WiFiMulti.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

// #define GSM Serial1

#include "SD.h"
#include "FS.h"


#ifdef PLUS
#include "Audio.h"
class LGFX : public lgfx::LGFX_Device
{

  lgfx::Panel_ST7796 _panel_instance;

  lgfx::Bus_Parallel8 _bus_instance;

  lgfx::Light_PWM _light_instance;

  lgfx::Touch_FT5x06 _touch_instance;

public:
  LGFX(void)
  {
    {
      auto cfg = _bus_instance.config();

      cfg.port = 0;
      cfg.freq_write = 20000000;
      cfg.pin_wr = 47; // pin number connecting WR
      cfg.pin_rd = -1; // pin number connecting RD
      cfg.pin_rs = 0;  // Pin number connecting RS(D/C)
      cfg.pin_d0 = 9;  // pin number connecting D0
      cfg.pin_d1 = 46; // pin number connecting D1
      cfg.pin_d2 = 3;  // pin number connecting D2
      cfg.pin_d3 = 8;  // pin number connecting D3
      cfg.pin_d4 = 18; // pin number connecting D4
      cfg.pin_d5 = 17; // pin number connecting D5
      cfg.pin_d6 = 16; // pin number connecting D6
      cfg.pin_d7 = 15; // pin number connecting D7

      _bus_instance.config(cfg);              // Apply the settings to the bus.
      _panel_instance.setBus(&_bus_instance); // Sets the bus to the panel.
    }

    {                                      // Set display panel control.
      auto cfg = _panel_instance.config(); // Get the structure for display panel settings.

      cfg.pin_cs = -1;   // Pin number to which CS is connected (-1 = disable)
      cfg.pin_rst = 4;   // pin number where RST is connected (-1 = disable)
      cfg.pin_busy = -1; // pin number to which BUSY is connected (-1 = disable)

      // * The following setting values ​​are set to general default values ​​for each panel, and the pin number (-1 = disable) to which BUSY is connected, so please try commenting out any unknown items.

      cfg.memory_width = 320;  // Maximum width supported by driver IC
      cfg.memory_height = 480; // Maximum height supported by driver IC
      cfg.panel_width = 320;   // actual displayable width
      cfg.panel_height = 480;  // actual displayable height
      cfg.offset_x = 0;        // Panel offset in X direction
      cfg.offset_y = 0;        // Panel offset in Y direction
      cfg.offset_rotation = 2;
      cfg.dummy_read_pixel = 8;
      cfg.dummy_read_bits = 1;
      cfg.readable = false;
      cfg.invert = true;
      cfg.rgb_order = false;
      cfg.dlen_16bit = false;
      cfg.bus_shared = true;

      _panel_instance.config(cfg);
    }

    {                                      // Set backlight control. (delete if not necessary)
      auto cfg = _light_instance.config(); // Get the structure for backlight configuration.

      cfg.pin_bl = 45;     // pin number to which the backlight is connected
      cfg.invert = false;  // true to invert backlight brightness
      cfg.freq = 44100;    // backlight PWM frequency
      cfg.pwm_channel = 0; // PWM channel number to use

      _light_instance.config(cfg);
      _panel_instance.setLight(&_light_instance); // Sets the backlight to the panel.
    }

    { // Configure settings for touch screen control. (delete if not necessary)
      auto cfg = _touch_instance.config();

      cfg.x_min = 0;   // Minimum X value (raw value) obtained from the touchscreen
      cfg.x_max = 319; // Maximum X value (raw value) obtained from the touchscreen
      cfg.y_min = 0;   // Minimum Y value obtained from touchscreen (raw value)
      cfg.y_max = 479; // Maximum Y value (raw value) obtained from the touchscreen
      cfg.pin_int = 7; // pin number to which INT is connected
      cfg.bus_shared = false;
      cfg.offset_rotation = 0;

      // For I2C connection
      cfg.i2c_port = 0;    // Select I2C to use (0 or 1)
      cfg.i2c_addr = 0x38; // I2C device address number
      cfg.pin_sda = 6;     // pin number where SDA is connected
      cfg.pin_scl = 5;     // pin number to which SCL is connected
      cfg.freq = 400000;   // set I2C clock

      _touch_instance.config(cfg);
      _panel_instance.setTouch(&_touch_instance); // Set the touchscreen to the panel.
    }

    setPanel(&_panel_instance); // Sets the panel to use.
  }
};

#else
class LGFX : public lgfx::LGFX_Device
{

  lgfx::Panel_ST7796 _panel_instance;

  lgfx::Bus_SPI _bus_instance;

  lgfx::Light_PWM _light_instance;

  // lgfx::Touch_FT5x06 _touch_instance;

public:
  LGFX(void)
  {
    {
      auto cfg = _bus_instance.config(); // Get the structure for bus configuration.

      // SPI bus settings
      cfg.spi_host = VSPI_HOST; // Select the SPI to use ESP32-S2,C3 : SPI2_HOST or SPI3_HOST / ESP32 : VSPI_HOST or HSPI_HOST
      // * With the ESP-IDF version upgrade, VSPI_HOST and HSPI_HOST descriptions are deprecated, so if an error occurs, use SPI2_HOST and SPI3_HOST instead.
      cfg.spi_mode = 3;                  // Set SPI communication mode (0 ~ 3)
      cfg.freq_write = 27000000;         // SPI clock when sending (up to 80MHz, rounded to 80MHz divided by an integer)
      cfg.freq_read = 6000000;           // SPI clock when receiving
      cfg.spi_3wire = false;             // set to true if receiving on MOSI pin
      cfg.use_lock = true;               // set to true to use transaction lock
      cfg.dma_channel = SPI_DMA_CH_AUTO; // Set the DMA channel to use (0=not use DMA / 1=1ch / 2=ch / SPI_DMA_CH_AUTO=auto setting)
      // * With the ESP-IDF version upgrade, SPI_DMA_CH_AUTO (automatic setting) is recommended for the DMA channel. Specifying 1ch and 2ch is deprecated.
      cfg.pin_sclk = 14; // set SPI SCLK pin number
      cfg.pin_mosi = 13; // Set MOSI pin number for SPI
      cfg.pin_miso = -1; // set SPI MISO pin number (-1 = disable)
      cfg.pin_dc = 21;   // Set SPI D/C pin number (-1 = disable)

      _bus_instance.config(cfg);              // Apply the settings to the bus.
      _panel_instance.setBus(&_bus_instance); // Sets the bus to the panel.
    }

    {                                      // Set display panel control.
      auto cfg = _panel_instance.config(); // Get the structure for display panel settings.

      cfg.pin_cs = 15;   // Pin number to which CS is connected (-1 = disable)
      cfg.pin_rst = 22;  // pin number where RST is connected (-1 = disable)
      cfg.pin_busy = -1; // pin number to which BUSY is connected (-1 = disable)

      // * The following setting values ​​are set to general default values ​​for each panel, and the pin number (-1 = disable) to which BUSY is connected, so please try commenting out any unknown items.

      cfg.memory_width = 320;  // Maximum width supported by driver IC
      cfg.memory_height = 480; // Maximum height supported by driver IC
      cfg.panel_width = 320;   // actual displayable width
      cfg.panel_height = 480;  // actual displayable height
      cfg.offset_x = 0;        // Panel offset in X direction
      cfg.offset_y = 0;        // Panel offset in Y direction
      cfg.offset_rotation = 0;
      cfg.dummy_read_pixel = 8;
      cfg.dummy_read_bits = 1;
      cfg.readable = false;
      cfg.invert = false;
      cfg.rgb_order = false;
      cfg.dlen_16bit = false;
      cfg.bus_shared = false;

      _panel_instance.config(cfg);
    }

    {                                      // Set backlight control. (delete if not necessary)
      auto cfg = _light_instance.config(); // Get the structure for backlight configuration.

      cfg.pin_bl = 23;     // pin number to which the backlight is connected
      cfg.invert = false;  // true to invert backlight brightness
      cfg.freq = 44100;    // backlight PWM frequency
      cfg.pwm_channel = 1; // PWM channel number to use

      _light_instance.config(cfg);
      _panel_instance.setLight(&_light_instance); // Sets the backlight to the panel.
    }

    // { // Configure settings for touch screen control. (delete if not necessary)
    //    auto cfg = _touch_instance.config();

    //    cfg.x_min = 0;    // Minimum X value (raw value) obtained from the touchscreen
    //    cfg.x_max = 319;  // Maximum X value (raw value) obtained from the touchscreen
    //    cfg.y_min = 0;    // Minimum Y value obtained from touchscreen (raw value)
    //    cfg.y_max = 479;  // Maximum Y value (raw value) obtained from the touchscreen
    //    cfg.pin_int = 36; // pin number to which INT is connected
    //    cfg.bus_shared = false;
    //    cfg.offset_rotation = 0;

    //    // For I2C connection
    //    cfg.i2c_port = 0;    // Select I2C to use (0 or 1)
    //    cfg.i2c_addr = 0x38; // I2C device address number
    //    cfg.pin_sda = 18;    // pin number where SDA is connected
    //    cfg.pin_scl = 19;    // pin number to which SCL is connected
    //    cfg.freq = 400000;   // set I2C clock

    //    _touch_instance.config(cfg);
    //    _panel_instance.setTouch(&_touch_instance); // Set the touchscreen to the panel.
    // }

    setPanel(&_panel_instance); // Sets the panel to use.
  }
};

struct TouchData
{
  int xpos;
  int ypos;
  int event;
} touch_data;

#include "FT6336U.h"

FT6336U ft6336u(18, 19, -1, 36);

#endif

// Create an instance of the prepared class.
LGFX tft;

static lv_color_t disp_draw_buf[screenWidth * SCR];
static lv_color_t disp_draw_buf2[screenWidth * SCR];

ESP32Time rtc(3 * 3600);
WiFiMulti wifiMulti;
HTTPClient http;
#ifdef MUSIC_PLAYER
Audio audio;
#endif
bool playing;

// AppComponent testApp[] = {
//     {.id = 0, .parent = 0, .type = LABEL, .text = "Hello world", .xPos = 20, .yPos = 20, .width = 25, .height = 25},
//     {.id = 1, .parent = 0, .type = BUTTON, .text = "Click", .xPos = 20, .yPos = 70, .width = 100, .height = 10},
//     {.id = 2, .parent = 0, .type = SLIDER, .text = "", .xPos = 20, .yPos = 150, .width = 250, .height = 5},
//     {.id = 3, .parent = 0, .type = SWITCH, .text = "", .xPos = 20, .yPos = 250, .width = 50, .height = 20},
//     {.id = 4, .parent = 0, .type = LABEL, .text = "Test app", .xPos = 20, .yPos = 300, .width = 25, .height = 25},
// };

uint8_t ext[] = {
    // APP DATA
    0xA0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x54, 0x65, 0x73, 0x74, 0x20, 0x41, 0x70, 0x70, 0x00,

    // UI COMPONENTS
    // d, type, comp id   , parent id ,    x pos  ,    y pos  ,   width  ,   height   , text ..... terminator
    0xAA, 0x01, 0x10, 0x01, 0xAB, 0x01, 0x00, 0x14, 0x00, 0x14, 0x00, 0x19, 0x00, 0x19, 0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x20, 0x77, 0x6f, 0x72, 0x6c, 0x64, 0x00,
    0xAA, 0x02, 0x10, 0x02, 0xAB, 0x01, 0x00, 0x14, 0x00, 0x46, 0x00, 0x64, 0x00, 0x00, 0x43, 0x6c, 0x69, 0x63, 0x6b, 0x00,
    0xAA, 0x05, 0x10, 0x03, 0xAB, 0x01, 0x00, 0x14, 0x00, 0x96, 0x00, 0xFA, 0x00, 0x05, 0x00,
    0xAA, 0x07, 0x10, 0x04, 0xAB, 0x01, 0x00, 0x14, 0x00, 0xFA, 0x00, 0x32, 0x00, 0x14, 0x00,
    0xAA, 0x01, 0x10, 0x05, 0xAB, 0x01, 0x00, 0x14, 0x01, 0x2C, 0x00, 0x19, 0x00, 0x19, 0x4c, 0x6f, 0x72, 0x65, 0x6d, 0x20, 0x69, 0x70, 0x73, 0x75, 0x6d, 0x20, 0x64, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x0a, 0x73, 0x69, 0x74, 0x20, 0x61, 0x6d, 0x65, 0x74, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x65, 0x63, 0x74, 0x65, 0x74, 0x75, 0x72, 0x20, 0x0a, 0x61, 0x64, 0x69, 0x70, 0x69, 0x73, 0x63, 0x69, 0x6e, 0x67, 0x20, 0x65, 0x6c, 0x69, 0x74, 0x2e, 0x00};

AppComponent testApp[10];

void gsmHandler();

void extractApp(uint8_t *data, int size)
{

  int a = 0, i = 0, j, z = size;
  uint8_t buf[100];
  while (1)
  {
    // copy component data to buffer
    for (j = 0; j < 14; j++)
    {
      if (i >= z)
      {
        break; // not enough data for component
      }
      buf[j] = data[i];
      i++;
    }
    while (1)
    {
      buf[j] = data[i];
      j++;
      i++;
      if (buf[j - 1] == 0x00)
      {
        break; // component terminator found
      }
      if (i >= z)
      {
        break; // component terminator not found & end of component data
      }
    }
    if (buf[j - 1] != 0x00)
    {
      break; // component incomplete
    }

    // component info was loaded to buffer
    if (buf[0] == 0xAA)
    {
      testApp[a].type = (Type)buf[1];
      testApp[a].id = buf[2] << 8 | buf[3];
      testApp[a].parent = buf[4] << 8 | buf[5];
      testApp[a].xPos = buf[6] << 8 | buf[7];
      testApp[a].yPos = buf[8] << 8 | buf[9];
      testApp[a].width = buf[10] << 8 | buf[11];
      testApp[a].height = buf[12] << 8 | buf[13];
      strncpy(testApp[a].text, (char *)buf + 14, j - 14);
      printf("App UI Component > 0x%X\n", uuid(testApp[a].parent, testApp[a].id));
      a++;
    }
    else if (buf[0] == 0xA0)
    {
      char appName[20];
      strncpy(appName, (char *)buf + 14, j - 14);
      printf("App Name %s\n", appName);
    }
  }
}

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
  if (tft.getStartCount() == 0)
  {
    tft.endWrite();
  }

  tft.pushImageDMA(area->x1, area->y1, area->x2 - area->x1 + 1, area->y2 - area->y1 + 1, (lgfx::swap565_t *)&color_p->full);

  lv_disp_flush_ready(disp); /* tell lvgl that flushing is done */
}

/*Read the touchpad*/
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
#ifdef PLUS
  uint16_t touchX, touchY;

  bool touched = tft.getTouch(&touchX, &touchY);

  if (!touched)
  {
    data->state = LV_INDEV_STATE_REL;
  }
  else
  {
    data->state = LV_INDEV_STATE_PR;

    /*Set the coordinates*/
    data->point.x = touchX;
    data->point.y = touchY;
    currentMillis = millis();
  }
#else
  data->point.x = touch_data.xpos;
  data->point.y = touch_data.ypos;

  if (touch_data.event == 1)
  {
    data->state = LV_INDEV_STATE_PR;
    currentMillis = millis();
  }
  else
  {
    data->state = LV_INDEV_STATE_REL;
  }
#endif
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
    if (status == WL_CONNECTED || status == WL_CONNECT_FAILED || status == WL_DISCONNECTED || status == WL_NO_SSID_AVAIL)
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

#ifdef MUSIC_PLAYER
void musicPlayer(void *parameter)
{

  while (playing)
  {
    audio.loop();

    uint32_t act = audio.getAudioCurrentTime();
    uint32_t afd = audio.getAudioFileDuration();

    int progress = 0;
    if (afd != 0)
    {
      progress = int((act * 100.0) / afd);
      lv_bar_set_value(ui_musicProgress, progress, LV_ANIM_ON);

      lv_label_set_text_fmt(ui_musicPlayTime, "%02d:%02d", act / 60, act % 60);
      lv_label_set_text_fmt(ui_musicTotalTime, "%02d:%02d", afd / 60, afd % 60);
    }
    // uint32_t pos =audio.getFilePos();
  }
  vTaskDelete(NULL);
}

void runMusic()
{

  // musicPlay_Animation(ui_musicAlbumArt, 0);
  if (!playing)
  {
    playing = true;
    xTaskCreatePinnedToCore(
        // xTaskCreate(
        musicPlayer,    // Function that should be called
        "Music Player", // Name of the task (for debugging)
        16384,          // Stack size (bytes)
        NULL,           // Parameter to pass
        1,              // Task priority
        // NULL
        NULL, // Task handle
        1);
  }
}

void playFile(const char *track)
{
  audio.connecttoFS(SD, track);

  runMusic();
}

void playPause()
{
  audio.pauseResume();
  bool isPlay = audio.isRunning();
}

void changeMusic(bool forward)
{

  int r = random(MAX_MUSIC);
  playFile(music[r].path);
}

void listMusic(fs::FS &fs, const char *dirname, uint8_t levels)
{
  Serial.printf("Listing directory: %s\n", dirname);

  File root = fs.open(dirname);
  if (!root)
  {
    Serial.println("Failed to open directory");
    return;
  }
  if (!root.isDirectory())
  {
    Serial.println("Not a directory");
    return;
  }

  File file = root.openNextFile();
  int x = 0;
  while (file)
  {
    if (!file.isDirectory())
    {

      String fileName = String(file.name());
      if (!fileName.startsWith(".") && fileName.endsWith(".mp3") && x < MAX_MUSIC)
      {
        Serial.print("  MP3 ");

        fileName = "/" + fileName;
        strncpy(music[x].path, fileName.c_str(), fileName.length() + 1);
        music[x].id = x;
        music[x].size = (uint32_t)file.size();
        x++;
      }

      Serial.print("  FILE: ");
      Serial.print(file.name());
      Serial.print("  SIZE: ");
      Serial.println(file.size());
    }
    file = root.openNextFile();
  }
}

void getMusicList()
{
  int v = audio.getVolume();
  lv_slider_set_value(ui_musicVolume, v, LV_ANIM_ON);

  listMusic(SD, "/", 0);
}
#endif

void getFileList(lv_obj_t *parent, const char *path)
{

  File root = SD.open(path);
  if (!root)
  {
    Serial.println("Failed to open directory");
    return;
  }
  if (!root.isDirectory())
  {
    Serial.println("Not a directory");
    return;
  }

  File file = root.openNextFile();
  while (file)
  {
    String fileName = String(file.name());
    // char n[50];
    // strncpy(n, fileName.c_str(), fileName.length() + 1);
    if (!fileName.startsWith("."))
    {
      add_file_item(parent, (char *)fileName.c_str(), file.size(), !file.isDirectory());
    }
    file = root.openNextFile();
  }
}

#ifdef LVGL_LOOP
void lvgl_loop(void *parameter)
{

  while (true)
  {
    lv_timer_handler();
    delay(5);
  }
  vTaskDelete(NULL);
}

void guiHandler()
{

  xTaskCreatePinnedToCore(
      // xTaskCreate(
      lvgl_loop,   // Function that should be called
      "LVGL Loop", // Name of the task (for debugging)
      16384,       // Stack size (bytes)
      NULL,        // Parameter to pass
      1,           // Task priority
      // NULL
      NULL, // Task handle
      1);
}
#endif

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
  screenTime = (long)NVS.getInt("screentime", (uint32_t)screenTime);

  NVS.getBlob("passCode", passcode.code, 4);
  passcode.set = NVS.getInt("passSet", 0) != 0;

  printf("loaded screentime %d\n", screenTime);

  Serial.printf("Passcode loaded %s - %d%d%d%d\n", passcode.set ? "ON" : "OFF", passcode.code[0], passcode.code[1], passcode.code[2], passcode.code[3]);
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

void saveSettings()
{
  NVS.setInt("brightness", brightness);
  NVS.setInt("theme", themeColor);
  NVS.setBlob("passCode", passcode.code, 4);
  NVS.setInt("passSet", passcode.set ? 1 : 0);
  NVS.setInt("screentime", (uint32_t)screenTime);
  Serial.printf("Passcode set %s - %d%d%d%d\n", passcode.set ? "ON" : "OFF", passcode.code[0], passcode.code[1], passcode.code[2], passcode.code[3]);
  printf("saved screentime %d\n", screenTime);
}

lv_obj_t *create_component(lv_obj_t *parent, AppComponent component)
{
  lv_obj_t *object;
  printf("Comp %d, x:%d, y:%d > %s\n", component.type, component.xPos, component.yPos, &component.text);
  if (component.type == LABEL)
  {
    object = create_label(parent, component.text, component.yPos);
  }
  else if (component.type == BUTTON)
  {
    object = create_button(parent, uuid(component.parent, component.id), component.text, component.xPos, component.yPos, component.width, component.height);
  }
  else if (component.type == SLIDER)
  {
    object = create_slider(parent, uuid(component.parent, component.id), component.xPos, component.yPos, component.width, component.height);
  }
  else if (component.type == SWITCH)
  {
    object = create_switch(parent, uuid(component.parent, component.id), component.xPos, component.yPos);
  }
  else
  {
    object = NULL;
  }

  return object;
}

void loadLocalApp(const char *path, int &size)
{
  Serial.printf("Reading file: %s\r\n", path);
  int z = 0;
  File file = SPIFFS.open(path);
  if (!file || file.isDirectory())
  {
    Serial.println("- failed to open file for reading");
    return;
  }
  Serial.println("- read from file:");
  while (file.available())
  {
    Serial.write(file.read());
    z++;
  }
  file.close();
}

void loadTestApp()
{
  size_t n = 10;
  appSize = n;
  extractApp(ext, sizeof(ext) / sizeof(ext[0]));

  closeApp();

  lv_obj_t *container = app_canvas();

  for (int i = 0; i < n; i++)
  {
    if (testApp[i].parent != 0)
    {
      activeApp[i] = create_component(container, testApp[i]);
    }
  }

  launchApp("Test App", &ui_img_gear_png, true);
}

void deep_sleep()
{

  vibrate(100);

  tft.setBrightness(0);

  esp_sleep_enable_ext0_wakeup(WAKE_PIN, 0); // 1 = High, 0 = Low

  // Go to sleep now
  Serial.println("Going to deep sleep now");
  esp_deep_sleep_start();
}

void wakeup_reason()
{
  esp_sleep_wakeup_cause_t wakeup_reason;

  wakeup_reason = esp_sleep_get_wakeup_cause();

  switch (wakeup_reason)
  {
  case ESP_SLEEP_WAKEUP_EXT0:
    Serial.println("Wakeup caused by external signal using RTC_IO");
    break;
  case ESP_SLEEP_WAKEUP_EXT1:
    Serial.println("Wakeup caused by external signal using RTC_CNTL");
    break;
  case ESP_SLEEP_WAKEUP_TIMER:
    Serial.println("Wakeup caused by timer");
    break;
  case ESP_SLEEP_WAKEUP_TOUCHPAD:
    Serial.println("Wakeup caused by touchpad");
    break;
  case ESP_SLEEP_WAKEUP_ULP:
    Serial.println("Wakeup caused by ULP program");
    break;
  default:
    Serial.printf("Wakeup was not caused by deep sleep: %d\n", wakeup_reason);
    rtc.setTime(1663491331); // Sunday, September 18, 2022 8:55:31 AM
    break;
  }
}

void light_sleep()
{

  // digitalWrite(MOTOR, LOW);
  tft.setBrightness(0);
  openLock();

  esp_sleep_enable_ext0_wakeup(WAKE_PIN, 0); // 1 = High, 0 = Low

  // Go to sleep now
  Serial.println("Going to light sleep now");
  esp_light_sleep_start();
}

void setup()
{
  Serial.begin(115200);

#ifdef MUSIC_PLAYER
  audio.setPinout(I2S_BCLK, I2S_LRC, I2S_DOUT);
#endif
#ifdef GSM
  GSM.begin(115200, SERIAL_8N1, 26, 25);
#endif

  tft.init();
  tft.initDMA();
  tft.startWrite();

#ifndef PLUS
  ft6336u.begin();

  pinMode(MOTOR, OUTPUT);
  digitalWrite(MOTOR, LOW);
#endif

#ifdef PLUS

  pinMode(SD_CS, OUTPUT);
  digitalWrite(SD_CS, HIGH);
  SPI.begin(SDMMC_CLK, SDMMC_D0, SDMMC_CMD);
  SD.begin(SD_CS);

#endif

  NVS.begin();

  getNVSData();

  if (!SPIFFS.begin(FORMAT_SPIFFS_IF_FAILED))
  {
    Serial.println("SPIFFS Mount Failed");
    tft.setBrightness(brightness);

    delay(2000);
    ESP.restart();
  }

  wakeup_reason();

  lv_init();

  Serial.print("Width: ");
  Serial.print(screenWidth);
  Serial.print("\tHeight: ");
  Serial.println(screenHeight);

  // if (psramFound())
  // {
  //   disp_draw_buf = (lv_color_t *)ps_malloc(sizeof(lv_color_t) * screenWidth * 10);
  //   disp_draw_buf2 = (lv_color_t *)ps_malloc(sizeof(lv_color_t) * screenWidth * 10);
  // }
  // else
  // {
  //   disp_draw_buf = (lv_color_t *)malloc(sizeof(lv_color_t) * screenWidth * 10);
  //   disp_draw_buf2 = (lv_color_t *)malloc(sizeof(lv_color_t) * screenWidth * 10);
  // }

  if (!disp_draw_buf)
  {
    Serial.println("LVGL disp_draw_buf allocate failed!");
  }
  else
  {

    Serial.print("Display buffer size: ");

    lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, disp_draw_buf2, screenWidth * SCR);

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
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register(&indev_drv);

    ui_init();

    // lv_disp_load_scr(ui_lockScreen);

    Serial.println("Setup done");
  }
#ifdef LVGL_LOOP
  guiHandler();
#endif
  tft.setBrightness(brightness);
  currentMillis = millis();
  while (currentMillis + 2000 > millis())
  {
#ifndef LVGL_LOOP
    lv_timer_handler();
#endif
  }
  vibrate(200);
  openLock();
  setWifi();
  currentMillis = millis();

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
  // const esp_partition_t *nxt = esp_ota_get_next_update_partition(NULL);

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
  info += "\nStorage space: " + String((SPIFFS.totalBytes() / (1024.0 * 1024.0)), 0) + "MB";
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
#ifdef MUSIC_PLAYER
  audio.setVolume(10); // 0...21
  audio.forceMono(true);
#endif
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

  for (int j = 0; j < 4; j++)
  {
    if (timeouts[j] == screenTime)
    {
      lv_dropdown_set_selected(ui_timeoutSelect, j);
      printf("Selected %d\n", j);
      break;
    }
  }

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

#ifndef PLUS
  touch_data.event = ft6336u.read_td_status();
  touch_data.xpos = ft6336u.read_touch1_x();
  touch_data.ypos = ft6336u.read_touch1_y();
#endif

#ifndef LVGL_LOOP
  lv_timer_handler(); /* let the GUI do its work */
  delay(5);
#endif
  if (playing)
  {
  }

  if (currentMillis + screenTime < millis())
  {
    if (activeRequest || playing)
    {
      // printf("requests are active\n");
      tft.setBrightness(0);
    }
    else
    {
      printf("timeout: going to sleep\n");
      light_sleep();
    }
  }
  else
  {

    rtcTime.day = rtc.getDay();
    rtcTime.month = rtc.getMonth() + 1;
    rtcTime.year = rtc.getYear();

    tft.setBrightness(brightness);

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

  if (Serial.available())
  {
    String cmd = Serial.readStringUntil('\n');
    if (cmd == "MSG")
    {
      showNotification("Message", &ui_img_237043237, "Serial\nMessage from serial port");
    }
    if (cmd == "CALL")
    {
      showCaller("Serial", "", true);
    }
  }
  gsmHandler();
}

void gsmHandler()
{
#ifdef GSM
  if (GSM.available())
  {
    uint8_t buf[50];
    int ln = GSM.readBytes(buf, 50);
    Serial.printf("GSM data len %d\n", ln);

    switch (buf[0])
    {
    case 0xAA:
      if (buf[1] == 0x00)
      {
        Serial.println("No simcard");
      }
      if (buf[1] == 0x01)
      {
        Serial.println("GSM Ready");
      }
      if (buf[1] == 0x02)
      {
        Serial.println("Network Registered");
      }
      break;
    case 0xAB:
      if (buf[1] == 0xC0)
      {
        Serial.printf("Dial State: %d, code %d\n", buf[2], buf[3]);
      }
      if (buf[1] == 0xC1)
      {
        Serial.printf("Hang up: %d, code %d\n", buf[2], buf[3]);
        lv_obj_add_flag(ui_callerScreen, LV_OBJ_FLAG_HIDDEN);
        endVibrate();
      }
      if (buf[1] == 0xC2)
      {
        Serial.printf("Incoming call \n");
        showCaller("Caller", "", true);
      }
      if (buf[1] == 0xC3)
      {
        Serial.println("Answer Success");
      }
      break;
    }
  }
#endif
}

void callFunction(uint8_t type)
{
#ifdef GSM
  switch (type)
  {
  case 0x00:
    GSM.write(0xC0);
    break;
  case 0x01:
    GSM.write(0xC1);
    break;
  case 0x02:
    GSM.write(0xC2);
    break;
  }
#endif
}

#ifdef MUSIC_PLAYER

void setVolume(int volume)
{
  Serial.printf("Set volume: %d\n", volume);
  audio.setVolume(volume);

  uint32_t act = audio.getAudioCurrentTime();
  uint32_t afd = audio.getAudioFileDuration();

  Serial.printf("Duration: %d / %d \n", act, afd);
}

// optional
void audio_info(const char *info)
{
  Serial.print("info        ");
  Serial.println(info);
  // info        Reading file: "/sky_high.mp3"
  String inf = String(info);
  if (inf.startsWith("Reading file:"))
  {
    String fl = inf.substring(16, inf.length() - 1);
    lv_label_set_text(ui_musicTrack, fl.c_str());
    lv_label_set_text(ui_musicMiniText, fl.c_str());
    lv_label_set_text(ui_musicArtist, "");
    lv_label_set_text(ui_musicAlbum, "");
  }
}
void audio_id3data(const char *info)
{ // id3 metadata
  Serial.print("id3data     ");
  Serial.println(info);
  String inf = String(info);
  if (inf.startsWith("Title: "))
  {
    String tt = inf.substring(7, inf.length());
    lv_label_set_text(ui_musicTrack, tt.c_str());
    lv_label_set_text(ui_musicMiniText, tt.c_str());
  }
  if (inf.startsWith("Artist: "))
  {
    String ats = inf.substring(8, inf.length());
    lv_label_set_text(ui_musicArtist, ats.c_str());
  }
  if (inf.startsWith("Album: "))
  {
    String alb = inf.substring(7, inf.length());
    lv_label_set_text(ui_musicAlbum, alb.c_str());
  }
}
void audio_eof_mp3(const char *info)
{ // end of file
  Serial.print("eof_mp3     ");
  Serial.println(info);

  int r = random(MAX_MUSIC);
  playFile(music[r].path);
}
void audio_bitrate(const char *info)
{
  Serial.print("bitrate     ");
  Serial.println(info);
}

#endif