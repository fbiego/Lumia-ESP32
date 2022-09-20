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


#ifndef LUMIA-ESP32_MAIN_H
#define LUMIA-ESP32_MAIN_H

#include <lvgl.h>

#define BL 23

#define I2C_SDA 18
#define I2C_SCL 19
#define RST_N_PIN -1
#define INT_N_PIN 36

#define MOTOR 4

#define FORMAT_SPIFFS_IF_FAILED true

#define MAX_REQUEST 5
#define MAX_APPS 10

#define TIME_REQUEST 0
#define APPS_REQUEST 1


struct TouchData
{
  int xpos;
  int ypos;
  int event;
} touch_data;

// backlight settings
const int ledPin = BL;
const int freq = 1000;
const int ledChannel = 15;
const int resolution = 8;

long currentMillis;
bool onConnect;
bool activeRequest;

char ssid1[20], ssid2[20], ssid3[20], ssid4[20], ssid5[20];
char pass1[20], pass2[20], pass3[20], pass4[20], pass5[20];

/* Change to your screen resolution */
static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t *disp_draw_buf;
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
  TEXTAREA
};

struct AppComponent
{
  uint32_t id;
  uint32_t parent;
  enum Type type;
  char *text;
  uint32_t xPos;
  uint32_t yPos;
  uint32_t width;
  uint32_t height;
};


struct AppStore
{
  bool state;
  uint32_t id;
  char name[20];
  uint32_t version;
  uint32_t size;
  bool installed;
};

struct AppStore appList[MAX_APPS];

lv_obj_t *create_component(lv_obj_t *parent, struct AppComponent component);




#endif