// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: Lumia-ESP32

#include <Arduino.h>
#include "ui.h"
#include "main.h"
//#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_bootScreen;
lv_obj_t *ui_bootLogo;
lv_obj_t *ui_lockScreen;
lv_obj_t *ui_lockScreenPanel;
lv_obj_t *ui_lockScreenTime;
lv_obj_t *ui_lockScreenDate;
lv_obj_t *ui_statusBar;
lv_obj_t *ui_batteryBar;
lv_obj_t *ui_wifiIcon;
lv_obj_t *ui_networkIcon;
lv_obj_t *ui_lockTime;
lv_obj_t *ui_startScreen;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_startButton;
lv_obj_t *ui_backButton;
lv_obj_t *ui_searchButton;
lv_obj_t *ui_startPanel;
lv_obj_t *ui_systemKeyboard;
lv_obj_t *ui_notificationPanel;
lv_obj_t *ui_actionPanel;
lv_obj_t *ui_actionDate;
lv_obj_t *ui_actionBattery;
lv_obj_t *ui_notificationText;
lv_obj_t *ui_dragPanel;
lv_obj_t *ui_Label7;
lv_obj_t *ui_batteryIcon;
lv_obj_t *ui_settingsScreen;
lv_obj_t *ui_settingsScroll;
lv_obj_t *ui_displayLabel;
lv_obj_t *ui_brightnessLabel;
lv_obj_t *ui_brightnessSlider;
lv_obj_t *ui_timeoutLabel;
lv_obj_t *ui_timeoutSelect;
lv_obj_t *ui_storageLabel;
lv_obj_t *ui_deviceLabel;
lv_obj_t *ui_storageBar;
lv_obj_t *ui_storageText;
lv_obj_t *ui_themeLabel;
lv_obj_t *ui_themeWheel;
lv_obj_t *ui_settingPanel;
lv_obj_t *ui_settingsIcon;
lv_obj_t *ui_settingsLabel;
lv_obj_t *ui_aboutLabel;
lv_obj_t *ui_aboutText;
lv_obj_t *ui_appLedControl;
lv_obj_t *ui_appLedPanel;
lv_obj_t *ui_appLedStatusLabel;
lv_obj_t *ui_appLedSwitch;
lv_obj_t *ui_appLedBrightnessLabel;
lv_obj_t *ui_appLedBrightnessSlider;
lv_obj_t *ui_appLedColorLabel;
lv_obj_t *ui_appLedColorWheel;
lv_obj_t *ui_appLedModeLabel;
lv_obj_t *ui_appLedModeDropdown;
lv_obj_t *ui_appLedSpeedLabel;
lv_obj_t *ui_appLedSpeedSlider;
lv_obj_t *ui_appLedTitle;
lv_obj_t *ui_ledAppIcon;
lv_obj_t *ui_ledAppLabel;
lv_obj_t *ui_alertPanel;
lv_obj_t *ui_alertPanelDialog;
lv_obj_t *ui_alertIcon;
lv_obj_t *ui_alertTitle;
lv_obj_t *ui_alertScroll;
lv_obj_t *ui_alertMessage;
lv_obj_t *ui_alertButton;
lv_obj_t *ui_alertButtonText;
lv_obj_t *ui_appWifi;
lv_obj_t *ui_appWifiPanel;
lv_obj_t *ui_appWifiStatus;
lv_obj_t *ui_appWifiSwitch;
lv_obj_t *ui_appWifiNo;
lv_obj_t *ui_appWifiList;
lv_obj_t *ui_appWifiName;
lv_obj_t *ui_appWifiPass;
lv_obj_t *ui_appWifiSelect;
lv_obj_t *ui_appWifiButton;
lv_obj_t *ui_appWifiButtonLabel;
lv_obj_t *ui_appWifiTitle;
lv_obj_t *ui_appWifiIcon;
lv_obj_t *ui_appWifiLabel;

lv_obj_t *ui_appScreen;
lv_obj_t *ui_appPanel;
lv_obj_t *ui_appCalendar;
lv_obj_t *ui_appCalendarObj;
lv_obj_t *ui_appHeader;
lv_obj_t *ui_appIcon;
lv_obj_t *ui_appLabel;

lv_obj_t *ui_tileView;
lv_obj_t *ui_tileStart;
lv_obj_t *ui_tileApps;

lv_obj_t *ui_startButton;
lv_obj_t *ui_backButton;
lv_obj_t *ui_searchButton;

lv_obj_t *list1;
lv_obj_t *alertBox;

char aboutText[740] = {
    0x4c, 0x75, 0x6d, 0x69, 0x61, 0x20, 0x45, 0x53, 0x50, 0x33, 0x32, 0x0a,
    0x41, 0x20, 0x55, 0x49, 0x20, 0x62, 0x61, 0x73, 0x65, 0x64, 0x20, 0x6f, 0x6e, 0x20, 0x4c, 0x56, 0x47, 0x4c, 0x20, 0x72, 0x75, 0x6e, 0x6e, 0x69, 0x6e, 0x67, 0x20, 0x6f, 0x6e, 0x20, 0x45, 0x53, 0x50, 0x33, 0x32, 0x20, 0x73, 0x69, 0x6d, 0x75, 0x6c, 0x61, 0x74, 0x69, 0x6e, 0x67, 0x20, 0x57, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x73, 0x20, 0x4d, 0x6f, 0x62, 0x69, 0x6c, 0x65, 0x2e, 0x0a,
    0x5b, 0x52, 0x49, 0x50, 0x20, 0x57, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x73, 0x20, 0x50, 0x68, 0x6f, 0x6e, 0x65, 0x5d, 0x20, 0x3a, 0x28, 0x0a,
    0x54, 0x68, 0x69, 0x73, 0x20, 0x64, 0x65, 0x6d, 0x6f, 0x20, 0x70, 0x72, 0x6f, 0x6a, 0x65, 0x63, 0x74, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x74, 0x68, 0x65, 0x20, 0x57, 0x54, 0x33, 0x32, 0x2d, 0x53, 0x43, 0x30, 0x31, 0x20, 0x6d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x2e, 0x0a,
    0x0a,
    0x4d, 0x61, 0x64, 0x65, 0x20, 0x62, 0x79, 0x20, 0x66, 0x62, 0x69, 0x65, 0x67, 0x6f, 0x2e, 0x0a,
    0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x0a,
    0x54, 0x68, 0x61, 0x6e, 0x6b, 0x73, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x79, 0x6f, 0x75, 0x72, 0x20, 0x69, 0x6e, 0x74, 0x65, 0x72, 0x65, 0x73, 0x74, 0x20, 0x69, 0x6e, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x70, 0x72, 0x6f, 0x6a, 0x65, 0x63, 0x74, 0x2e, 0x0a,
    0x53, 0x68, 0x6f, 0x77, 0x20, 0x79, 0x6f, 0x75, 0x72, 0x20, 0x73, 0x75, 0x70, 0x70, 0x6f, 0x72, 0x74, 0x20, 0x62, 0x79, 0x20, 0x63, 0x6f, 0x6e, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x69, 0x6e, 0x67, 0x2c, 0x20, 0x73, 0x68, 0x61, 0x72, 0x69, 0x6e, 0x67, 0x20, 0x61, 0x6e, 0x64, 0x2f, 0x6f, 0x72, 0x20, 0x64, 0x6f, 0x6e, 0x61, 0x74, 0x69, 0x6e, 0x67, 0x2e, 0x0a,
    0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x2d, 0x0a,
    0x50, 0x61, 0x79, 0x70, 0x61, 0x6c, 0x3a, 0x20, 0x66, 0x62, 0x69, 0x65, 0x67, 0x6f, 0x2e, 0x66, 0x62, 0x40, 0x67, 0x6d, 0x61, 0x69, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x0a,
    0x54, 0x77, 0x69, 0x74, 0x74, 0x65, 0x72, 0x3a, 0x20, 0x40, 0x66, 0x62, 0x69, 0x65, 0x67, 0x6f, 0x5f, 0x0a,
    0x59, 0x6f, 0x75, 0x74, 0x75, 0x62, 0x65, 0x3a, 0x20, 0x68, 0x74, 0x74, 0x70, 0x73, 0x3a, 0x2f, 0x2f, 0x77, 0x77, 0x77, 0x2e, 0x79, 0x6f, 0x75, 0x74, 0x75, 0x62, 0x65, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x63, 0x2f, 0x66, 0x62, 0x69, 0x65, 0x67, 0x6f, 0x0a,
    0x00};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 1
#error "#error LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

typedef struct Drag
{
    bool dragging;
    bool active;
    int y;
} drag;

drag lockscreen;
drag notification;

typedef struct AlertDialog
{
    char *title;
    char *message;
} Alert;

Alert alert;

// user settings
int brightness = 100;
uint32_t themeColor = 0xFF0081FF;

///////////////////// ANIMATIONS ////////////////////

///////////////////// CALLBACK FUNCTIONS ////////////////////

static void slider_event_cb(lv_event_t *e)
{
    lv_obj_t *slider = lv_event_get_target(e);
    if (slider == ui_brightnessSlider)
    {
        brightness = (int)lv_slider_get_value(slider);
        ledcWrite(ledChannel, brightness);
    }
}

