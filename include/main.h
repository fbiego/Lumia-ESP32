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

#ifndef LUMIA - ESP32_MAIN_H
#define LUMIA -ESP32_MAIN_H

#include <lvgl.h>

#ifdef PLUS

#define TFT_RST 4
#define TFT_CS -1
#define TFT_BL 45

#define I2C_SDA 6
#define I2C_SCL 5
#define RST_N_PIN -1
#define INT_N_PIN 7

#define MOTOR -1
#define SCR 30

#define WAKE_PIN GPIO_NUM_7

#define MUSIC_PLAYER

#else
#define TFT_RST 4
#define TFT_CS 15
#define TFT_SCLK 14
#define TFT_DC 21
#define TFT_MOSI 13
#define TFT_MISO -1
#define TFT_BL 23

#define I2C_SDA 18
#define I2C_SCL 19
#define RST_N_PIN -1
#define INT_N_PIN 36

#define MOTOR 4

#define SCR 8
#define WAKE_PIN GPIO_NUM_39

#endif

#define SD_CS 41
#define SDMMC_CMD 40
#define SDMMC_CLK 39
#define SDMMC_D0 38

#define I2S_DOUT 37
#define I2S_BCLK 36
#define I2S_LRC 35

#define FORMAT_SPIFFS_IF_FAILED true

#define MAX_REQUEST 5
#define MAX_APPS 5
#define MAX_MUSIC 10

#define TIME_REQUEST 0
#define APPS_REQUEST 1

#define BLOG_REQUEST 2
#define BLOG_ITEM_REQUEST 3

// #define LVGL_LOOP 1

long currentMillis;
bool onConnect;
bool activeRequest;
long timeout;

char ssid1[20], ssid2[20], ssid3[20], ssid4[20], ssid5[20];
char pass1[20], pass2[20], pass3[20], pass4[20], pass5[20];

/* Change to your screen resolution */
static const uint32_t screenWidth = 320;
static const uint32_t screenHeight = 480;

static lv_disp_draw_buf_t draw_buf;
static lv_disp_drv_t disp_drv;

struct Request
{
  char *url;
  int code;
  bool method;
  char *data;
  bool active;
};

struct Request request[MAX_REQUEST];

bool runRequest();

enum Type
{
  LABEL = 1,
  BUTTON,
  ARC,
  BAR,
  SLIDER,
  CHECKBOX,
  SWITCH,
  TEXTAREA,
  SPINNER
};

struct AppComponent
{
  uint16_t id;
  uint16_t parent;
  enum Type type;
  char text[100];
  uint16_t xPos;
  uint16_t yPos;
  uint16_t width;
  uint16_t height;
};

//#25|34|BTN|Click|20|20|100|50

struct AppStore
{
  bool state;
  uint16_t id;
  char name[20];
  uint16_t version;
  uint16_t size;
  bool installed;
};

struct AppStore appList[MAX_APPS];

lv_obj_t *create_component(lv_obj_t *parent, struct AppComponent component);

struct Passcode
{
  bool set;
  uint8_t code[4];
} passcode;

struct Music
{
  char path[50];
  uint16_t id;
  uint32_t size;
};

struct Music music[MAX_MUSIC];

// extern struct Passcode passcode;
#endif