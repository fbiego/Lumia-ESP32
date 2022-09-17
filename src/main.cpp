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

#include "main.h"
#include <lvgl.h>
#include "FT6336U.h"
#include "ui.h"
#include <Arduino_GFX_Library.h>
#include <ESP32Time.h>

Arduino_DataBus *bus = new Arduino_ESP32SPI(21 /* DC */, 15 /* CS */, 14 /* SCK */, 13 /* MOSI */, -1 /* MISO */, VSPI /* spi_num */);
Arduino_GFX *gfx = new Arduino_ST7796(bus, 22 /* RST */, 0 /* rotation */);
ESP32Time rtc(3 * 3600);
FT6336U ft6336u(I2C_SDA, I2C_SCL, RST_N_PIN, INT_N_PIN);

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

void setup()
{
  Serial.begin(115200);

  gfx->begin();
  gfx->fillScreen(BLACK);

  ft6336u.begin();

  rtc.setTime(1663352526); // GMT: Friday, September 16, 2022 6:22:06 PM

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

  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(ledPin, ledChannel);
  ledcWrite(ledChannel, 100);
  currentMillis = millis();
  while (currentMillis + 2000 > millis())
  {
    lv_timer_handler();
  }
  openLock();

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

  
 String info;

  info = "Flash size: " + String(ESP.getFlashChipSize());
  info += "\nFlash speed: " + String(ESP.getFlashChipSpeed());
  info += "\nRAM size: " + String(ESP.getHeapSize());
  info += "\nPSRAM size: " + String(ESP.getPsramSize());
  info += "\nCPU freq: " + String(ESP.getCpuFreqMHz());
  info += "\nChip model: " + String(ESP.getChipModel());
  info += "\nChip cores: " + String(ESP.getChipCores());
  info += "\nChip version: " + String(ESP.getChipRevision());
  info += "\nCode size: " + String(ESP.getSketchSize());
  info += "\nMac: ";

  for (int i = 0; i < 6; i++)
  {
    if (i > 0)
    {
      info += ":";
    }
    info += String(byte(mac >> (i * 8) & 0xFF), HEX);
  }

  Serial.println(info);

  lv_slider_set_value(ui_brightnessSlider, 100, LV_ANIM_OFF);

  //lv_label_set_text(ui_notificationText, info.c_str());
}

void loop()
{

  // read the touch data
  touch_data.event = ft6336u.read_td_status();
  touch_data.xpos = ft6336u.read_touch1_x();
  touch_data.ypos = ft6336u.read_touch1_y();

  lv_timer_handler(); /* let the GUI do its work */
  delay(5);

  lv_label_set_text(ui_lockScreenTime, rtc.getTime("%H:%M").c_str());
  lv_label_set_text(ui_lockTime, rtc.getTime("%H:%M").c_str());
  lv_label_set_text(ui_lockScreenDate, rtc.getTime("%A, %B %d").c_str());
}
