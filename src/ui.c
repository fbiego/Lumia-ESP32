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
lv_obj_t *ui_lockPanel;
lv_obj_t *ui_lockScreenCode;
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
lv_obj_t *ui_screenLock;
lv_obj_t *ui_lockSwitch;
lv_obj_t *ui_lockPass;
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
lv_obj_t *ui_keyPad;
lv_obj_t *ui_settingsKeypad;

lv_obj_t *ui_phoneNumber;
lv_obj_t *ui_phoneNumberDelete;
lv_obj_t *ui_messageSendText;
lv_obj_t *ui_messageSendButton;

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
lv_obj_t *chatList;

lv_obj_t * ui_notificationAlert;
lv_obj_t * ui_notificationAppIcon;
lv_obj_t * ui_notificationAppTitle;
lv_obj_t * ui_notificationContent;
lv_obj_t * ui_weatherScreen;
lv_obj_t * ui_weatherCity;
lv_obj_t * ui_weatherTemperature;
lv_obj_t * ui_weatherDescription;
lv_obj_t * ui_weatherWindspeed;
lv_obj_t * ui_callerScreen;
lv_obj_t * ui_callerDetails;
lv_obj_t * ui_callDetails;
lv_obj_t * ui_callAnswerButton;
lv_obj_t * ui_callAnswerLabel;
lv_obj_t * ui_callMessageButton;
lv_obj_t * ui_callMessageLabel;
lv_obj_t * ui_callDeclineButton;
lv_obj_t * ui_callDeclineText;

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
    uint16_t code;
} Alert;

Alert alert;
Time rtcTime;

// user settings
int brightness = 100;
uint32_t themeColor = 0xFF0081FF;
long timeouts[4] = {30000, 60000, 180000, 300000};
long screenTime = 30000;


bool chatScr = false;

uint32_t STORE_REFRESH = 0xA45E0001;

uint16_t KEYPAD = 0xA200;
uint16_t ALERT = 0xA001;
uint8_t PHONE = 0xEA;
uint8_t LOCK = 0xEB;
uint8_t SETTINGS = 0xEC;

///////////////////// ANIMATIONS ////////////////////

///////////////////// ANIMATIONS ////////////////////
static void close_alert();

static void anim_y_cb(void * var, int32_t v)
{
    printf("Animating - set y : %d\n", v);
    lv_obj_set_y(ui_notificationAlert, v);
    if (v == 0){
        close_alert();
    }
}

static void close_alert(){
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, ui_notificationAlert);
    lv_anim_set_exec_cb(&PropertyAnimation_1, anim_y_cb);
    lv_anim_set_values(&PropertyAnimation_1, 1, -120);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_1, 3000);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_start(&PropertyAnimation_1);
}

void showNotification_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_exec_cb(&PropertyAnimation_0, anim_y_cb); //(lv_anim_exec_xcb_t) lv_obj_set_x
    lv_anim_set_values(&PropertyAnimation_0, -120, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_start(&PropertyAnimation_0);
    

}



///////////////////// CALLBACK FUNCTIONS ////////////////////

