// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: Lumia-ESP32

#ifndef _LUMIA-ESP32_UI_H
#define _LUMIA-ESP32_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if __has_include("lvgl.h")
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

extern lv_obj_t * ui_bootScreen;
extern lv_obj_t * ui_bootLogo;
extern lv_obj_t * ui_lockScreen;
extern lv_obj_t * ui_lockScreenPanel;
extern lv_obj_t * ui_lockScreenTime;
extern lv_obj_t * ui_lockScreenDate;
extern lv_obj_t * ui_batteryIcon;
extern lv_obj_t * ui_batteryBar;
extern lv_obj_t * ui_wifiIcon;
extern lv_obj_t * ui_networkIcon;
extern lv_obj_t * ui_lockTime;
extern lv_obj_t * ui_startScreen;
extern lv_obj_t * ui_Screen5;


LV_IMG_DECLARE(ui_img_windows_logo_png);    // assets\windows_logo.png
LV_IMG_DECLARE(ui_img_wallpaper_png);    // assets\wallpaper.png
LV_IMG_DECLARE(ui_img_1163530804);    // assets\battery-level.png
LV_IMG_DECLARE(ui_img_wifi_png);    // assets\wifi.png
LV_IMG_DECLARE(ui_img_2009460128);    // assets\no-signal.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