static void event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED)
    {
        if (obj == ui_appWifiButton)
        {
            int index = lv_dropdown_get_selected(ui_appWifiSelect);
            char *name = lv_textarea_get_text(ui_appWifiName);
            char *pass = lv_textarea_get_text(ui_appWifiPass);
            switch (index)
            {
            case 0:
                strncpy(ssid1, name, strlen(name) + 1);
                strncpy(pass1, pass, strlen(pass) + 1);
                break;
            case 1:
                strncpy(ssid2, name, strlen(name) + 1);
                strncpy(pass2, pass, strlen(pass) + 1);
                break;
            case 2:
                strncpy(ssid3, name, strlen(name) + 1);
                strncpy(pass3, pass, strlen(pass) + 1);
                break;
            case 3:
                strncpy(ssid4, name, strlen(name) + 1);
                strncpy(pass4, pass, strlen(pass) + 1);
                break;
            case 4:
                strncpy(ssid5, name, strlen(name) + 1);
                strncpy(pass5, pass, strlen(pass) + 1);
                break;
            }
            alert.title = name;
            alert.message = "WiFi Saved";
            showAlert(&ui_img_gear_png, true, 200);
            saveWifiList();
        }
    }

    if (code == LV_EVENT_SCREEN_UNLOADED)
    {
        if (obj == ui_settingsScreen)
        {
            saveSettings();
        }
    }
}