static void slider_event_cb(lv_event_t *e)
{
    lv_obj_t *slider = lv_event_get_target(e);
    if (slider == ui_brightnessSlider)
    {
        brightness = (int)lv_slider_get_value(slider);
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
            showAlert(&ui_img_gear_png, true, 200, 0x00);
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

    if (code == LV_EVENT_VALUE_CHANGED){
        uint32_t index = lv_dropdown_get_selected(ui_timeoutSelect);
        if (index < 4){
            screenTime = timeouts[index];
            printf("screen time: %d\n", screenTime);
        }
    }
}

static void theme_change(lv_event_t *e)
{
    lv_obj_t *picker = lv_event_get_target(e);
    // val = lv_slider_get_value(picker); //
    lv_color_t c = lv_colorwheel_get_rgb(picker);
    lv_disp_t *display = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(display, c, lv_palette_main(LV_PALETTE_GREY), true, LV_FONT_DEFAULT);
    lv_disp_set_theme(display, theme);
    lv_obj_set_style_bg_color(ui_dragPanel, c, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_deviceLabel, c, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_notificationAlert, c, LV_PART_MAIN | LV_STATE_DEFAULT);
    themeColor = lv_color_to32(c);

    uint16_t i;
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
            if (chatScr){
                chatScr = false;
                openMessage();
            }
            else if (actScr == ui_startScreen || actScr == ui_lockScreen)
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

            if (chatScr){
                chatScr = false;
            }
        }
        if (obj == ui_searchButton)
        {
            // printf("Search\n");
            vibrate(100);
        }
    }
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

        lv_obj_set_y(ui_lockScreenTime, 138);
        lv_obj_set_y(ui_lockScreenDate, 178);

        lv_obj_add_flag(ui_lockPanel, LV_OBJ_FLAG_HIDDEN);
        lv_obj_add_flag(ui_lockScreenCode, LV_OBJ_FLAG_HIDDEN);
        lv_obj_set_style_text_opa(ui_lockScreenTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(ui_lockScreenDate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

        if (vect > 150)
        {
            if (passcode.set)
            {
                lv_obj_clear_flag(ui_lockPanel, LV_OBJ_FLAG_HIDDEN);
                lv_obj_clear_flag(ui_lockScreenCode, LV_OBJ_FLAG_HIDDEN);
                lv_obj_set_style_text_opa(ui_lockScreenTime, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_lockScreenDate, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
            }
            else
            {
                openStart();
            }
        }
    }
}

static void event_alert(lv_event_t *e)
{
    lv_obj_t *obj = lv_event_get_current_target(e);
    lv_event_code_t code = lv_event_get_code(e);
    uint32_t id = (uint32_t)lv_event_get_user_data(e);
    uint16_t pId = id >> 0x10 & 0xFFFF;
    uint16_t oId = id & 0xFFFF;

    showAlert(NULL, false, 0, 0x00);
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
        else if (data == "Phone")
        {
            openPhone();
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
        else if (data == "Power Off")
        {
            deep_sleep();
        }
        else if (data == "Sleep")
        {
            light_sleep();
        }
        else if (data == "Lock Screen")
        {
            openLock();
        }
        else if (data == "Messaging")
        {
            openMessage();
        }
        else if (data == "Chat")
        {
            openChat();
        }
        else
        {
            alert.title = "App not installed";
            char *msg = " is not currently available\nOn the app list, click on \"About\" for more info.";
            strncpy(buf, data, strlen(data));
            strncpy(buf + strlen(data), msg, strlen(msg) + 1);
            alert.message = buf;

            showAlert(&ui_img_gear_png, true, 200, 0x00);
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
        if (ta == ui_messageSendText)
        {
            lv_obj_set_y(ui_messageSendText, -190);
        }
    }

    if (code == LV_EVENT_DEFOCUSED)
    {
        lv_keyboard_set_textarea(ui_systemKeyboard, NULL);
        lv_obj_add_flag(ui_systemKeyboard, LV_OBJ_FLAG_HIDDEN);
        if (ta == ui_messageSendText)
        {
            lv_obj_set_y(ui_messageSendText, -40);
        }
    }
}

static void event_lockcode(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    uint32_t id = (uint32_t)lv_event_get_user_data(e);
    uint16_t pId = id >> 0x10 & 0xFFFF;
    uint16_t oId = id & 0xFFFF;

    if (code == LV_EVENT_FOCUSED)
    {
        if (pId == (KEYPAD | LOCK))
        {
        }
        else if (pId == (KEYPAD | SETTINGS))
        {
            lv_obj_clear_flag(ui_settingsKeypad, LV_OBJ_FLAG_HIDDEN);
        }
    }

    if (code == LV_EVENT_DEFOCUSED)
    {
        // lv_obj_add_flag(ui_settingsKeypad, LV_OBJ_FLAG_HIDDEN);
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

        showAlert(&ui_img_gear_png, true, 200, 0x00);
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

        showAlert(&ui_img_gear_png, true, 200, 0x00);
    }
}

///////////////////// APP ACTIONS ////////////////////

static void event_app_component(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_target(e);

    if (code == LV_EVENT_CLICKED)
    {
        uint32_t id = (uint32_t)lv_event_get_user_data(e);
        uint16_t pId = id >> 0x10 & 0xFFFF;
        uint16_t oId = id & 0xFFFF;
        printf("PID 0x%X\n", pId);
        if (pId == (KEYPAD | PHONE))
        {
            printf("Phone  %X clicked\n", oId);
            if (oId == 0x0A)
            {
                lv_textarea_add_char(ui_phoneNumber, '*');
            }
            else if (oId == 0x0C)
            {
                lv_textarea_add_char(ui_phoneNumber, '#');
            }
            else if (oId == 0x0D)
            {
                lv_textarea_del_char(ui_phoneNumber);
            }
            else if (oId == 0xFF)
            {
                // call button
                showCaller("lumia", "", false);
            }
            else if (oId == 0xFE)
            {
                // end call button
                lv_obj_add_flag(ui_callerScreen, LV_OBJ_FLAG_HIDDEN);
                endVibrate();
            }
            else if (oId == 0xFD)
            {
                // answer call button
                lv_obj_add_flag(ui_callerScreen, LV_OBJ_FLAG_HIDDEN);
                endVibrate();
            }
            else
            {
                lv_textarea_add_char(ui_phoneNumber, (char)(0x30 + oId));
            }
        }
        else if (pId == (KEYPAD | LOCK))
        {
            printf("Lock  %X clicked\n", oId);
            vibrate(50);
            if (oId == 0x0A)
            {
                // close keypad(relaunch lock screen)
                lv_obj_set_y(ui_lockScreenTime, 138);
                lv_obj_set_y(ui_lockScreenDate, 178);

                lv_obj_add_flag(ui_lockPanel, LV_OBJ_FLAG_HIDDEN);
                lv_obj_add_flag(ui_lockScreenCode, LV_OBJ_FLAG_HIDDEN);
                lv_obj_set_style_text_opa(ui_lockScreenTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_style_text_opa(ui_lockScreenDate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
            }
            else if (oId == 0x0C)
            {
                lv_textarea_del_char(ui_lockScreenCode);
            }
            else
            {
                lv_textarea_add_char(ui_lockScreenCode, (char)(0x30 + oId));

                // direct unlock
                uint8_t pass[4];
                const char *cd = lv_textarea_get_text(ui_lockScreenCode);
                strncpy(pass, cd, 4);
                int i;
                for (i = 0; i < 4; i++)
                {
                    if (pass[i] != passcode.code[i])
                    {
                        break;
                    }
                }
                if (i == 4)
                {
                    lv_textarea_set_text(ui_lockScreenCode, "");
                    openStart(); // matches
                }
                else
                {
                    // fail or incomplete < 4
                    if (strlen(cd) == 4)
                    {
                        lv_textarea_set_text(ui_lockScreenCode, "");
                    }
                }
            }
        }
        else if (pId == (KEYPAD | SETTINGS))
        {
            printf("Settings %X clicked\n", oId);
            if (oId == 0x0A)
            {
                lv_textarea_del_char(ui_lockPass);
            }
            else if (oId == 0x0C)
            {
                lv_obj_add_flag(ui_settingsKeypad, LV_OBJ_FLAG_HIDDEN);

                const char *cd = lv_textarea_get_text(ui_lockPass);
                printf("%s\n", cd);
                if (strlen(cd) == 4)
                {
                    strncpy(passcode.code, cd, 4);
                    passcode.set = true;
                }
                else
                {
                    passcode.set = false;
                }
                // check if >4 then save
            }
            else
            {
                lv_textarea_add_char(ui_lockPass, (char)(0x30 + oId));
            }
        }
        else if (pId == 0xCCCC)
        {
            const char *cd = lv_textarea_get_text(ui_messageSendText);
            if (strlen(cd) > 0)
            {
                add_chat_item(chatList, cd, false);
                lv_textarea_set_text(ui_messageSendText, "");
                showNotification("Message", &ui_img_237043237, "Lumia\nHello from the other side");
            }
        }
        else if (id == STORE_REFRESH)
        {
            openAppStore();
        }
        else
        {
            printf("Button %X clicked from %X\n", oId, pId);
        }
    }
}

///////////////////// FUNCTIONS ////////////////////

uint32_t uuid(uint16_t parent, uint16_t id)
{
    return parent << 0x10 | id;
}

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
    lv_obj_set_width(ui_appListItem, 320);
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
    lv_obj_add_event_cb(ui_appListAction, app.installed ? event_appstore_uninstall : event_appstore_install, LV_EVENT_CLICKED, app.id);

    lv_obj_t *ui_appListActionLabel = lv_label_create(ui_appListAction);
    lv_obj_set_width(ui_appListActionLabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_appListActionLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_appListActionLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_appListActionLabel, app.installed ? "Uninstall" : "Install");
}

void showCaller(const char *name, const char *call, bool incoming){
    if (incoming){
        lv_label_set_text(ui_callDetails, "Incoming Call");
        lv_label_set_text(ui_callAnswerLabel, "Answer");
        lv_obj_clear_flag(ui_callMessageButton, LV_OBJ_FLAG_HIDDEN); 
        lv_obj_clear_flag(ui_callDeclineButton, LV_OBJ_FLAG_HIDDEN);
        startVibrate();
    } else {
        lv_label_set_text(ui_callDetails, "Outgoing Call");
        lv_label_set_text(ui_callAnswerLabel, "End Call");
        lv_obj_add_flag(ui_callMessageButton, LV_OBJ_FLAG_HIDDEN); 
        lv_obj_add_flag(ui_callDeclineButton, LV_OBJ_FLAG_HIDDEN); 
    }
    lv_label_set_text(ui_callerDetails, name);
    lv_obj_clear_flag(ui_callerScreen, LV_OBJ_FLAG_HIDDEN);
}
void showNotification(const char* app, const void *src, const char *alert){
    lv_label_set_text(ui_notificationAppTitle, app);
    lv_label_set_text(ui_notificationContent, alert);
    lv_img_set_src(ui_notificationAppIcon, src);
    showNotification_Animation(ui_notificationAlert, 0);
    vibrate(50);
}

///////////////////// DYNAMIC COMPONENTS ////////////////////

lv_obj_t *create_label(lv_obj_t *parent, const char *text, uint16_t yPos)
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

lv_obj_t *create_button(lv_obj_t *parent, uint32_t id, const char *text, uint16_t xPos, uint16_t yPos, uint16_t width, uint16_t height)
{
    lv_obj_t *button = lv_btn_create(parent);
    lv_obj_set_width(button, width);
    lv_obj_set_height(button, height == 0 ? LV_SIZE_CONTENT : height); /// 50
    lv_obj_set_x(button, xPos);
    lv_obj_set_y(button, yPos);
    lv_obj_set_align(button, LV_ALIGN_TOP_LEFT);
    lv_obj_add_flag(button, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(button, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_radius(button, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(button, event_app_component, LV_EVENT_CLICKED, id);

    lv_obj_t *label = lv_label_create(button);
    lv_obj_set_width(label, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(label, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(label, LV_ALIGN_CENTER);
    lv_label_set_text(label, text);
    lv_obj_set_style_text_font(label, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);
    return button;
}

lv_obj_t *create_slider(lv_obj_t *parent, uint32_t id, uint16_t xPos, uint16_t yPos, uint16_t width, uint16_t height)
{
    lv_obj_t *slider = lv_slider_create(parent);
    lv_slider_set_range(slider, 0, 255);
    lv_obj_set_width(slider, width);
    lv_obj_set_height(slider, height);
    lv_obj_set_x(slider, xPos);
    lv_obj_set_y(slider, yPos);
    lv_obj_add_event_cb(slider, event_app_component, LV_EVENT_VALUE_CHANGED, id);
    return slider;
}

lv_obj_t *create_switch(lv_obj_t *parent, uint32_t id, uint16_t xPos, uint16_t yPos)
{
    lv_obj_t *switcH = lv_switch_create(parent);
    lv_obj_set_x(switcH, xPos);
    lv_obj_set_y(switcH, yPos);
    lv_obj_add_event_cb(switcH, event_app_component, LV_EVENT_VALUE_CHANGED, id);
    return switcH;
}

lv_obj_t *add_message_item(lv_obj_t *parent, const char *sender, const char *message, const char *date, bool read)
{
    lv_obj_t *ui_messageItem = lv_obj_create(parent);
    lv_obj_set_width(ui_messageItem, 320);
    lv_obj_set_height(ui_messageItem, 60);
    lv_obj_set_x(ui_messageItem, 0);
    lv_obj_set_y(ui_messageItem, 0);
    lv_obj_set_align(ui_messageItem, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_messageItem, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_messageItem, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_messageItem, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_messageItem, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_messageItem, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_messageItem, event_launch, LV_EVENT_CLICKED, "Chat");

    lv_obj_t *ui_senderLabel = lv_label_create(ui_messageItem);
    lv_obj_set_width(ui_senderLabel, 170);
    lv_obj_set_height(ui_senderLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_senderLabel, 50);
    lv_obj_set_y(ui_senderLabel, 0);
    lv_obj_set_style_text_color(ui_senderLabel, read ? lv_color_white() : lv_theme_get_color_primary(ui_messageItem), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_long_mode(ui_senderLabel, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_senderLabel, sender);
    lv_obj_set_style_text_font(ui_senderLabel, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *ui_messageText = lv_label_create(ui_messageItem);
    lv_obj_set_width(ui_messageText, 240);
    lv_obj_set_height(ui_messageText, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_messageText, 50);
    lv_obj_set_y(ui_messageText, 20);
    lv_obj_set_style_text_color(ui_messageText, read ? lv_color_white() : lv_theme_get_color_primary(ui_messageItem), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_long_mode(ui_messageText, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_messageText, message);
    lv_obj_set_style_text_font(ui_messageText, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *ui_messageDate = lv_label_create(ui_messageItem);
    lv_obj_set_width(ui_messageDate, 50);
    lv_obj_set_height(ui_messageDate, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_messageDate, LV_ALIGN_TOP_RIGHT);
    lv_obj_set_style_text_color(ui_messageDate, read ? lv_color_white() : lv_theme_get_color_primary(ui_messageItem), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(ui_messageDate, date);
    lv_obj_set_style_text_align(ui_messageDate, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *ui_messageIconBg = lv_obj_create(ui_messageItem);
    lv_obj_set_width(ui_messageIconBg, LV_SIZE_CONTENT);  /// 100
    lv_obj_set_height(ui_messageIconBg, LV_SIZE_CONTENT); /// 50
    lv_obj_set_align(ui_messageIconBg, LV_ALIGN_LEFT_MID);
    lv_obj_clear_flag(ui_messageIconBg, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_messageIconBg, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_messageIconBg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_messageIconBg, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_messageIconBg, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_messageIconBg, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_messageIconBg, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *ui_messageIcon = lv_img_create(ui_messageIconBg);
    lv_img_set_src(ui_messageIcon, &ui_img_people_png);
    lv_obj_set_width(ui_messageIcon, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_messageIcon, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_messageIcon, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_messageIcon, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_messageIcon, LV_OBJ_FLAG_SCROLLABLE); /// Flags
}

lv_obj_t *add_chat_item(lv_obj_t *parent, const char *message, bool dir)
{
    lv_obj_t *ui_chatItem = lv_obj_create(parent);
    lv_obj_set_width(ui_chatItem, 320);
    lv_obj_set_height(ui_chatItem, LV_SIZE_CONTENT); /// 50
    lv_obj_set_x(ui_chatItem, 0);
    lv_obj_set_y(ui_chatItem, 0);
    lv_obj_set_align(ui_chatItem, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_chatItem, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_chatItem, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_chatItem, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_chatItem, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_chatItem, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_chatItem, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_chatItem, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_chatItem, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_chatItem, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *ui_chatItemBg = lv_obj_create(ui_chatItem);

    lv_obj_set_width(ui_chatItemBg, 200);
    lv_obj_set_height(ui_chatItemBg, LV_SIZE_CONTENT); /// 50
    lv_obj_set_align(ui_chatItemBg, dir ? LV_ALIGN_TOP_LEFT : LV_ALIGN_TOP_RIGHT);
    lv_obj_clear_flag(ui_chatItemBg, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_chatItemBg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_chatItemBg, lv_theme_get_color_primary(ui_chatItem), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_chatItemBg, dir ? 150 : 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_chatItemBg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_chatItemBg, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_chatItemBg, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_chatItemBg, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_chatItemBg, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *ui_chatText = lv_label_create(ui_chatItemBg);
    lv_obj_set_width(ui_chatText, lv_pct(100));
    lv_obj_set_height(ui_chatText, LV_SIZE_CONTENT); /// 1
    lv_label_set_text(ui_chatText, message);
    lv_obj_set_style_text_font(ui_chatText, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);
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
    lv_obj_set_style_pad_top(container, 70, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(container, 40, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(container, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(container, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(container, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    return container;
}

lv_obj_t *list_canvas(bool bottom, uint32_t bottomPad)
{

    lv_obj_t *canvas = app_canvas();
    lv_obj_t *list = lv_list_create(canvas);
    lv_obj_set_size(list, 320, LV_SIZE_CONTENT);
    lv_obj_center(list);
    lv_obj_set_align(list, bottom ? LV_ALIGN_BOTTOM_MID : LV_ALIGN_TOP_MID);
    lv_obj_set_style_bg_color(list, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(list, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(list, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_scrollbar_mode(list, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_pad_left(list, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(list, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(list, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(list, bottomPad, LV_PART_MAIN | LV_STATE_DEFAULT);

    return list;
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

    lv_label_set_text(ui_alertMessage, "");

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

lv_obj_t *keypad(lv_obj_t *parent, int offset, uint8_t id)
{
    lv_obj_t *key = lv_obj_create(parent);
    lv_obj_set_width(key, 320);
    lv_obj_set_height(key, 210);
    lv_obj_set_x(key, 0);
    lv_obj_set_y(key, offset);
    lv_obj_set_align(key, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(key, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(key, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(key, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(key, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(key, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(key, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(key, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(key, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *button;
    int k;
    int lb;
    for (k = 0; k < 12; k++)
    {
        lb = k + 1;
        button = lv_label_create(key);
        lv_obj_set_width(button, 80);
        lv_obj_set_height(button, 40);
        lv_obj_set_x(button, (k % 3 * 100) + 20); //(k %3 * 100) + 20, (z/3 * 50) + 10,
        lv_obj_set_y(button, (k / 3 * 50) + 10);
        if (lb == 11)
        {
            lb = 0;
        }
        lv_label_set_text_fmt(button, "%d", lb);
        if (lb == 10)
        {
            lv_label_set_text(button, ((id == PHONE) ? "*" : (id == SETTINGS) ? LV_SYMBOL_BACKSPACE
                                                                              : LV_SYMBOL_DOWN));
        }
        if (lb == 12)
        {
            lv_label_set_text(button, ((id == PHONE) ? "#" : (id == SETTINGS) ? LV_SYMBOL_OK
                                                                              : LV_SYMBOL_BACKSPACE));
        }
        lv_obj_add_flag(button, LV_OBJ_FLAG_CLICKABLE);    /// Flags
        lv_obj_clear_flag(button, LV_OBJ_FLAG_SCROLLABLE); /// Flags
        lv_obj_set_scrollbar_mode(button, LV_SCROLLBAR_MODE_OFF);
        lv_obj_set_style_text_align(button, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_font(button, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_bg_color(button, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
        lv_obj_set_style_bg_opa(button, 50, LV_PART_MAIN | LV_STATE_PRESSED);
        lv_obj_add_event_cb(button, event_app_component, LV_EVENT_CLICKED, uuid((KEYPAD | id), lb));
    }

    return key;
}

void notification_alert(lv_obj_t *parent){
    ui_notificationAlert = lv_obj_create(parent);
    lv_obj_set_width(ui_notificationAlert, 320);
    lv_obj_set_height(ui_notificationAlert, 120);
    lv_obj_set_x(ui_notificationAlert, 0);
    lv_obj_set_y(ui_notificationAlert, -120);
    lv_obj_set_align(ui_notificationAlert, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_notificationAlert, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_notificationAlert, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_notificationAlert, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_notificationAlert, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_notificationAlert, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_notificationAlert, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_notificationAlert, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_notificationAlert, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_notificationAppIcon = lv_img_create(ui_notificationAlert);
    lv_img_set_src(ui_notificationAppIcon, &ui_img_237043237);
    lv_obj_set_width(ui_notificationAppIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_notificationAppIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_notificationAppIcon, 0);
    lv_obj_set_y(ui_notificationAppIcon, 17);
    lv_obj_add_flag(ui_notificationAppIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_notificationAppIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_notificationAppTitle = lv_label_create(ui_notificationAlert);
    lv_obj_set_width(ui_notificationAppTitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_notificationAppTitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_notificationAppTitle, 40);
    lv_obj_set_y(ui_notificationAppTitle, 21);
    lv_label_set_text(ui_notificationAppTitle, "Message");

    ui_notificationContent = lv_label_create(ui_notificationAlert);
    lv_obj_set_height(ui_notificationContent, 40);
    lv_obj_set_width(ui_notificationContent, lv_pct(100));
    lv_obj_set_x(ui_notificationContent, 0);
    lv_obj_set_y(ui_notificationContent, 48);
    lv_obj_set_align(ui_notificationContent, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_notificationContent, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_label_set_text(ui_notificationContent, "Notification content Notification \nNotification content");

}

void caller_screen(lv_obj_t *parent){

    ui_callerScreen = lv_obj_create(parent);
    lv_obj_set_width(ui_callerScreen, 320);
    lv_obj_set_height(ui_callerScreen, 480);
    lv_obj_clear_flag(ui_callerScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_callerScreen, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_callerScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_callerScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_callerScreen, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(ui_callerScreen, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_style_pad_left(ui_callerScreen, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_callerScreen, 0, LV_PART_MAIN | LV_STATE_DEFAULT);


    ui_callerDetails = lv_label_create(ui_callerScreen);
    lv_obj_set_width(ui_callerDetails, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_callerDetails, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_callerDetails, 0);
    lv_obj_set_y(ui_callerDetails, 100);
    lv_obj_set_align(ui_callerDetails, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_callerDetails, "0707070707");
    lv_obj_set_style_text_font(ui_callerDetails, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_callDetails = lv_label_create(ui_callerScreen);
    lv_obj_set_width(ui_callDetails, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_callDetails, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_callDetails, 0);
    lv_obj_set_y(ui_callDetails, 70);
    lv_obj_set_align(ui_callDetails, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_callDetails, "Incoming Call");

    ui_callAnswerButton = lv_btn_create(ui_callerScreen);
    lv_obj_set_width(ui_callAnswerButton, 320);
    lv_obj_set_height(ui_callAnswerButton, 50);
    lv_obj_set_x(ui_callAnswerButton, 0);
    lv_obj_set_y(ui_callAnswerButton, 370);
    lv_obj_set_align(ui_callAnswerButton, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_callAnswerButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_callAnswerButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_callAnswerButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_callAnswerButton, event_app_component, LV_EVENT_CLICKED, uuid((KEYPAD | PHONE), 0xFD));

    ui_callAnswerLabel = lv_label_create(ui_callAnswerButton);
    lv_obj_set_width(ui_callAnswerLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_callAnswerLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_callAnswerLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_callAnswerLabel, "Answer");

    ui_callMessageButton = lv_btn_create(ui_callerScreen);
    lv_obj_set_width(ui_callMessageButton, 158);
    lv_obj_set_height(ui_callMessageButton, 50);
    lv_obj_set_x(ui_callMessageButton, 0);
    lv_obj_set_y(ui_callMessageButton, 316);
    lv_obj_add_flag(ui_callMessageButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_callMessageButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_callMessageButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_callMessageButton, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_callMessageLabel = lv_label_create(ui_callMessageButton);
    lv_obj_set_width(ui_callMessageLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_callMessageLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_callMessageLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_callMessageLabel, "Message");

    ui_callDeclineButton = lv_btn_create(ui_callerScreen);
    lv_obj_set_width(ui_callDeclineButton, 158);
    lv_obj_set_height(ui_callDeclineButton, 50);
    lv_obj_set_x(ui_callDeclineButton, 0);
    lv_obj_set_y(ui_callDeclineButton, 316);
    lv_obj_set_align(ui_callDeclineButton, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_callDeclineButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_callDeclineButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_callDeclineButton, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_callDeclineButton, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_callDeclineText = lv_label_create(ui_callDeclineButton);
    lv_obj_set_width(ui_callDeclineText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_callDeclineText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_callDeclineText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_callDeclineText, "Decline");
    lv_obj_add_event_cb(ui_callDeclineButton, event_app_component, LV_EVENT_CLICKED, uuid((KEYPAD | PHONE), 0xFE));
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
    lv_obj_t *canvas = app_canvas();
    ui_appCalendar = lv_obj_create(canvas);
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
    lv_calendar_header_arrow_create(ui_appCalendarObj);
    lv_obj_set_size(ui_appCalendarObj, 320, 370); // force: 0
    lv_obj_set_align(ui_appCalendarObj, LV_ALIGN_TOP_MID);
    lv_obj_set_style_radius(ui_appCalendarObj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_appCalendarObj, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_appCalendarObj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_appCalendarObj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_appCalendarObj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_appCalendarObj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
}

void appWifi()
{
    lv_obj_t *canvas = app_canvas();
    ui_appWifi = lv_obj_create(canvas);
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

    ui_lockScreenCode = lv_textarea_create(ui_lockScreenPanel);
    lv_obj_set_width(ui_lockScreenCode, 320);
    lv_obj_set_height(ui_lockScreenCode, LV_SIZE_CONTENT); /// 70
    lv_obj_set_x(ui_lockScreenCode, 0);
    lv_obj_set_y(ui_lockScreenCode, -210);
    lv_obj_set_align(ui_lockScreenCode, LV_ALIGN_BOTTOM_MID);
    lv_textarea_set_accepted_chars(ui_lockScreenCode, "1234567890");
    lv_textarea_set_max_length(ui_lockScreenCode, 4);
    lv_textarea_set_one_line(ui_lockScreenCode, true);
    lv_textarea_set_password_mode(ui_lockScreenCode, true);
    lv_obj_set_style_text_letter_space(ui_lockScreenCode, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_lockScreenCode, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lockScreenCode, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_lockScreenCode, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lockScreenCode, &lv_font_montserrat_34, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_lockScreenCode, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lockScreenCode, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lockScreenCode, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_lockScreenCode, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_lockScreenCode, event_lockcode, LV_EVENT_ALL, uuid((KEYPAD | LOCK), 0xFFFF));

    ui_lockPanel = keypad(ui_lockScreenPanel, 0, LOCK);
    notification_alert(ui_lockScreen);
    caller_screen(ui_lockScreen);
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

    create_tile(cont, "Lock Screen", &ui_img_gear_png, 0, 6, 1, event_launch);
    create_tile(cont, "Sleep", &ui_img_gear_png, 1, 6, 1, event_launch);
    create_tile(cont, "Power Off", &ui_img_gear_png, 2, 6, 1, event_launch);

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
    add_item(list1, "Power Off", &ui_img_gear_png, event_launch);
    add_item(list1, "Settings", &ui_img_gear_png, event_settings);
    add_item(list1, "Sleep", &ui_img_gear_png, event_launch);
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
    lv_obj_add_event_cb(ui_timeoutSelect, event_handler, LV_EVENT_VALUE_CHANGED, NULL);

    lv_obj_t *list = lv_dropdown_get_list(ui_timeoutSelect); /*Get the list*/
    lv_obj_set_style_radius(list, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(list, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(list, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(list, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(list, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(list, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_screenLock = lv_label_create(ui_settingsScroll);
    lv_obj_set_width(ui_screenLock, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_screenLock, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_screenLock, 40);
    lv_obj_set_y(ui_screenLock, 202);
    lv_label_set_text(ui_screenLock, "Screen Lock");

    ui_lockSwitch = lv_switch_create(ui_settingsScroll);
    lv_obj_set_width(ui_lockSwitch, 50);
    lv_obj_set_height(ui_lockSwitch, 25);
    lv_obj_set_x(ui_lockSwitch, 40);
    lv_obj_set_y(ui_lockSwitch, 239);

    ui_lockPass = lv_textarea_create(ui_settingsScroll);
    lv_obj_set_width(ui_lockPass, 80);
    lv_obj_set_height(ui_lockPass, LV_SIZE_CONTENT); /// 70
    lv_obj_set_x(ui_lockPass, 117);
    lv_obj_set_y(ui_lockPass, 233);
    lv_textarea_set_accepted_chars(ui_lockPass, "0123456789");
    lv_textarea_set_max_length(ui_lockPass, 4);
    lv_textarea_set_password_mode(ui_lockPass, true);
    lv_obj_set_style_text_letter_space(ui_lockPass, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_lockPass, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lockPass, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lockPass, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_lockPass, event_lockcode, LV_EVENT_ALL, uuid((KEYPAD | SETTINGS), 0xFFFF));

    ui_storageLabel = lv_label_create(ui_settingsScroll);
    lv_obj_set_width(ui_storageLabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_storageLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_storageLabel, 20);
    lv_obj_set_y(ui_storageLabel, 282);
    lv_label_set_text(ui_storageLabel, "Storage");

    ui_deviceLabel = lv_label_create(ui_settingsScroll);
    lv_obj_set_width(ui_deviceLabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_deviceLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_deviceLabel, 40);
    lv_obj_set_y(ui_deviceLabel, 304);
    lv_label_set_text(ui_deviceLabel, "This device");
    lv_obj_set_style_text_color(ui_deviceLabel, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_deviceLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_deviceLabel, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_storageBar = lv_bar_create(ui_settingsScroll);
    lv_bar_set_value(ui_storageBar, 25, LV_ANIM_OFF);
    lv_obj_set_width(ui_storageBar, 240);
    lv_obj_set_height(ui_storageBar, 10);
    lv_obj_set_x(ui_storageBar, 40);
    lv_obj_set_y(ui_storageBar, 323);
    lv_obj_set_style_radius(ui_storageBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_storageBar, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_storageText = lv_label_create(ui_settingsScroll);
    lv_obj_set_width(ui_storageText, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_storageText, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_storageText, 40);
    lv_obj_set_y(ui_storageText, 343);
    lv_label_set_text(ui_storageText, "6.22 MB used out of 7.27MB");
    lv_obj_set_style_text_font(ui_storageText, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_themeLabel = lv_label_create(ui_settingsScroll);
    lv_obj_set_width(ui_themeLabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_themeLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_themeLabel, 20);
    lv_obj_set_y(ui_themeLabel, 369);
    lv_label_set_text(ui_themeLabel, "Theme Color");

    ui_themeWheel = lv_colorwheel_create(ui_settingsScroll, true);
    lv_colorwheel_set_mode_fixed(ui_themeWheel, true);
    lv_obj_set_width(ui_themeWheel, 150);
    lv_obj_set_height(ui_themeWheel, 150);
    lv_obj_set_x(ui_themeWheel, 50);
    lv_obj_set_y(ui_themeWheel, 398);
    lv_obj_add_event_cb(ui_themeWheel, theme_change, LV_EVENT_VALUE_CHANGED, NULL);
    lv_obj_clear_flag(ui_themeWheel, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_aboutLabel = lv_label_create(ui_settingsScroll);
    lv_obj_set_width(ui_aboutLabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_aboutLabel, 20);
    lv_obj_set_y(ui_aboutLabel, 580);
    lv_label_set_text(ui_aboutLabel, "About");

    ui_aboutText = lv_label_create(ui_settingsScroll);
    lv_obj_set_width(ui_aboutText, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_aboutText, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_aboutText, 30);
    lv_obj_set_y(ui_aboutText, 610);

    lv_label_set_text(ui_aboutText, "Text");

    ui_settingsKeypad = keypad(ui_settingsScreen, -40, SETTINGS);
    lv_obj_set_style_bg_opa(ui_settingsKeypad, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

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
    lv_obj_set_style_pad_top(ui_appPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_appPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

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

    ui_messageSendText = lv_textarea_create(ui_appScreen);
    lv_obj_set_width(ui_messageSendText, 320);
    lv_obj_set_height(ui_messageSendText, LV_SIZE_CONTENT); /// 70
    lv_obj_set_x(ui_messageSendText, 0);
    lv_obj_set_y(ui_messageSendText, -40);
    lv_obj_set_align(ui_messageSendText, LV_ALIGN_BOTTOM_LEFT);
    lv_textarea_set_placeholder_text(ui_messageSendText, "Type here");
    lv_obj_set_style_radius(ui_messageSendText, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_messageSendText, lv_color_hex(0x1A1A1A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_messageSendText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_messageSendText, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(ui_messageSendText, event_textarea, LV_EVENT_ALL, NULL);

    ui_messageSendButton = lv_label_create(ui_messageSendText);
    lv_obj_set_width(ui_messageSendButton, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_messageSendButton, LV_SIZE_CONTENT); /// 1
    lv_label_set_text(ui_messageSendButton, LV_SYMBOL_GPS);
    lv_obj_set_align(ui_messageSendButton, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_messageSendButton, LV_OBJ_FLAG_CLICKABLE); /// Flags
    lv_obj_set_ext_click_area(ui_messageSendButton, 10);
    lv_obj_add_event_cb(ui_messageSendButton, event_app_component, LV_EVENT_CLICKED, uuid(0xCCCC, 0x0001));

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

void launchApp(const char *name, const void *src, bool header)
{
    lv_obj_set_parent(ui_Panel2, ui_appScreen); // navigation
    lv_obj_set_parent(ui_notificationPanel, ui_appScreen);
    lv_obj_set_parent(ui_notificationAlert, ui_appScreen);
    lv_obj_set_parent(ui_callerScreen, ui_appScreen);
    lv_obj_set_parent(ui_statusBar, ui_appScreen);
    lv_obj_set_parent(ui_systemKeyboard, ui_appScreen);
    lv_obj_set_parent(ui_alertPanel, ui_appScreen);

    if (header)
    {
        lv_obj_clear_flag(ui_appHeader, LV_OBJ_FLAG_HIDDEN); // show the header
    }
    else
    {
        lv_obj_add_flag(ui_appHeader, LV_OBJ_FLAG_HIDDEN); // hide the header
    }

    lv_obj_add_flag(ui_messageSendText, LV_OBJ_FLAG_HIDDEN);
    lv_label_set_text(ui_appLabel, name);
    lv_img_set_src(ui_appIcon, src);

    lv_disp_load_scr(ui_appScreen);
    // lv_scr_load_anim(ui_appScreen, LV_SCR_LOAD_ANIM_FADE_IN, 3, 0, false);
}

void closeApp()
{
    lv_obj_clean(ui_appPanel);
}

void openStart()
{

    lv_obj_set_parent(ui_Panel2, ui_startScreen); // navigation
    lv_obj_set_parent(ui_notificationPanel, ui_startScreen);
    lv_obj_set_parent(ui_notificationAlert, ui_startScreen);
    lv_obj_set_parent(ui_callerScreen, ui_startScreen);
    lv_obj_set_parent(ui_statusBar, ui_startScreen);
    lv_obj_set_parent(ui_systemKeyboard, ui_startScreen);
    lv_obj_set_parent(ui_alertPanel, ui_startScreen);
    lv_disp_load_scr(ui_startScreen);
}

void openSettings()
{

    lv_obj_set_parent(ui_Panel2, ui_settingsScreen); // navigation
    lv_obj_set_parent(ui_notificationPanel, ui_settingsScreen);
    lv_obj_set_parent(ui_notificationAlert, ui_settingsScreen);
    lv_obj_set_parent(ui_callerScreen, ui_settingsScreen);
    lv_obj_set_parent(ui_statusBar, ui_settingsScreen);
    lv_obj_set_parent(ui_systemKeyboard, ui_settingsScreen);
    lv_obj_set_parent(ui_alertPanel, ui_settingsScreen);
    lv_obj_add_flag(ui_settingsKeypad, LV_OBJ_FLAG_HIDDEN);
    lv_disp_load_scr(ui_settingsScreen);
}

void openLock()
{
    lv_obj_set_style_text_opa(ui_lockScreenTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lockScreenDate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_flag(ui_lockPanel, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(ui_lockScreenCode, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_parent(ui_notificationAlert, ui_lockScreen);
    lv_obj_set_parent(ui_callerScreen, ui_lockScreen);
    lv_obj_set_parent(ui_statusBar, ui_lockScreen);
    lv_disp_load_scr(ui_lockScreen);
}

void openAppWifi()
{
    closeApp();
    appWifi();
    setWifi();
    lv_label_set_text_fmt(ui_appWifiStatus, onConnect ? "Connected" : "Disconnected");
    launchApp("Wifi", &ui_img_gear_png, true);
}

void openAppCalendar()
{
    closeApp();
    appCalendar();
    lv_calendar_set_today_date(ui_appCalendarObj, rtcTime.year, rtcTime.month, rtcTime.day);
    lv_calendar_set_showed_date(ui_appCalendarObj, rtcTime.year, rtcTime.month);
    launchApp("Calendar", &ui_img_calendar_png, true);
}

void openPhone()
{
    closeApp();
    keypad(ui_appPanel, -90, PHONE);
    create_button(ui_appPanel, uuid((KEYPAD | PHONE), 0xFF), "Call", 0, 390, 320, 50);

    ui_phoneNumber = lv_textarea_create(ui_appPanel);
    lv_obj_set_width(ui_phoneNumber, 320);
    lv_obj_set_height(ui_phoneNumber, LV_SIZE_CONTENT); /// 70
    lv_obj_set_x(ui_phoneNumber, 0);
    lv_obj_set_y(ui_phoneNumber, 70);
    lv_obj_set_align(ui_phoneNumber, LV_ALIGN_TOP_LEFT);
    lv_textarea_set_max_length(ui_phoneNumber, 12);
    lv_textarea_set_one_line(ui_phoneNumber, true);
    lv_obj_set_style_text_letter_space(ui_phoneNumber, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_phoneNumber, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_phoneNumber, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_phoneNumber, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_phoneNumber, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_phoneNumber, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_phoneNumber, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_phoneNumber, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_phoneNumberDelete = lv_label_create(ui_phoneNumber);
    lv_obj_set_width(ui_phoneNumberDelete, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_phoneNumberDelete, LV_SIZE_CONTENT); ///
    lv_label_set_text(ui_phoneNumberDelete, LV_SYMBOL_BACKSPACE);
    lv_obj_add_flag(ui_phoneNumberDelete, LV_OBJ_FLAG_CLICKABLE); /// Flags
    lv_obj_set_align(ui_phoneNumberDelete, LV_ALIGN_RIGHT_MID);
    lv_obj_set_ext_click_area(ui_phoneNumberDelete, 10);
    lv_obj_add_event_cb(ui_phoneNumberDelete, event_app_component, LV_EVENT_CLICKED, uuid((KEYPAD | PHONE), 0x0D));

    launchApp("Phone", &ui_img_1276322231, false);
}

void openAppStore()
{
    closeApp();

    lv_obj_t *storeList = list_canvas(false, 0);

    int b = 0;
    for (int a = 0; a < MAX_APPS; a++)
    {
        if (appList[a].state)
        {
            add_app(storeList, appList[a]);
            b++;
        }
    }

    if (b == 0)
    {
        create_label(storeList, "Apps currently unavailable", 70);
        create_button(storeList, STORE_REFRESH, "Refresh", 40, 120, 100, 0);
    }

    launchApp("App Store", &ui_img_571330079, true);
}

void openAppAbout()
{
    closeApp();
    lv_obj_t *canvas = app_canvas();
    create_label(canvas, aboutText, 20);

    launchApp("About", &ui_img_gear_png, true);
}

void openMessage()
{
    closeApp();
    lv_obj_t *messageList = list_canvas(false, 0);

    add_message_item(messageList, "Windows", "Welcome to your ESP32 Lumia phone", "11:45", false);
    add_message_item(messageList, "ESP32", "Welcome to your ESP32 Lumia phone", "11:45", true);
    add_message_item(messageList, "Github", "Welcome to your ESP32 Lumia phone", "11:45", false);
    add_message_item(messageList, "Arduino", "Welcome to your ESP32 Lumia phone", "11:45", false);

    launchApp("Messages", &ui_img_237043237, true);
}

void openChat()
{
    closeApp();
    chatList = list_canvas(true, 50);

    chatScr = true;
    add_chat_item(chatList, "Hello world", true);
    add_chat_item(chatList, "Welcome to your ESP32 Lumia phone", true);
    // add_chat_item(chatList, "Hello world", false);
    // add_chat_item(chatList, "Welcome to your ESP32 Lumia phone", true);
    // add_chat_item(chatList, "Hello world", true);
    // add_chat_item(chatList, "Welcome to your ESP32 Lumia phone", true);
    // add_chat_item(chatList, "Hello world", false);
    // add_chat_item(chatList, "Welcome to your ESP32 Lumia phone", true);
    // add_chat_item(chatList, "Welcome to your ESP32 Lumia phone", false);

    launchApp("Windows", &ui_img_people_png, true);

    lv_obj_clear_flag(ui_messageSendText, LV_OBJ_FLAG_HIDDEN);
}

void vibrate(long time)
{
    digitalWrite(MOTOR, HIGH);
    delay(time);
    digitalWrite(MOTOR, LOW);
}

void startVibrate(){
    digitalWrite(MOTOR, HIGH);
}

void endVibrate(){
    digitalWrite(MOTOR, LOW);
}

void showAlert(const void *src, bool state, int size, uint16_t code)
{
    if (state)
    {
        lv_label_set_text(ui_alertTitle, alert.title);
        lv_label_set_text(ui_alertMessage, alert.message);
        lv_img_set_src(ui_alertIcon, src);
        lv_obj_set_height(ui_alertPanelDialog, size);
        lv_obj_set_height(ui_alertScroll, size - 100);
        lv_obj_add_event_cb(ui_alertButton, event_alert, LV_EVENT_CLICKED, uuid(ALERT, code));

        lv_obj_clear_flag(ui_alertPanel, LV_OBJ_FLAG_HIDDEN);
    }
    else
    {
        lv_obj_add_flag(ui_alertPanel, LV_OBJ_FLAG_HIDDEN);
    }
}
