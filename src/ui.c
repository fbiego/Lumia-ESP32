// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: Lumia-ESP32

#include <Arduino.h>
#include "ui.h"
//#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_bootScreen;
lv_obj_t *ui_bootLogo;
lv_obj_t *ui_lockScreen;
lv_obj_t *ui_lockScreenPanel;
lv_obj_t *ui_lockScreenTime;
lv_obj_t *ui_lockScreenDate;
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
lv_obj_t *ui_Screen5;
lv_obj_t *ui_Image22;

lv_obj_t *ui_tileView;
lv_obj_t *ui_tileStart;
lv_obj_t *ui_tileApps;

lv_obj_t *ui_startButton;
lv_obj_t *ui_backButton;
lv_obj_t *ui_searchButton;

lv_obj_t *list1;

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

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////

static void slider_event_cb(lv_event_t *e)
{
    lv_obj_t *slider = lv_event_get_target(e);
    // if (slider == ui_Slider1)
    //  {
    //    int brightness = (int)lv_slider_get_value(slider);
    //    ledcWrite(ledChannel, brightness);
    //  }
}

static void event_handler(lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *obj = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED)
    {
        printf("Clicked: %s\n", lv_list_get_btn_text(list1, obj));
    }
}

static void ui_event_Image6(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);

    if (event == LV_EVENT_PRESSED)
    {
        lv_disp_load_scr(ui_lockScreen);
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

                if (vect <= 0 && vect >= -480)
                {

                    lv_obj_set_y(ui_notificationPanel, vect);
                    printf("Vector: %d\n", vect);
                }
            }
            else
            {
                if (vect >= 0 && vect <= 440)
                {

                    lv_obj_set_y(ui_notificationPanel, -440 + vect);
                    printf("Vector: %d\n", vect);

                    if (vect >= 120){
                        lv_obj_set_y(ui_actionPanel, 380 - (vect - 120));
                    }

                    // lv_obj_set_style_text_opa(ui_lockScreenTime, 255 - (vect / 2), LV_PART_MAIN | LV_STATE_DEFAULT);
                    // lv_obj_set_style_text_opa(ui_lockScreenDate, 255 - (vect / 2), LV_PART_MAIN | LV_STATE_DEFAULT);
                }
            }
        }
    }
    if (event == LV_EVENT_PRESSED)
    {
        printf("Press\tx:%d, y:%d\n", indev->proc.types.pointer.act_point.x, indev->proc.types.pointer.act_point.y);

        notification.y = indev->proc.types.pointer.act_point.y;
        if (!notification.active)
        {
            // 0 - 30
            if (notification.y < 30)
            {
                // dragging = true;
                lv_obj_set_style_opa(ui_notificationPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
            }
        }

        notification.dragging = true;
        // lv_obj_set_y(ui_notificationPanel, -440);
    }
    if (event == LV_EVENT_RELEASED)
    {
        printf("Release\tx:%d, y:%d\n", indev->proc.types.pointer.act_point.x, indev->proc.types.pointer.act_point.y);
        notification.dragging = false;

        int vect = indev->proc.types.pointer.act_point.y - notification.y;
        printf("Drag strength: %d\n", vect);

        if (notification.active)
        {
            if ((vect * -1) < 150)
            {
                lv_obj_set_style_opa(ui_notificationPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_y(ui_notificationPanel, 0);
                lv_obj_set_y(ui_actionPanel, 50);
                notification.active = true;
            }
            else
            {
                lv_obj_set_y(ui_notificationPanel, -440);
                lv_obj_set_style_opa(ui_notificationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_y(ui_actionPanel, 380);
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
                notification.active = true;
            }
            else
            {
                lv_obj_set_y(ui_notificationPanel, -440);
                lv_obj_set_style_opa(ui_notificationPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
                lv_obj_set_y(ui_actionPanel, 380);
                notification.active = false;
            }
        }

        // lv_obj_set_y(ui_lockScreenTime, 138);
        // lv_obj_set_y(ui_lockScreenDate, 178);

        // lv_obj_set_style_text_opa(ui_lockScreenTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        // lv_obj_set_style_text_opa(ui_lockScreenDate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
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
            lv_disp_load_scr(ui_startScreen);
        }

        lv_obj_set_y(ui_lockScreenTime, 138);
        lv_obj_set_y(ui_lockScreenDate, 178);

        lv_obj_set_style_text_opa(ui_lockScreenTime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_opa(ui_lockScreenDate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    }
}

void create_tile(lv_obj_t *parent, char *name, const void *src, int col, int row, int size, lv_event_cb_t callback)
{
    lv_obj_t *label;
    lv_obj_t *obj;
    lv_obj_t *icon;
    obj = lv_btn_create(parent);
    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, col, size, LV_GRID_ALIGN_STRETCH, row, 1);
    lv_obj_add_event_cb(obj, callback, LV_EVENT_ALL, NULL);
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
    lv_obj_add_event_cb(obj, callback, LV_EVENT_ALL, NULL);

    if (checked)
    {
        lv_obj_add_state(obj, LV_STATE_CHECKED); /*Make the chekbox checked*/
    }
    else
    {
        lv_obj_clear_state(obj, LV_STATE_CHECKED); /*MAke the checkbox unchecked*/
    }

    lv_obj_add_flag(obj, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(obj, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_bg_color(obj, lv_color_hex(0x7A7A7A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(obj, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(obj, lv_palette_main(LV_PALETTE_BLUE), LV_PART_MAIN | LV_STATE_CHECKED);
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
    lv_obj_set_style_bg_color(obj, lv_palette_main(LV_PALETTE_BLUE), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(obj, 100, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_border_width(obj, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_event_cb(obj, callback, LV_EVENT_ALL, NULL);

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

void keyboard(lv_obj_t *parent)
{
    // ui_systemKeyboard
    ui_systemKeyboard = lv_keyboard_create(parent);

    lv_obj_set_width(ui_systemKeyboard, 320);
    lv_obj_set_height(ui_systemKeyboard, 150);

    lv_obj_set_x(ui_systemKeyboard, 0);
    lv_obj_set_y(ui_systemKeyboard, -40);

    lv_obj_set_align(ui_systemKeyboard, LV_ALIGN_BOTTOM_MID);

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
    create_action_tile(ui_actionPanel, "Cellular", NULL, false, 3, 0, 1, NULL);
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

    lv_obj_set_x(ui_actionBattery, -45);
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

    // ui_batteryIcon

    ui_batteryIcon = lv_img_create(ui_lockScreen);
    lv_img_set_src(ui_batteryIcon, &ui_img_1947241130);

    lv_obj_set_width(ui_batteryIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_batteryIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_batteryIcon, 102);
    lv_obj_set_y(ui_batteryIcon, -227);

    lv_obj_set_align(ui_batteryIcon, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_batteryIcon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_batteryIcon, LV_OBJ_FLAG_SCROLLABLE);

    // ui_batteryBar

    ui_batteryBar = lv_bar_create(ui_lockScreen);
    lv_bar_set_range(ui_batteryBar, 0, 100);
    lv_bar_set_value(ui_batteryBar, 25, LV_ANIM_OFF);

    lv_obj_set_width(ui_batteryBar, 15);
    lv_obj_set_height(ui_batteryBar, 6);

    lv_obj_set_x(ui_batteryBar, 254);
    lv_obj_set_y(ui_batteryBar, -227);

    lv_obj_set_align(ui_batteryBar, LV_ALIGN_LEFT_MID);

    lv_obj_set_style_radius(ui_batteryBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_batteryBar, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_batteryBar, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_batteryBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_wifiIcon

    ui_wifiIcon = lv_img_create(ui_lockScreen);
    lv_img_set_src(ui_wifiIcon, &ui_img_wifi_png);

    lv_obj_set_width(ui_wifiIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_wifiIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_wifiIcon, -119);
    lv_obj_set_y(ui_wifiIcon, -226);

    lv_obj_set_align(ui_wifiIcon, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_wifiIcon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_wifiIcon, LV_OBJ_FLAG_SCROLLABLE);

    // ui_networkIcon

    ui_networkIcon = lv_img_create(ui_lockScreen);
    lv_img_set_src(ui_networkIcon, &ui_img_2009460128);

    lv_obj_set_width(ui_networkIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_networkIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_networkIcon, -142);
    lv_obj_set_y(ui_networkIcon, -227);

    lv_obj_set_align(ui_networkIcon, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_networkIcon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_networkIcon, LV_OBJ_FLAG_SCROLLABLE);

    // ui_lockTime

    ui_lockTime = lv_label_create(ui_lockScreen);

    lv_obj_set_width(ui_lockTime, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_lockTime, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_lockTime, 139);
    lv_obj_set_y(ui_lockTime, -227);

    lv_obj_set_align(ui_lockTime, LV_ALIGN_CENTER);

    lv_label_set_text(ui_lockTime, "18:40");

    lv_obj_set_style_text_font(ui_lockTime, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
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

    /*Tile1: just a label*/
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

    create_tile(cont, "Phone", &ui_img_1276322231, 0, 0, 1, NULL);
    create_tile(cont, "People", &ui_img_people_png, 1, 0, 2, NULL);

    create_tile(cont, "Messaging", &ui_img_237043237, 0, 1, 1, NULL);
    create_tile(cont, "Mail", &ui_img_email_png, 1, 1, 1, NULL);
    create_tile(cont, "Calendar", &ui_img_calendar_png, 2, 1, 1, NULL);

    create_tile(cont, "Edge", &ui_img_microsoft_png, 0, 2, 1, NULL);
    create_tile(cont, "Weather", &ui_img_1127648905, 1, 2, 2, NULL);

    create_tile(cont, "Photos", &ui_img_gallery_png, 0, 3, 2, NULL);
    create_tile(cont, "Music", &ui_img_359952343, 2, 3, 1, NULL);

    create_tile(cont, "Settings", &ui_img_gear_png, 0, 4, 1, NULL);
    create_tile(cont, "Maps", &ui_img_846015263, 1, 4, 2, NULL);

    create_tile(cont, "OneDrive", &ui_img_cloud_png, 0, 5, 1, NULL);
    create_tile(cont, "Store", &ui_img_571330079, 1, 5, 1, NULL);
    create_tile(cont, "Wallet", &ui_img_wallet_png, 2, 5, 1, NULL);

    /*Tile2: a button*/
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

    /*Add buttons to the list*/

    add_item(list1, "Phone", &ui_img_1276322231, NULL);
    add_item(list1, "People", &ui_img_people_png, NULL);

    add_item(list1, "Messaging", &ui_img_237043237, NULL);
    add_item(list1, "Mail", &ui_img_email_png, NULL);
    add_item(list1, "Calendar", &ui_img_calendar_png, NULL);

    add_item(list1, "Edge", &ui_img_microsoft_png, NULL);
    add_item(list1, "Weather", &ui_img_1127648905, NULL);

    add_item(list1, "Photos", &ui_img_gallery_png, NULL);
    add_item(list1, "Music", &ui_img_359952343, NULL);

    add_item(list1, "Settings", &ui_img_gear_png, NULL);
    add_item(list1, "Maps", &ui_img_846015263, NULL);

    add_item(list1, "OneDrive", &ui_img_cloud_png, NULL);
    add_item(list1, "Store", &ui_img_571330079, NULL);
    add_item(list1, "Wallet", &ui_img_wallet_png, NULL);

    // ui_Panel2

    ui_Panel2 = lv_obj_create(ui_startScreen);

    lv_obj_set_width(ui_Panel2, 320);
    lv_obj_set_height(ui_Panel2, 40);

    lv_obj_set_x(ui_Panel2, 0);
    lv_obj_set_y(ui_Panel2, 0);

    lv_obj_set_align(ui_Panel2, LV_ALIGN_BOTTOM_MID);

    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
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

    // ui_backButton

    ui_backButton = lv_imgbtn_create(ui_Panel2);
    lv_imgbtn_set_src(ui_backButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_back_png, NULL);

    lv_obj_set_height(ui_backButton, 24);
    lv_obj_set_width(ui_backButton, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_backButton, -90);
    lv_obj_set_y(ui_backButton, 0);

    lv_obj_set_align(ui_backButton, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_backButton, ui_event_Image6, LV_EVENT_ALL, NULL);

    // ui_searchButton

    ui_searchButton = lv_imgbtn_create(ui_Panel2);
    lv_imgbtn_set_src(ui_searchButton, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1954556228, NULL);

    lv_obj_set_height(ui_searchButton, 24);
    lv_obj_set_width(ui_searchButton, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_searchButton, 90);
    lv_obj_set_y(ui_searchButton, 0);

    lv_obj_set_align(ui_searchButton, LV_ALIGN_CENTER);

    notification_panel(ui_startScreen);
    // ui_batteryIcon

    ui_batteryIcon = lv_img_create(ui_startScreen);
    lv_img_set_src(ui_batteryIcon, &ui_img_1947241130);

    lv_obj_set_width(ui_batteryIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_batteryIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_batteryIcon, 102);
    lv_obj_set_y(ui_batteryIcon, -227);

    lv_obj_set_align(ui_batteryIcon, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_batteryIcon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_batteryIcon, LV_OBJ_FLAG_SCROLLABLE);

    // ui_batteryBar

    ui_batteryBar = lv_bar_create(ui_startScreen);
    lv_bar_set_range(ui_batteryBar, 0, 100);
    lv_bar_set_value(ui_batteryBar, 25, LV_ANIM_OFF);

    lv_obj_set_width(ui_batteryBar, 15);
    lv_obj_set_height(ui_batteryBar, 6);

    lv_obj_set_x(ui_batteryBar, 254);
    lv_obj_set_y(ui_batteryBar, -227);

    lv_obj_set_align(ui_batteryBar, LV_ALIGN_LEFT_MID);

    lv_obj_set_style_radius(ui_batteryBar, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_batteryBar, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_batteryBar, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_batteryBar, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    // ui_wifiIcon

    ui_wifiIcon = lv_img_create(ui_startScreen);
    lv_img_set_src(ui_wifiIcon, &ui_img_wifi_png);

    lv_obj_set_width(ui_wifiIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_wifiIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_wifiIcon, -119);
    lv_obj_set_y(ui_wifiIcon, -226);

    lv_obj_set_align(ui_wifiIcon, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_wifiIcon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_wifiIcon, LV_OBJ_FLAG_SCROLLABLE);

    // ui_networkIcon

    ui_networkIcon = lv_img_create(ui_startScreen);
    lv_img_set_src(ui_networkIcon, &ui_img_2009460128);

    lv_obj_set_width(ui_networkIcon, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_networkIcon, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_networkIcon, -142);
    lv_obj_set_y(ui_networkIcon, -227);

    lv_obj_set_align(ui_networkIcon, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_networkIcon, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_networkIcon, LV_OBJ_FLAG_SCROLLABLE);

    // ui_lockTime

    ui_lockTime = lv_label_create(ui_startScreen);

    lv_obj_set_width(ui_lockTime, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_lockTime, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_lockTime, 139);
    lv_obj_set_y(ui_lockTime, -227);

    lv_obj_set_align(ui_lockTime, LV_ALIGN_CENTER);

    lv_label_set_text(ui_lockTime, "18:40");

    lv_obj_set_style_text_font(ui_lockTime, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);
}
void ui_Screen5_screen_init(void)
{

    // ui_Screen5

    ui_Screen5 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Screen5, slider_event_cb, LV_EVENT_CLICKED, NULL);
}

void ui_init(void)
{
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                              true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_bootScreen_screen_init();
    ui_lockScreen_screen_init();
    ui_startScreen_screen_init();
    ui_Screen5_screen_init();
    lv_disp_load_scr(ui_bootScreen);
}