void theme_change(lv_event_t *e)
{
    lv_obj_t *picker = lv_event_get_target(e);
    // val = lv_slider_get_value(picker); //
    lv_color_t c = lv_colorwheel_get_rgb(picker);
    lv_disp_t *display = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(display, c, lv_palette_main(LV_PALETTE_GREY), true, LV_FONT_DEFAULT);
    lv_disp_set_theme(display, theme);
    lv_obj_set_style_bg_color(ui_dragPanel, c, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_deviceLabel, c, LV_PART_MAIN | LV_STATE_DEFAULT);
    themeColor = lv_color_to32(c);

    uint32_t i;
    for (i = 0; i < lv_obj_get_child_cnt(list1); i++)
    {
        lv_obj_t *child = lv_obj_get_child(list1, i);
        lv_obj_t *icon = lv_obj_get_child(child, 1);

        lv_obj_set_style_bg_color(icon, c, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_border_color(icon, c, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
}

static void event_settings(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED)
    {
        openSettings();
    }
}

static void event_navigate(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_target(e);
    lv_disp_t *display = lv_disp_get_default();
    lv_obj_t *actScr = lv_disp_get_scr_act(display);

    if (code == LV_EVENT_CLICKED)
    {
        // printf("Navigate action: ");
        lv_obj_add_flag(ui_systemKeyboard, LV_OBJ_FLAG_HIDDEN);

        if (obj == ui_backButton)
        {
            // printf("Back\n");
            vibrate(100);
            if (actScr == ui_startScreen)
            {
                openLock();
            }
            else if (actScr != ui_startScreen)
            {
                openStart();
            }
            else
            {
                lv_obj_set_tile_id(ui_tileView, 0, 0, LV_ANIM_ON);
            }
        }
        if (obj == ui_startButton)
        {
            // printf("Start\n");
            vibrate(100);
            if (actScr != ui_startScreen)
            {
                openStart();
            }
            else
            {
                lv_obj_set_tile_id(ui_tileView, 0, 0, LV_ANIM_ON);
            }
        }
        if (obj == ui_searchButton)
        {
            // printf("Search\n");
            vibrate(100);
        }
    }
}

static void ui_event_Image6(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);

    if (event == LV_EVENT_PRESSED)
    {
        openLock();
    }
    // printf("Event code: %d\n", event);
}

static void ui_event_notificationPanel(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    lv_indev_t *indev = lv_indev_get_act();
    if (event == LV_EVENT_PRESSING)
    {
        // onDragg(e);

        // printf("x:%d, y:%d\n", indev->proc.types.pointer.vect.x, indev->proc.types.pointer.vect.y);
        // printf("Drag\tx:%d, y:%d\n", indev->proc.types.pointer.act_point.x, indev->proc.types.pointer.act_point.y);

        if (notification.dragging)
        {
            int vect = indev->proc.types.pointer.act_point.y - notification.y;
            if (notification.active)
            {

                // closing notification panel
                if (vect <= 0 && vect >= -480)
                {

                    lv_obj_set_y(ui_notificationPanel, vect);

                    if (vect >= -320)
                    {
                        lv_obj_set_y(ui_actionPanel, 50 + (vect * -1));
                    }
                }
            }
            else
            {
                // opening notification panel
                if (vect >= 0 && vect <= 440)
                {

                    lv_obj_set_y(ui_notificationPanel, -440 + vect);

                    if (vect >= 105)
                    {
                        lv_obj_set_y(ui_actionPanel, 380 - (vect - 105));
                    }
                }
            }
        }
    }
    if (event == LV_EVENT_PRESSED)
    {
        // printf("Press\tx:%d, y:%d\n", indev->proc.types.pointer.act_point.x, indev->proc.types.pointer.act_point.y);

        notification.y = indev->proc.types.pointer.act_point.y;
        if (!notification.active)
        {
            // 0 - 30
            if (notification.y < 30)
            {
                // dragging = true;
                lv_obj_set_style_opa(ui_notificationPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_y(ui_actionPanel, 380);

                lv_obj_set_style_text_opa(ui_actionBattery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_actionDate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_notificationText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            }
        }
        else
        {
            lv_obj_set_style_text_opa(ui_actionBattery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_opa(ui_actionDate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_opa(ui_notificationText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        }

        notification.dragging = true;
        // lv_obj_set_y(ui_notificationPanel, -440);
    }
    if (event == LV_EVENT_RELEASED)
    {
        // printf("Release\tx:%d, y:%d\n", indev->proc.types.pointer.act_point.x, indev->proc.types.pointer.act_point.y);
        notification.dragging = false;

        int vect = indev->proc.types.pointer.act_point.y - notification.y;
        // printf("Drag strength: %d\n", vect);

        if (notification.active)
        {
            if ((vect * -1) < 150)
            {
                lv_obj_set_style_opa(ui_notificationPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_y(ui_notificationPanel, 0);
                lv_obj_set_y(ui_actionPanel, 50);
                lv_obj_set_style_text_opa(ui_actionBattery, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_actionDate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_notificationText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                notification.active = true;
            }
            else
            {
                lv_obj_set_y(ui_notificationPanel, -440);
                lv_obj_set_style_opa(ui_notificationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_y(ui_actionPanel, 380);
                lv_obj_set_style_text_opa(ui_actionBattery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_actionDate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_notificationText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                notification.active = false;
            }
        }
        else
        {

            if (vect > 150)
            {
                lv_obj_set_style_opa(ui_notificationPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_y(ui_notificationPanel, 0);
                lv_obj_set_y(ui_actionPanel, 50);
                lv_obj_set_style_text_opa(ui_actionBattery, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_actionDate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_notificationText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                notification.active = true;
            }
            else
            {
                lv_obj_set_y(ui_notificationPanel, -440);
                lv_obj_set_style_opa(ui_notificationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_y(ui_actionPanel, 380);
                lv_obj_set_style_text_opa(ui_actionBattery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_actionDate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_notificationText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                notification.active = false;
            }
        }
    }
}

static void ui_event_lockScreenPanel(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    lv_indev_t *indev = lv_indev_get_act();
    if (event == LV_EVENT_PRESSING)
    {
        // onDragg(e);

        // printf("x:%d, y:%d\n", indev->proc.types.pointer.vect.x, indev->proc.types.pointer.vect.y);
        // printf("Drag\tx:%d, y:%d\n", indev->proc.types.pointer.act_point.x, indev->proc.types.pointer.act_point.y);

        if (lockscreen.dragging)
        {
            int vect = lockscreen.y - indev->proc.types.pointer.act_point.y;
            if (vect >= 0)
            {
                lv_obj_set_y(ui_lockScreenTime, 138 - vect);
                lv_obj_set_y(ui_lockScreenDate, 178 - vect);

                lv_obj_set_style_text_opa(ui_lockScreenTime, 255 - (vect / 2), LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_lockScreenDate, 255 - (vect / 2), LV_PART_MAIN | LV_STATE_DEFAULT);
            }
        }
    }
    if (event == LV_EVENT_PRESSED)
    {
        // printf("Press\tx:%d, y:%d\n", indev->proc.types.pointer.act_point.x, indev->proc.types.pointer.act_point.y);
        lockscreen.y = indev->proc.types.pointer.act_point.y;
        if (lockscreen.y > 150)
        {
            // dragging = true;
        }
        lockscreen.dragging = true;
    }
    if (event == LV_EVENT_RELEASED)
    {
        // printf("Release\tx:%d, y:%d\n", indev->proc.types.pointer.act_point.x, indev->proc.types.pointer.act_point.y);
        lockscreen.dragging = false;

        int vect = lockscreen.y - indev->proc.types.pointer.act_point.y;
        // printf("Drag strength: %d\n", vect);

        if (vect > 150)
        {

            openStart();
        }

        lv_obj_set_y(ui_lockScreenTime, 138);
        lv_obj_set_y(ui_lockScreenDate, 178);

        lv_obj_set_style_text_opa(ui_lockScreenTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(ui_lockScreenDate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
}

static void event_alert(lv_event_t *e)
{
    lv_obj_t *obj = lv_event_get_current_target(e);
    showAlert(NULL, false, 0);
}

static void event_launch(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED)
    {

        char buf[150];
        char *data = (char *)lv_event_get_user_data(e);
        // printf("App name: %s\n", data);

        if (data == "WiFi")
        {
            openAppWifi();
        }
        else if (data == "Calendar")
        {
            openAppCalendar();
        }
        else if (data == "Test App")
        {
            loadTestApp();
        }
        else if (data == "Store")
        {
            openAppStore();
        }
        else if (data == "About")
        {
            openAppAbout();
        }
        else
        {
            alert.title = "App not installed";
            char *msg = " is not currently available\nOn the app list, click on \"About\" for more info.";
            strncpy(buf, data, strlen(data));
            strncpy(buf + strlen(data), msg, strlen(msg) + 1);
            alert.message = buf;

            showAlert(&ui_img_gear_png, true, 200);
        }
    }
}

static void event_textarea(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (code == LV_EVENT_FOCUSED)
    {
        lv_keyboard_set_textarea(ui_systemKeyboard, ta);
        lv_obj_clear_flag(ui_systemKeyboard, LV_OBJ_FLAG_HIDDEN);
    }

    if (code == LV_EVENT_DEFOCUSED)
    {
        lv_keyboard_set_textarea(ui_systemKeyboard, NULL);
        lv_obj_add_flag(ui_systemKeyboard, LV_OBJ_FLAG_HIDDEN);
    }
}

static void event_appstore_install(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_target(e);

    if (code == LV_EVENT_CLICKED)
    {
       int id = (int)lv_event_get_user_data(e);
        alert.title = "Install";
        printf("%d\n", id);
        alert.message = "Feature is not currently available\nComing soon";

        showAlert(&ui_img_gear_png, true, 200);
    }
}

static void event_appstore_uninstall(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_target(e);

    if (code == LV_EVENT_CLICKED)
    {
        int id = (int)lv_event_get_user_data(e);
        alert.title = "Uninstall";
        alert.message = "Feature is not currently available\nComing soon";

        showAlert(&ui_img_gear_png, true, 200);
    }
}
///////////////////// FUNCTIONS ////////////////////

void create_tile(lv_obj_t *parent, char *name, const void *src, int col, int row, int size, lv_event_cb_t callback)
{
    lv_obj_t *label;
    lv_obj_t *obj;
    lv_obj_t *icon;
    obj = lv_btn_create(parent);
    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, col, size, LV_GRID_ALIGN_STRETCH, row, 1);
    lv_obj_add_event_cb(obj, callback, LV_EVENT_ALL, name);
    label = lv_label_create(obj);
    lv_label_set_text(label, name);
    lv_obj_center(label);
    lv_obj_set_align(label, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_x(label, -5);
    lv_obj_set_y(label, 5);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
    icon = lv_img_create(obj);
    lv_img_set_src(icon, src);
    lv_obj_set_width(icon, LV_SIZE_CONTENT);
    lv_obj_set_height(icon, LV_SIZE_CONTENT);
    lv_obj_set_align(icon, LV_ALIGN_CENTER);
    lv_obj_add_flag(icon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(icon, LV_OBJ_FLAG_SCROLLABLE);
}

void create_action_tile(lv_obj_t *parent, char *name, const void *src, bool checked, int col, int row, int size, lv_event_cb_t callback)
{
    lv_obj_t *label;
    lv_obj_t *obj;
    lv_obj_t *icon;
    obj = lv_btn_create(parent);
    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, col, size, LV_GRID_ALIGN_STRETCH, row, 1);
    lv_obj_add_flag(obj, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_add_event_cb(obj, callback, LV_EVENT_VALUE_CHANGED, 10);

    if (!checked)
    {
        lv_obj_add_state(obj, LV_STATE_CHECKED); /*Make the chekbox checked*/
    }
    else
    {
        lv_obj_clear_state(obj, LV_STATE_CHECKED); /*MAke the checkbox unchecked*/
    }

    lv_obj_add_flag(obj, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
    // lv_obj_set_style_bg_color(obj, lv_palette_main(LV_PALETTE_BLUE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_CHECKED);
    // lv_obj_set_style_bg_color(obj, lv_color_hex(0x7A7A7A), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    label = lv_label_create(obj);
    lv_label_set_text(label, name);
    lv_obj_center(label);
    lv_obj_set_align(label, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_x(label, -10);
    lv_obj_set_y(label, 5);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);
    icon = lv_img_create(obj);
    lv_img_set_src(icon, src);
    lv_obj_set_width(icon, LV_SIZE_CONTENT);
    lv_obj_set_height(icon, LV_SIZE_CONTENT);
    lv_obj_set_align(icon, LV_ALIGN_CENTER);
    lv_obj_add_flag(icon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(icon, LV_OBJ_FLAG_SCROLLABLE);
}

void add_item(lv_obj_t *parent, char *name, const void *src, lv_event_cb_t callback)
{

    lv_obj_t *obj;
    lv_obj_t *icon;
    lv_obj_t *label;

    obj = lv_btn_create(parent);

    lv_obj_set_width(obj, lv_pct(100));
    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(obj, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(obj, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(obj, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_border_width(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(obj, callback, LV_EVENT_ALL, name);

    label = lv_label_create(obj);
    lv_label_set_text(label, name);
    lv_obj_center(label);
    lv_obj_set_align(label, LV_ALIGN_LEFT_MID);
    lv_obj_set_x(label, 50);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    icon = lv_img_create(obj);
    lv_img_set_src(icon, src);
    lv_obj_set_width(icon, LV_SIZE_CONTENT);
    lv_obj_set_height(icon, LV_SIZE_CONTENT);
    lv_obj_set_x(icon, 5);
    lv_obj_set_align(label, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(icon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(icon, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(icon, lv_palette_main(LV_PALETTE_BLUE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(icon, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(icon, lv_palette_main(LV_PALETTE_BLUE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(icon, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(icon, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void add_app(lv_obj_t *parent, struct AppStore app)
{
    lv_obj_t *ui_appListItem = lv_obj_create(parent);
    lv_obj_set_width(ui_appListItem, 300);
    lv_obj_set_height(ui_appListItem, 59);
    lv_obj_set_x(ui_appListItem, 0);
    lv_obj_set_y(ui_appListItem, 137);
    lv_obj_set_align(ui_appListItem, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_appListItem, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_appListItem, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appListItem, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appListItem, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_appListItem, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *ui_appListName = lv_label_create(ui_appListItem);
    lv_obj_set_width(ui_appListName, 160);
    lv_obj_set_height(ui_appListName, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_appListName, 0);
    lv_obj_set_y(ui_appListName, -4);
    lv_label_set_text(ui_appListName, app.name);
    lv_obj_set_style_text_font(ui_appListName, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *ui_appListSize = lv_label_create(ui_appListItem);
    lv_obj_set_width(ui_appListSize, 160);
    lv_obj_set_height(ui_appListSize, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_appListSize, 0);
    lv_obj_set_y(ui_appListSize, 14);
    lv_label_set_text_fmt(ui_appListSize, " v%d\t\t%.3fkB", app.version, (app.size / 1024.0));
    lv_obj_set_style_text_font(ui_appListSize, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *ui_appListAction = lv_btn_create(ui_appListItem);
    lv_obj_set_width(ui_appListAction, 100);
    lv_obj_set_height(ui_appListAction, LV_SIZE_CONTENT); /// 50
    lv_obj_set_align(ui_appListAction, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_appListAction, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_appListAction, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_radius(ui_appListAction, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_appListAction, app.installed ? event_appstore_uninstall: event_appstore_install, LV_EVENT_CLICKED, app.id);

    lv_obj_t *ui_appListActionLabel = lv_label_create(ui_appListAction);
    lv_obj_set_width(ui_appListActionLabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_appListActionLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_appListActionLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_appListActionLabel, app.installed ? "Uninstall" : "Install");
}

///////////////////// DYNAMIC COMPONENTS ////////////////////

lv_obj_t *create_label(lv_obj_t *parent, const char *text, uint32_t yPos)
{
    lv_obj_t *label = lv_label_create(parent);
    lv_obj_set_width(label, 280);              /// 1
    lv_obj_set_height(label, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(label, 20);
    lv_obj_set_y(label, yPos);
    lv_label_set_text(label, text);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    return label;
}

lv_obj_t *create_button(lv_obj_t *parent, const char *text, uint32_t xPos, uint32_t yPos, uint32_t width)
{
    lv_obj_t *button = lv_btn_create(parent);
    lv_obj_set_width(button, width);
    lv_obj_set_height(button, LV_SIZE_CONTENT); /// 50
    lv_obj_set_x(button, xPos);
    lv_obj_set_y(button, yPos);
    lv_obj_set_align(button, LV_ALIGN_TOP_LEFT);
    lv_obj_add_flag(button, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(button, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_radius(button, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(button, event_handler, LV_EVENT_ALL, NULL);

    lv_obj_t *label = lv_label_create(button);
    lv_obj_set_width(label, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(label, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(label, LV_ALIGN_CENTER);
    lv_label_set_text(label, text);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    return button;
}

lv_obj_t *create_slider(lv_obj_t *parent, uint32_t xPos, uint32_t yPos, uint32_t width, uint32_t height)
{
    lv_obj_t *slider = lv_slider_create(parent);
    lv_slider_set_range(slider, 0, 255);
    lv_obj_set_width(slider, width);
    lv_obj_set_height(slider, height);
    lv_obj_set_x(slider, xPos);
    lv_obj_set_y(slider, yPos);
    lv_obj_add_event_cb(slider, slider_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
    return slider;
}

lv_obj_t *create_switch(lv_obj_t *parent, uint32_t xPos, uint32_t yPos)
{
    lv_obj_t *switcH = lv_switch_create(parent);
    lv_obj_set_x(switcH, xPos);
    lv_obj_set_y(switcH, yPos);
    return switcH;
}

///////////////////// MODULES ////////////////////
lv_obj_t *app_canvas()
{
    lv_obj_t *container = lv_obj_create(ui_appPanel);
    lv_obj_set_width(container, 320);
    lv_obj_set_height(container, LV_SIZE_CONTENT); /// 50
    lv_obj_set_align(container, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(container, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_scrollbar_mode(container, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_radius(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(container, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(container, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    return container;
}

void alert_box(lv_obj_t *parent)
{
    // ui_alertPanel

    ui_alertPanel = lv_obj_create(parent);

    lv_obj_set_width(ui_alertPanel, 320);
    lv_obj_set_height(ui_alertPanel, 480);

    lv_obj_set_x(ui_alertPanel, 0);
    lv_obj_set_y(ui_alertPanel, 0);

    lv_obj_set_align(ui_alertPanel, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_alertPanel, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_add_flag(ui_alertPanel, LV_OBJ_FLAG_HIDDEN);

    lv_obj_set_style_radius(ui_alertPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_alertPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_alertPanel, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_alertPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_alertPanelDialog

    ui_alertPanelDialog = lv_obj_create(ui_alertPanel);

    lv_obj_set_width(ui_alertPanelDialog, 300);
    lv_obj_set_height(ui_alertPanelDialog, 200);

    lv_obj_set_x(ui_alertPanelDialog, 0);
    lv_obj_set_y(ui_alertPanelDialog, 0);

    lv_obj_set_align(ui_alertPanelDialog, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_alertPanelDialog, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_alertPanelDialog, LV_SCROLLBAR_MODE_OFF);

    lv_obj_set_style_radius(ui_alertPanelDialog, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_alertPanelDialog, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_alertPanelDialog, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_alertPanelDialog, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_alertPanelDialog, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_alertPanelDialog, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_alertPanelDialog, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_alertPanelDialog, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_alertPanelDialog, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_alertPanelDialog, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_alertIcon

    ui_alertIcon = lv_img_create(ui_alertPanelDialog);
    lv_img_set_src(ui_alertIcon, &ui_img_gear_png);

    lv_obj_set_width(ui_alertIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_alertIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_alertIcon, 24);
    lv_obj_set_y(ui_alertIcon, -5);

    lv_obj_add_flag(ui_alertIcon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_alertIcon, LV_OBJ_FLAG_SCROLLABLE);

    // ui_alertTitle

    ui_alertTitle = lv_label_create(ui_alertPanelDialog);

    lv_obj_set_width(ui_alertTitle, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_alertTitle, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_alertTitle, 57);
    lv_obj_set_y(ui_alertTitle, -2);

    lv_label_set_text(ui_alertTitle, "Alert Title");

    lv_obj_set_style_text_font(ui_alertTitle, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_alertScroll

    ui_alertScroll = lv_obj_create(ui_alertPanelDialog);

    lv_obj_set_width(ui_alertScroll, 300);
    lv_obj_set_height(ui_alertScroll, 100);

    lv_obj_set_x(ui_alertScroll, 0);
    lv_obj_set_y(ui_alertScroll, 29);

    lv_obj_set_align(ui_alertScroll, LV_ALIGN_TOP_MID);

    lv_obj_set_scrollbar_mode(ui_alertScroll, LV_SCROLLBAR_MODE_ACTIVE);

    lv_obj_set_style_radius(ui_alertScroll, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_alertScroll, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_alertScroll, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_alertScroll, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_alertScroll, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_alertScroll, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_alertScroll, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_alertScroll, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_alertMessage

    ui_alertMessage = lv_label_create(ui_alertScroll);

    lv_obj_set_width(ui_alertMessage, 260);
    lv_obj_set_height(ui_alertMessage, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_alertMessage, 20);
    lv_obj_set_y(ui_alertMessage, 0);

    lv_label_set_text(ui_alertMessage,
                      "Flash size: 4194304Flash speed: 40000000\nRAM size: 322216\nPSRAM size: 4194252\nCPU freq: 240\nChip model: ESP32-D0WDQ5\nChip cores: 2\nChip version: 1\nCode size: 1221088\nMac: e8:31:cd:1a:19:94");

    lv_obj_set_style_text_font(ui_alertMessage, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_alertButton

    ui_alertButton = lv_btn_create(ui_alertPanelDialog);

    lv_obj_set_width(ui_alertButton, 100);
    lv_obj_set_height(ui_alertButton, 30);

    lv_obj_set_x(ui_alertButton, 0);
    lv_obj_set_y(ui_alertButton, 36);

    lv_obj_set_align(ui_alertButton, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_flag(ui_alertButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_alertButton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_alertButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_alertButton, event_alert, LV_EVENT_CLICKED, NULL);

    // ui_alertButtonText

    ui_alertButtonText = lv_label_create(ui_alertButton);

    lv_obj_set_width(ui_alertButtonText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_alertButtonText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_alertButtonText, 0);
    lv_obj_set_y(ui_alertButtonText, 0);

    lv_obj_set_align(ui_alertButtonText, LV_ALIGN_CENTER);

    lv_label_set_text(ui_alertButtonText, "Okay");
}

void navigation(lv_obj_t *parent)
{
    // ui_Panel2

    ui_Panel2 = lv_obj_create(parent);

    lv_obj_set_width(ui_Panel2, 320);
    lv_obj_set_height(ui_Panel2, 40);

    lv_obj_set_x(ui_Panel2, 0);
    lv_obj_set_y(ui_Panel2, 0);

    lv_obj_set_align(ui_Panel2, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Panel2, LV_BORDER_SIDE_TOP, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_startButton

    ui_startButton = lv_imgbtn_create(ui_Panel2);
    lv_imgbtn_set_src(ui_startButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_716248923, NULL);
    lv_obj_set_height(ui_startButton, 24);
    lv_obj_set_width(ui_startButton, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_startButton, 0);
    lv_obj_set_y(ui_startButton, 0);
    lv_obj_set_align(ui_startButton, LV_ALIGN_CENTER);
    lv_obj_add_event_cb(ui_startButton, event_navigate, LV_EVENT_ALL, NULL);

    // ui_backButton

    ui_backButton = lv_imgbtn_create(ui_Panel2);
    lv_imgbtn_set_src(ui_backButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_back_png, NULL);
    lv_obj_set_height(ui_backButton, 24);
    lv_obj_set_width(ui_backButton, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_backButton, -90);
    lv_obj_set_y(ui_backButton, 0);
    lv_obj_set_align(ui_backButton, LV_ALIGN_CENTER);
    lv_obj_add_event_cb(ui_backButton, event_navigate, LV_EVENT_ALL, NULL);

    // ui_searchButton

    ui_searchButton = lv_imgbtn_create(ui_Panel2);
    lv_imgbtn_set_src(ui_searchButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1954556228, NULL);
    lv_obj_set_height(ui_searchButton, 24);
    lv_obj_set_width(ui_searchButton, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_searchButton, 90);
    lv_obj_set_y(ui_searchButton, 0);
    lv_obj_set_align(ui_searchButton, LV_ALIGN_CENTER);
    lv_obj_add_event_cb(ui_searchButton, event_navigate, LV_EVENT_ALL, NULL);
}

void status_bar(lv_obj_t *parent)
{
    // ui_statusBar

    ui_statusBar = lv_obj_create(parent);

    lv_obj_set_width(ui_statusBar, 320);
    lv_obj_set_height(ui_statusBar, 30);

    lv_obj_set_x(ui_statusBar, 0);
    lv_obj_set_y(ui_statusBar, 0);

    lv_obj_set_align(ui_statusBar, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_statusBar, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_CLICKABLE);

    lv_obj_set_style_radius(ui_statusBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_statusBar, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_statusBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_statusBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_statusBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_statusBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_statusBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_statusBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_batteryIcon

    ui_batteryIcon = lv_img_create(ui_statusBar);
    lv_img_set_src(ui_batteryIcon, &ui_img_1947241130);

    lv_obj_set_width(ui_batteryIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_batteryIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_batteryIcon, -45);
    lv_obj_set_y(ui_batteryIcon, 5);

    lv_obj_set_align(ui_batteryIcon, LV_ALIGN_TOP_RIGHT);

    lv_obj_add_flag(ui_batteryIcon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_batteryIcon, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_CLICKABLE);

    // ui_batteryBar

    ui_batteryBar = lv_bar_create(ui_statusBar);
    lv_bar_set_range(ui_batteryBar, 0, 100);
    lv_bar_set_value(ui_batteryBar, 25, LV_ANIM_OFF);

    lv_obj_set_width(ui_batteryBar, 15);
    lv_obj_set_height(ui_batteryBar, 6);

    lv_obj_set_x(ui_batteryBar, -50);
    lv_obj_set_y(ui_batteryBar, 14);

    lv_obj_set_align(ui_batteryBar, LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_batteryBar, LV_OBJ_FLAG_CLICKABLE);

    lv_obj_set_style_radius(ui_batteryBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_batteryBar, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_batteryBar, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_batteryBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_wifiIcon

    ui_wifiIcon = lv_img_create(ui_statusBar);
    lv_img_set_src(ui_wifiIcon, &ui_img_wifi_png);

    lv_obj_set_width(ui_wifiIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_wifiIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_wifiIcon, 35);
    lv_obj_set_y(ui_wifiIcon, 11);

    lv_obj_add_flag(ui_wifiIcon, LV_OBJ_FLAG_ADV_HITTEST | LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(ui_wifiIcon, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_CLICKABLE);

    // ui_networkIcon

    ui_networkIcon = lv_img_create(ui_statusBar);
    lv_img_set_src(ui_networkIcon, &ui_img_2009460128);

    lv_obj_set_width(ui_networkIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_networkIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_networkIcon, 10);
    lv_obj_set_y(ui_networkIcon, 10);

    lv_obj_add_flag(ui_networkIcon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_networkIcon, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_CLICKABLE);

    // ui_lockTime

    ui_lockTime = lv_label_create(ui_statusBar);

    lv_obj_set_width(ui_lockTime, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_lockTime, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_lockTime, -4);
    lv_obj_set_y(ui_lockTime, 9);

    lv_obj_set_align(ui_lockTime, LV_ALIGN_TOP_RIGHT);

    lv_label_set_text(ui_lockTime, "18:40");
    lv_obj_clear_flag(ui_lockTime, LV_OBJ_FLAG_CLICKABLE);
    lv_obj_set_style_text_font(ui_lockTime, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void keyboard(lv_obj_t *parent)
{
    // ui_systemKeyboard
    ui_systemKeyboard = lv_keyboard_create(parent);
    lv_obj_clear_flag(ui_systemKeyboard, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_width(ui_systemKeyboard, 320);
    lv_obj_set_height(ui_systemKeyboard, 150);

    lv_obj_set_x(ui_systemKeyboard, 0);
    lv_obj_set_y(ui_systemKeyboard, -40);

    lv_obj_set_align(ui_systemKeyboard, LV_ALIGN_BOTTOM_MID);

    lv_obj_add_flag(ui_systemKeyboard, LV_OBJ_FLAG_HIDDEN);

    lv_obj_set_style_radius(ui_systemKeyboard, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_systemKeyboard, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_systemKeyboard, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_systemKeyboard, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_systemKeyboard, 0, LV_PART_ITEMS | LV_STATE_DEFAULT);
}

void notification_panel(lv_obj_t *parent)
{

    // ui_notificationPanel

    ui_notificationPanel = lv_obj_create(parent);

    lv_obj_set_width(ui_notificationPanel, 320);
    lv_obj_set_height(ui_notificationPanel, 480);

    lv_obj_set_x(ui_notificationPanel, 0);
    lv_obj_set_y(ui_notificationPanel, -440);

    lv_obj_set_align(ui_notificationPanel, LV_ALIGN_TOP_MID);

    lv_obj_add_flag(ui_notificationPanel, LV_OBJ_FLAG_CHECKABLE);
    lv_obj_clear_flag(ui_notificationPanel, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_notificationPanel, LV_SCROLLBAR_MODE_OFF);

    lv_obj_set_style_radius(ui_notificationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_notificationPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_notificationPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_notificationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_notificationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_notificationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_notificationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_notificationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_notificationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_notificationPanel, ui_event_notificationPanel, LV_EVENT_ALL, NULL);

    // ui_actionPanel

    ui_actionPanel = lv_obj_create(ui_notificationPanel);

    static lv_coord_t col_dsc[] = {51, 51, 51, 51, 51, LV_GRID_TEMPLATE_LAST};
    static lv_coord_t row_dsc[] = {40, 40, 40, LV_GRID_TEMPLATE_LAST};

    lv_obj_set_style_grid_column_dsc_array(ui_actionPanel, col_dsc, 0);
    lv_obj_set_style_grid_row_dsc_array(ui_actionPanel, row_dsc, 0);
    lv_obj_set_width(ui_actionPanel, 320);
    lv_obj_set_height(ui_actionPanel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_actionPanel, 0);
    lv_obj_set_y(ui_actionPanel, 50);

    lv_obj_set_align(ui_actionPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_actionPanel, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_scrollbar_mode(ui_actionPanel, LV_SCROLLBAR_MODE_OFF);

    lv_obj_set_layout(ui_actionPanel, LV_LAYOUT_GRID);

    lv_obj_set_style_radius(ui_actionPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_actionPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_actionPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_actionPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    create_action_tile(ui_actionPanel, "WiFi", NULL, true, 0, 0, 1, NULL);
    create_action_tile(ui_actionPanel, "Buetooth", NULL, true, 1, 0, 1, NULL);
    create_action_tile(ui_actionPanel, "Screen", NULL, false, 2, 0, 1, NULL);
    create_action_tile(ui_actionPanel, "Network", NULL, false, 3, 0, 1, NULL);
    create_action_tile(ui_actionPanel, "Location", NULL, true, 4, 0, 1, NULL);

    // ui_actionDate

    ui_actionDate = lv_label_create(ui_notificationPanel);

    lv_obj_set_width(ui_actionDate, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_actionDate, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_actionDate, -11);
    lv_obj_set_y(ui_actionDate, 30);

    lv_obj_set_align(ui_actionDate, LV_ALIGN_TOP_RIGHT);

    lv_label_set_text(ui_actionDate, "9/17");

    lv_obj_set_style_text_font(ui_actionDate, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_actionBattery

    ui_actionBattery = lv_label_create(ui_notificationPanel);

    lv_obj_set_width(ui_actionBattery, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_actionBattery, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_actionBattery, -50);
    lv_obj_set_y(ui_actionBattery, 30);

    lv_obj_set_align(ui_actionBattery, LV_ALIGN_TOP_RIGHT);

    lv_label_set_text(ui_actionBattery, "35%");

    lv_obj_set_style_text_font(ui_actionBattery, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_actionBattery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_actionBattery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_actionBattery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_actionBattery, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_notificationText

    ui_notificationText = lv_label_create(ui_notificationPanel);

    lv_obj_set_width(ui_notificationText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_notificationText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_notificationText, 10);
    lv_obj_set_y(ui_notificationText, 120);

    lv_label_set_text(ui_notificationText, "No notifications");

    lv_obj_set_style_text_font(ui_notificationText, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_dragPanel

    ui_dragPanel = lv_obj_create(ui_notificationPanel);

    lv_obj_set_width(ui_dragPanel, 320);
    lv_obj_set_height(ui_dragPanel, 10);

    lv_obj_set_x(ui_dragPanel, 0);
    lv_obj_set_y(ui_dragPanel, 0);

    lv_obj_set_align(ui_dragPanel, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_dragPanel, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_scrollbar_mode(ui_dragPanel, LV_SCROLLBAR_MODE_OFF);

    // lv_obj_add_event_cb(ui_dragPanel, ui_event_dragPanel, LV_EVENT_ALL, NULL);
    lv_obj_set_style_radius(ui_dragPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dragPanel, lv_palette_main(LV_PALETTE_BLUE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dragPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_dragPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label7

    ui_Label7 = lv_label_create(ui_dragPanel);

    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label7, 0);
    lv_obj_set_y(ui_Label7, -5);

    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label7, "_____");
}

/////////////////////// APPS //////////////////////

void appCalendar()
{
    ui_appCalendar = lv_obj_create(ui_appPanel);
    lv_obj_set_width(ui_appCalendar, 320);
    lv_obj_set_height(ui_appCalendar, LV_SIZE_CONTENT); /// 50
    lv_obj_set_align(ui_appCalendar, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_appCalendar, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_scrollbar_mode(ui_appCalendar, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_radius(ui_appCalendar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appCalendar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_appCalendar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_appCalendar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_appCalendar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_appCalendar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_appCalendar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appCalendar, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appCalendar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_appCalendar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_appCalendar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appCalendarObj = lv_calendar_create(ui_appCalendar);
    lv_obj_set_size(ui_appCalendarObj, 320, 370); // force: 0
    lv_obj_align(ui_appCalendarObj, ui_appCalendar, LV_ALIGN_TOP_MID, 0);
    lv_obj_set_style_radius(ui_appCalendarObj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appCalendarObj, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appCalendarObj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_appCalendarObj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_appCalendarObj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void appWifi()
{

    ui_appWifi = lv_obj_create(ui_appPanel);
    lv_obj_set_width(ui_appWifi, 320);
    lv_obj_set_height(ui_appWifi, LV_SIZE_CONTENT); /// 50
    lv_obj_set_align(ui_appWifi, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_appWifi, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_scrollbar_mode(ui_appWifi, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_radius(ui_appWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_appWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_appWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_appWifi, -70, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_appWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_appWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appWifi, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appWifi, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_appWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_appWifi, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appWifiStatus = lv_label_create(ui_appWifi);
    lv_obj_set_width(ui_appWifiStatus, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_appWifiStatus, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_appWifiStatus, 30);
    lv_obj_set_y(ui_appWifiStatus, 100);
    lv_label_set_text(ui_appWifiStatus, "Status: ON");
    lv_obj_set_style_text_font(ui_appWifiStatus, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appWifiSwitch = lv_switch_create(ui_appWifi);
    lv_obj_set_width(ui_appWifiSwitch, 50);
    lv_obj_set_height(ui_appWifiSwitch, 25);
    lv_obj_set_x(ui_appWifiSwitch, 177);
    lv_obj_set_y(ui_appWifiSwitch, 96);
    lv_obj_set_style_radius(ui_appWifiSwitch, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_appWifiSwitch, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_appWifiSwitch, 0, LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_add_flag(ui_appWifiSwitch, LV_OBJ_FLAG_HIDDEN);

    ui_appWifiNo = lv_label_create(ui_appWifi);
    lv_obj_set_width(ui_appWifiNo, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_appWifiNo, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_appWifiNo, 30);
    lv_obj_set_y(ui_appWifiNo, 200);
    lv_label_set_text(ui_appWifiNo, "WiFI No.");
    lv_obj_set_style_text_font(ui_appWifiNo, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appWifiList = lv_label_create(ui_appWifi);
    lv_obj_set_width(ui_appWifiList, 240);
    lv_obj_set_height(ui_appWifiList, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_appWifiList, 28);
    lv_obj_set_y(ui_appWifiList, 255);
    lv_label_set_text(ui_appWifiList, "Current WiFi List\n");
    lv_obj_set_style_text_font(ui_appWifiList, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appWifiName = lv_textarea_create(ui_appWifi);
    lv_obj_set_width(ui_appWifiName, 130);
    lv_obj_set_height(ui_appWifiName, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_appWifiName, -70);
    lv_obj_set_y(ui_appWifiName, 140);
    lv_obj_set_align(ui_appWifiName, LV_ALIGN_TOP_MID);
    lv_textarea_set_placeholder_text(ui_appWifiName, "WiFi Name");
    lv_textarea_set_one_line(ui_appWifiName, true);
    lv_obj_set_style_radius(ui_appWifiName, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appWifiName, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appWifiName, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_appWifiName, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_appWifiName, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_appWifiName, event_textarea, LV_EVENT_ALL, NULL);

    ui_appWifiPass = lv_textarea_create(ui_appWifi);
    lv_obj_set_width(ui_appWifiPass, 130);
    lv_obj_set_height(ui_appWifiPass, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_appWifiPass, 70);
    lv_obj_set_y(ui_appWifiPass, 140);
    lv_obj_set_align(ui_appWifiPass, LV_ALIGN_TOP_MID);
    lv_textarea_set_placeholder_text(ui_appWifiPass, "WiFi Password");
    lv_textarea_set_one_line(ui_appWifiPass, true);
    lv_obj_set_style_radius(ui_appWifiPass, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appWifiPass, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appWifiPass, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_appWifiPass, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_appWifiPass, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_appWifiPass, event_textarea, LV_EVENT_ALL, NULL);

    ui_appWifiSelect = lv_dropdown_create(ui_appWifi);
    lv_dropdown_set_options(ui_appWifiSelect, "1\n2\n3\n4\n5");
    lv_obj_set_width(ui_appWifiSelect, 60);
    lv_obj_set_height(ui_appWifiSelect, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_appWifiSelect, -12);
    lv_obj_set_y(ui_appWifiSelect, 190);
    lv_obj_set_align(ui_appWifiSelect, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appWifiSelect, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_set_style_radius(ui_appWifiSelect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appWifiSelect, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appWifiSelect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_appWifiSelect, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_appWifiSelect, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *list = lv_dropdown_get_list(ui_appWifiSelect); /*Get the list*/
    lv_obj_set_style_radius(list, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(list, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(list, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(list, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(list, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(list, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appWifiButton = lv_btn_create(ui_appWifi);
    lv_obj_set_width(ui_appWifiButton, 100);
    lv_obj_set_height(ui_appWifiButton, LV_SIZE_CONTENT); /// 50
    lv_obj_set_x(ui_appWifiButton, 87);
    lv_obj_set_y(ui_appWifiButton, 190);
    lv_obj_set_align(ui_appWifiButton, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_appWifiButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_appWifiButton, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_radius(ui_appWifiButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_appWifiButton, event_handler, LV_EVENT_ALL, NULL);

    ui_appWifiButtonLabel = lv_label_create(ui_appWifiButton);
    lv_obj_set_width(ui_appWifiButtonLabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_appWifiButtonLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_appWifiButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_appWifiButtonLabel, "Set");
    lv_obj_set_style_text_font(ui_appWifiButtonLabel, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
}

///////////////////// SCREENS ////////////////////
void ui_bootScreen_screen_init(void)
{

    // ui_bootScreen

    ui_bootScreen = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_bootScreen, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_bootScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bootScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_bootLogo

    ui_bootLogo = lv_img_create(ui_bootScreen);
    lv_img_set_src(ui_bootLogo, &ui_img_windows_logo_png);

    lv_obj_set_width(ui_bootLogo, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_bootLogo, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_bootLogo, 0);
    lv_obj_set_y(ui_bootLogo, 0);

    lv_obj_set_align(ui_bootLogo, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_bootLogo, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_bootLogo, LV_OBJ_FLAG_SCROLLABLE);
}

void ui_lockScreen_screen_init(void)
{

    // ui_lockScreen

    ui_lockScreen = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_lockScreen, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_img_src(ui_lockScreen, &ui_img_wallpaper_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_lockScreenPanel

    ui_lockScreenPanel = lv_obj_create(ui_lockScreen);

    lv_obj_set_width(ui_lockScreenPanel, 320);
    lv_obj_set_height(ui_lockScreenPanel, 480);

    lv_obj_set_x(ui_lockScreenPanel, 0);
    lv_obj_set_y(ui_lockScreenPanel, 0);

    lv_obj_set_align(ui_lockScreenPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_lockScreenPanel, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_scrollbar_mode(ui_lockScreenPanel, LV_SCROLLBAR_MODE_OFF);

    lv_obj_add_event_cb(ui_lockScreenPanel, ui_event_lockScreenPanel, LV_EVENT_ALL, NULL);
    // lv_obj_set_drag(ui_lockScreenPanel, true);
    lv_obj_set_style_radius(ui_lockScreenPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lockScreenPanel, lv_color_hex(0x1B4879), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lockScreenPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_lockScreenPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_lockScreenPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_lockScreenPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_lockScreenTime

    ui_lockScreenTime = lv_label_create(ui_lockScreenPanel);

    lv_obj_set_width(ui_lockScreenTime, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_lockScreenTime, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_lockScreenTime, 10);
    lv_obj_set_y(ui_lockScreenTime, 138);

    lv_obj_set_align(ui_lockScreenTime, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_lockScreenTime, "18:40");

    lv_obj_set_style_text_color(ui_lockScreenTime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lockScreenTime, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_lockScreenDate

    ui_lockScreenDate = lv_label_create(ui_lockScreenPanel);

    lv_obj_set_width(ui_lockScreenDate, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_lockScreenDate, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_lockScreenDate, 10);
    lv_obj_set_y(ui_lockScreenDate, 178);

    lv_obj_set_align(ui_lockScreenDate, LV_ALIGN_LEFT_MID);

    lv_label_set_text(ui_lockScreenDate, "Friday, September 16");
    lv_obj_set_style_text_color(ui_lockScreenDate, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lockScreenDate, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    status_bar(ui_lockScreen);
}

void ui_startScreen_screen_init(void)
{

    // ui_startScreen

    ui_startScreen = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_startScreen, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_startScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_startScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // tile view

    ui_tileView = lv_tileview_create(ui_startScreen);

    lv_obj_set_width(ui_tileView, 320);
    lv_obj_set_height(ui_tileView, 440);

    lv_obj_set_x(ui_tileView, 0);
    lv_obj_set_y(ui_tileView, -20);

    lv_obj_set_align(ui_tileView, LV_ALIGN_CENTER);

    lv_obj_set_scrollbar_mode(ui_tileView, LV_SCROLLBAR_MODE_OFF);

    lv_obj_set_style_radius(ui_tileView, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_tileView, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_tileView, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_tileView, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    /*Tile1: startMenu*/
    ui_tileStart = lv_tileview_add_tile(ui_tileView, 0, 0, LV_DIR_RIGHT);

    static lv_coord_t col_dsc[] = {92, 92, 92, LV_GRID_TEMPLATE_LAST};
    static lv_coord_t row_dsc[] = {70, 70, 70, 70, 70, 70, 70, LV_GRID_TEMPLATE_LAST};

    /*Create a container with grid*/
    lv_obj_t *cont = lv_obj_create(ui_tileStart);
    lv_obj_set_style_grid_column_dsc_array(cont, col_dsc, 0);
    lv_obj_set_style_grid_row_dsc_array(cont, row_dsc, 0);
    lv_obj_set_size(cont, 320, 440);
    lv_obj_center(cont);
    lv_obj_set_layout(cont, LV_LAYOUT_GRID);

    lv_obj_set_style_pad_top(cont, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_scrollbar_mode(cont, LV_SCROLLBAR_MODE_OFF);

    create_tile(cont, "Phone", &ui_img_1276322231, 0, 0, 1, event_launch);
    create_tile(cont, "People", &ui_img_people_png, 1, 0, 2, event_launch);

    create_tile(cont, "Messaging", &ui_img_237043237, 0, 1, 1, event_launch);
    create_tile(cont, "Store", &ui_img_571330079, 1, 1, 1, event_launch);
    create_tile(cont, "Calendar", &ui_img_calendar_png, 2, 1, 1, event_launch);

    create_tile(cont, "Edge", &ui_img_microsoft_png, 0, 2, 1, event_launch);
    create_tile(cont, "Weather", &ui_img_1127648905, 1, 2, 2, event_launch);

    create_tile(cont, "Photos", &ui_img_gallery_png, 0, 3, 2, event_launch);
    create_tile(cont, "Music", &ui_img_359952343, 2, 3, 1, event_launch);

    create_tile(cont, "Settings", &ui_img_gear_png, 0, 4, 1, event_settings);
    create_tile(cont, "Maps", &ui_img_846015263, 1, 4, 2, event_launch);

    create_tile(cont, "OneDrive", &ui_img_cloud_png, 0, 5, 1, event_launch);
    create_tile(cont, "Wallet", &ui_img_wallet_png, 1, 5, 1, event_launch);
    create_tile(cont, "WiFi", &ui_img_gear_png, 2, 5, 1, event_launch);

    /*Tile2: appList*/
    ui_tileApps = lv_tileview_add_tile(ui_tileView, 1, 0, LV_DIR_LEFT);
    /*Create a list*/
    list1 = lv_list_create(ui_tileApps);
    lv_obj_set_size(list1, 320, 440);
    lv_obj_center(list1);

    lv_obj_set_style_pad_top(list1, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(list1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(list1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(list1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(list1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_scrollbar_mode(list1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_pad_top(list1, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(list1, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    /*Add apps to the list*/

    add_item(list1, "About", &ui_img_gear_png, event_launch);
    add_item(list1, "Calendar", &ui_img_calendar_png, event_launch);
    add_item(list1, "Edge", &ui_img_microsoft_png, event_launch);
    add_item(list1, "Mail", &ui_img_email_png, event_launch);
    add_item(list1, "Maps", &ui_img_846015263, event_launch);
    add_item(list1, "Messaging", &ui_img_237043237, event_launch);
    add_item(list1, "Music", &ui_img_359952343, event_launch);
    add_item(list1, "OneDrive", &ui_img_cloud_png, event_launch);
    add_item(list1, "People", &ui_img_people_png, event_launch);
    add_item(list1, "Phone", &ui_img_1276322231, event_launch);
    add_item(list1, "Photos", &ui_img_gallery_png, event_launch);
    add_item(list1, "Settings", &ui_img_gear_png, event_settings);
    add_item(list1, "Store", &ui_img_571330079, event_launch);
    add_item(list1, "Test App", &ui_img_571330079, event_launch);
    add_item(list1, "Wallet", &ui_img_wallet_png, event_launch);
    add_item(list1, "Weather", &ui_img_1127648905, event_launch);
    add_item(list1, "WiFi", &ui_img_gear_png, event_launch);

    navigation(ui_startScreen);
    notification_panel(ui_startScreen);
    keyboard(ui_startScreen);
    alert_box(ui_startScreen);
}

void ui_settingsScreen_screen_init(void)
{

    // ui_settingsScreen

    ui_settingsScreen = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_settingsScreen, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_settingsScreen, event_handler, LV_EVENT_SCREEN_UNLOADED, NULL);

    // ui_settingsScroll

    ui_settingsScroll = lv_obj_create(ui_settingsScreen);

    lv_obj_set_width(ui_settingsScroll, 320);
    lv_obj_set_height(ui_settingsScroll, 480);

    lv_obj_set_x(ui_settingsScroll, 0);
    lv_obj_set_y(ui_settingsScroll, 0);

    lv_obj_set_align(ui_settingsScroll, LV_ALIGN_TOP_MID);

    lv_obj_set_scrollbar_mode(ui_settingsScroll, LV_SCROLLBAR_MODE_ACTIVE);
    lv_obj_set_scroll_dir(ui_settingsScroll, LV_DIR_VER);

    lv_obj_set_style_radius(ui_settingsScroll, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_settingsScroll, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_settingsScroll, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_settingsScroll, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_settingsScroll, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_settingsScroll, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_settingsScroll, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_settingsScroll, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_displayLabel

    ui_displayLabel = lv_label_create(ui_settingsScroll);

    lv_obj_set_width(ui_displayLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_displayLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_displayLabel, 20);
    lv_obj_set_y(ui_displayLabel, 50);

    lv_label_set_text(ui_displayLabel, "Display");

    // ui_brightnessLabel

    ui_brightnessLabel = lv_label_create(ui_settingsScroll);

    lv_obj_set_width(ui_brightnessLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_brightnessLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_brightnessLabel, 40);
    lv_obj_set_y(ui_brightnessLabel, 80);

    lv_label_set_text(ui_brightnessLabel, "Adjust brightness level");

    lv_obj_set_style_text_font(ui_brightnessLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_brightnessSlider

    ui_brightnessSlider = lv_slider_create(ui_settingsScroll);
    lv_slider_set_range(ui_brightnessSlider, 1, 255);

    lv_obj_set_width(ui_brightnessSlider, 240);
    lv_obj_set_height(ui_brightnessSlider, 4);

    lv_obj_set_x(ui_brightnessSlider, 40);
    lv_obj_set_y(ui_brightnessSlider, 110);

    lv_obj_add_event_cb(ui_brightnessSlider, slider_event_cb, LV_EVENT_VALUE_CHANGED, NULL);

    // ui_timeoutLabel

    ui_timeoutLabel = lv_label_create(ui_settingsScroll);

    lv_obj_set_width(ui_timeoutLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_timeoutLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_timeoutLabel, 40);
    lv_obj_set_y(ui_timeoutLabel, 130);

    lv_label_set_text(ui_timeoutLabel, "Screen times out after");

    lv_obj_set_style_text_font(ui_timeoutLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_timeoutSelect

    ui_timeoutSelect = lv_dropdown_create(ui_settingsScroll);
    lv_dropdown_set_options(ui_timeoutSelect, "30 seconds\n1 minute\n3 minutes\n5 minutes");
    // lv_dropdown_set_text(ui_timeoutSelect, "30 seconds");

    lv_obj_set_width(ui_timeoutSelect, 189);
    lv_obj_set_height(ui_timeoutSelect, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_timeoutSelect, 40);
    lv_obj_set_y(ui_timeoutSelect, 154);

    lv_obj_add_flag(ui_timeoutSelect, LV_OBJ_FLAG_SCROLL_ON_FOCUS);

    lv_obj_set_style_radius(ui_timeoutSelect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_timeoutSelect, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_timeoutSelect, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_timeoutSelect, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_timeoutSelect, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_timeoutSelect, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *list = lv_dropdown_get_list(ui_timeoutSelect); /*Get the list*/
    lv_obj_set_style_radius(list, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(list, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(list, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(list, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(list, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(list, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_storageLabel

    ui_storageLabel = lv_label_create(ui_settingsScroll);

    lv_obj_set_width(ui_storageLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_storageLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_storageLabel, 20);
    lv_obj_set_y(ui_storageLabel, 202);

    lv_label_set_text(ui_storageLabel, "Storage");

    // ui_deviceLabel

    ui_deviceLabel = lv_label_create(ui_settingsScroll);

    lv_obj_set_width(ui_deviceLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_deviceLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_deviceLabel, 40);
    lv_obj_set_y(ui_deviceLabel, 224);

    lv_label_set_text(ui_deviceLabel, "This device");

    lv_obj_set_style_text_color(ui_deviceLabel, lv_palette_main(LV_PALETTE_BLUE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_deviceLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_deviceLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_storageBar

    ui_storageBar = lv_bar_create(ui_settingsScroll);
    lv_bar_set_range(ui_storageBar, 0, 100);
    lv_bar_set_value(ui_storageBar, 25, LV_ANIM_OFF);

    lv_obj_set_width(ui_storageBar, 240);
    lv_obj_set_height(ui_storageBar, 10);

    lv_obj_set_x(ui_storageBar, 40);
    lv_obj_set_y(ui_storageBar, 263);

    lv_obj_set_style_radius(ui_storageBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_storageBar, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_storageText

    ui_storageText = lv_label_create(ui_settingsScroll);

    lv_obj_set_width(ui_storageText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_storageText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_storageText, 40);
    lv_obj_set_y(ui_storageText, 243);

    lv_label_set_text(ui_storageText, "6.22 MB used out of 7.27MB");

    lv_obj_set_style_text_font(ui_storageText, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_themeLabel

    ui_themeLabel = lv_label_create(ui_settingsScroll);

    lv_obj_set_width(ui_themeLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_themeLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_themeLabel, 20);
    lv_obj_set_y(ui_themeLabel, 289);

    lv_label_set_text(ui_themeLabel, "Theme Color");

    // ui_themeWheel

    ui_themeWheel = lv_colorwheel_create(ui_settingsScroll, true);

    lv_colorwheel_set_mode_fixed(ui_themeWheel, true);

    lv_obj_set_width(ui_themeWheel, 150);
    lv_obj_set_height(ui_themeWheel, 150);

    lv_obj_set_x(ui_themeWheel, 50);
    lv_obj_set_y(ui_themeWheel, 318);

    lv_obj_add_event_cb(ui_themeWheel, theme_change, LV_EVENT_VALUE_CHANGED, NULL);

    lv_obj_clear_flag(ui_themeWheel, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE);

    // ui_aboutLabel

    ui_aboutLabel = lv_label_create(ui_settingsScroll);

    lv_obj_set_width(ui_aboutLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_aboutLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_aboutLabel, 20);
    lv_obj_set_y(ui_aboutLabel, 510);

    lv_label_set_text(ui_aboutLabel, "About");

    // ui_aboutText

    ui_aboutText = lv_label_create(ui_settingsScroll);

    lv_obj_set_width(ui_aboutText, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_aboutText, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_aboutText, 25);
    lv_obj_set_y(ui_aboutText, 540);

    lv_label_set_text(ui_aboutText, "Text");

    // ui_settingPanel

    ui_settingPanel = lv_obj_create(ui_settingsScreen);

    lv_obj_set_width(ui_settingPanel, 320);
    lv_obj_set_height(ui_settingPanel, 69);

    lv_obj_set_x(ui_settingPanel, 0);
    lv_obj_set_y(ui_settingPanel, 0);

    lv_obj_set_align(ui_settingPanel, LV_ALIGN_TOP_MID);

    lv_obj_clear_flag(ui_settingPanel, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_settingPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_settingPanel, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_settingPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_settingPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_settingsIcon

    ui_settingsIcon = lv_img_create(ui_settingPanel);
    lv_img_set_src(ui_settingsIcon, &ui_img_gear_png);

    lv_obj_set_width(ui_settingsIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_settingsIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_settingsIcon, 10);
    lv_obj_set_y(ui_settingsIcon, 5);

    lv_obj_set_align(ui_settingsIcon, LV_ALIGN_BOTTOM_LEFT);

    lv_obj_add_flag(ui_settingsIcon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_settingsIcon, LV_OBJ_FLAG_SCROLLABLE);

    // ui_settingsLabel

    ui_settingsLabel = lv_label_create(ui_settingPanel);

    lv_obj_set_width(ui_settingsLabel, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_settingsLabel, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_settingsLabel, 50);
    lv_obj_set_y(ui_settingsLabel, 4);

    lv_obj_set_align(ui_settingsLabel, LV_ALIGN_BOTTOM_LEFT);

    lv_label_set_text(ui_settingsLabel, "Settings");

    lv_obj_set_style_text_font(ui_settingsLabel, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void ui_appScreen_screen_init(void)
{
    ui_appScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_appScreen, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_appScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appPanel = lv_obj_create(ui_appScreen);
    lv_obj_set_width(ui_appPanel, 320);
    lv_obj_set_height(ui_appPanel, 480);
    lv_obj_set_align(ui_appPanel, LV_ALIGN_TOP_MID);
    lv_obj_set_scrollbar_mode(ui_appPanel, LV_SCROLLBAR_MODE_ACTIVE);
    lv_obj_set_style_radius(ui_appPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_appPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_appPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_appPanel, 70, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_appPanel, 40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appHeader = lv_obj_create(ui_appScreen);
    lv_obj_set_width(ui_appHeader, 320);
    lv_obj_set_height(ui_appHeader, 70);
    lv_obj_set_align(ui_appHeader, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_appHeader, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_appHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appHeader, lv_color_hex(0x323232), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appHeader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_appIcon = lv_img_create(ui_appHeader);
    lv_img_set_src(ui_appIcon, &ui_img_gear_png);
    lv_obj_set_width(ui_appIcon, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_appIcon, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_appIcon, 10);
    lv_obj_set_y(ui_appIcon, 5);
    lv_obj_set_align(ui_appIcon, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_appIcon, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_appIcon, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_appLabel = lv_label_create(ui_appHeader);
    lv_obj_set_width(ui_appLabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_appLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_appLabel, 50);
    lv_obj_set_y(ui_appLabel, 4);
    lv_obj_set_align(ui_appLabel, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_appLabel, "WiFi");
    lv_obj_set_style_text_font(ui_appLabel, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    appWifi();
    appCalendar();
}

void ui_init(void)
{
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_GREY),
                                              true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_bootScreen_screen_init();
    ui_lockScreen_screen_init();
    ui_startScreen_screen_init();
    ui_settingsScreen_screen_init();
    ui_appScreen_screen_init();

    lv_disp_load_scr(ui_bootScreen);
}

void launchApp(const char *name, const void *src)
{
    lv_obj_set_parent(ui_Panel2, ui_appScreen); // navigation
    lv_obj_set_parent(ui_notificationPanel, ui_appScreen);
    lv_obj_set_parent(ui_statusBar, ui_appScreen);
    lv_obj_set_parent(ui_systemKeyboard, ui_appScreen);
    lv_obj_set_parent(ui_alertPanel, ui_appScreen);

    lv_label_set_text(ui_appLabel, name);
    lv_img_set_src(ui_appIcon, src);

    lv_disp_load_scr(ui_appScreen);
    // lv_scr_load_anim(ui_appScreen, LV_SCR_LOAD_ANIM_FADE_IN, 3, 0, false);
}

void closeApp()
{
    // uint32_t i, ch = lv_obj_get_child_cnt(ui_appPanel);
    lv_obj_clean(ui_appPanel);
    // for (i = 0; i < ch; i++){
    //     // lv_obj_del(lv_obj_get_child(ui_appPanel, i));
    //     // lv_obj_set_parent(lv_obj_get_child(ui_appPanel, i), NULL);
    //     lv_obj_add_flag(lv_obj_get_child(ui_appPanel, i), LV_OBJ_FLAG_HIDDEN);
    // }
}

void openStart()
{

    lv_obj_set_parent(ui_Panel2, ui_startScreen); // navigation
    lv_obj_set_parent(ui_notificationPanel, ui_startScreen);
    lv_obj_set_parent(ui_statusBar, ui_startScreen);
    lv_obj_set_parent(ui_systemKeyboard, ui_startScreen);
    lv_obj_set_parent(ui_alertPanel, ui_startScreen);
    lv_disp_load_scr(ui_startScreen);
}

void openSettings()
{

    lv_obj_set_parent(ui_Panel2, ui_settingsScreen); // navigation
    lv_obj_set_parent(ui_notificationPanel, ui_settingsScreen);
    lv_obj_set_parent(ui_statusBar, ui_settingsScreen);
    lv_obj_set_parent(ui_systemKeyboard, ui_settingsScreen);
    lv_obj_set_parent(ui_alertPanel, ui_settingsScreen);
    lv_disp_load_scr(ui_settingsScreen);
}

void openLock()
{
    lv_obj_set_parent(ui_statusBar, ui_lockScreen);
    lv_disp_load_scr(ui_lockScreen);
}

void openAppWifi()
{
    closeApp();
    appWifi();
    setWifi();
    lv_label_set_text_fmt(ui_appWifiStatus, onConnect ? "Connected" : "Disconnected");
    launchApp("Wifi", &ui_img_gear_png);
}

void openAppCalendar()
{
    closeApp();
    appCalendar();
    launchApp("Calendar", &ui_img_calendar_png);
}

void openAppStore()
{
    closeApp();
    lv_obj_t *canvas = app_canvas();

    /*Create a list*/
    lv_obj_t *storeList = lv_list_create(canvas);
    lv_obj_set_size(storeList, 320, LV_SIZE_CONTENT);
    lv_obj_center(storeList);

    lv_obj_set_style_bg_color(storeList, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(storeList, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(storeList, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_scrollbar_mode(storeList, LV_SCROLLBAR_MODE_OFF);

    int b = 0;
    for (int a = 0; a < MAX_APPS; a++)
    {
        if (appList[a].state)
        {
            add_app(storeList, appList[a]);
            b++;
        }
    }

    if (b == 0) {
        create_label(canvas, "Apps currently unavailable", 70);
    }

    launchApp("App Store", &ui_img_571330079);
}

void openAppAbout()
{
    closeApp();
    lv_obj_t *canvas = app_canvas();
    create_label(canvas, aboutText, 20);

    launchApp("About", &ui_img_gear_png);
}

void vibrate(long time)
{
    digitalWrite(MOTOR, HIGH);
    delay(time);
    digitalWrite(MOTOR, LOW);
}

void showAlert(const void *src, bool state, int size)
{
    if (state)
    {
        lv_label_set_text(ui_alertTitle, alert.title);
        lv_label_set_text(ui_alertMessage, alert.message);
        lv_img_set_src(ui_alertIcon, src);
        lv_obj_set_height(ui_alertPanelDialog, size);
        lv_obj_set_height(ui_alertScroll, size - 100);

        lv_obj_clear_flag(ui_alertPanel, LV_OBJ_FLAG_HIDDEN);
    }
    else
    {
        lv_obj_add_flag(ui_alertPanel, LV_OBJ_FLAG_HIDDEN);
    }
}
