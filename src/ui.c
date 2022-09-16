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
lv_obj_t *ui_batteryIcon;
lv_obj_t *ui_batteryBar;
lv_obj_t *ui_wifiIcon;
lv_obj_t *ui_networkIcon;
lv_obj_t *ui_lockTime;
lv_obj_t *ui_startScreen;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Image6;
lv_obj_t *ui_Image7;
lv_obj_t *ui_Screen5;

lv_obj_t *ui_tileView;
lv_obj_t *ui_tileStart;
lv_obj_t *ui_tileApps;

lv_obj_t * list1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 1
#error "#error LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

bool dragging = false;
int lastY;

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

static void event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * obj = lv_event_get_target(e);
    if(code == LV_EVENT_CLICKED) {
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
    printf("Event code: %d\n", event);
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
        printf("Drag\tx:%d, y:%d\n", indev->proc.types.pointer.act_point.x, indev->proc.types.pointer.act_point.y);

        if (dragging)
        {
            int vect = lastY - indev->proc.types.pointer.act_point.y;
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
        printf("Press\tx:%d, y:%d\n", indev->proc.types.pointer.act_point.x, indev->proc.types.pointer.act_point.y);
        lastY = indev->proc.types.pointer.act_point.y;
        if (lastY > 150)
        {
            // dragging = true;
        }
        dragging = true;
    }
    if (event == LV_EVENT_RELEASED)
    {
        printf("Release\tx:%d, y:%d\n", indev->proc.types.pointer.act_point.x, indev->proc.types.pointer.act_point.y);
        dragging = false;

        int vect = lastY - indev->proc.types.pointer.act_point.y;
        printf("Drag strength: %d\n", vect);

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

    // ui_Image5

    ui_Image5 = lv_img_create(ui_Panel2);
    lv_img_set_src(ui_Image5, &ui_img_716248923);

    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image5, 0);
    lv_obj_set_y(ui_Image5, 0);

    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Image5, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_Image5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Image6

    ui_Image6 = lv_img_create(ui_Panel2);
    lv_img_set_src(ui_Image6, &ui_img_back_png);

    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image6, -90);
    lv_obj_set_y(ui_Image6, 0);

    lv_obj_set_align(ui_Image6, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Image6, ui_event_Image6, LV_EVENT_ALL, NULL);

    // ui_Image7

    ui_Image7 = lv_img_create(ui_Panel2);
    lv_img_set_src(ui_Image7, &ui_img_1954556228);

    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image7, 90);
    lv_obj_set_y(ui_Image7, 0);

    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);

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

    ui_tileView = lv_tileview_create(ui_startScreen);

    lv_obj_set_width(ui_tileView, 320);
    lv_obj_set_height(ui_tileView, 410);

    lv_obj_set_x(ui_tileView, 0);
    lv_obj_set_y(ui_tileView, -10);

    lv_obj_set_align(ui_tileView, LV_ALIGN_CENTER);

    lv_obj_set_scrollbar_mode(ui_tileView, LV_SCROLLBAR_MODE_OFF);

    lv_obj_set_style_radius(ui_tileView, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_tileView, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_tileView, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_tileView, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    /*Tile1: just a label*/
    ui_tileStart = lv_tileview_add_tile(ui_tileView, 0, 0, LV_DIR_RIGHT);

    static lv_coord_t col_dsc[] = {92, 92, 92, LV_GRID_TEMPLATE_LAST};
    static lv_coord_t row_dsc[] = {60, 60, 60, 60, LV_GRID_TEMPLATE_LAST};

    /*Create a container with grid*/
    lv_obj_t * cont = lv_obj_create(ui_tileStart);
    lv_obj_set_style_grid_column_dsc_array(cont, col_dsc, 0);
    lv_obj_set_style_grid_row_dsc_array(cont, row_dsc, 0);
    lv_obj_set_size(cont, 320, 410);
    lv_obj_center(cont);
    lv_obj_set_layout(cont, LV_LAYOUT_GRID);

    lv_obj_set_style_radius(cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * label;
    lv_obj_t * obj;

    uint32_t i;
    for(i = 0; i < 12; i++) {
        uint8_t col = i % 4;
        uint8_t row = i / 3;

        obj = lv_btn_create(cont);
        /*Stretch the cell horizontally and vertically too
         *Set span to 1 to make the cell 1 column/row sized*/
        lv_obj_set_style_radius(obj, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_grid_cell(obj, LV_GRID_ALIGN_STRETCH, col, 1,
                             LV_GRID_ALIGN_STRETCH, row, 1);

        label = lv_label_create(obj);
        lv_label_set_text_fmt(label, "c%d, r%d", col, row);
        lv_obj_center(label);
    }

    /*Tile2: a button*/
    ui_tileApps = lv_tileview_add_tile(ui_tileView, 1, 0, LV_DIR_LEFT);
    /*Create a list*/
    list1 = lv_list_create(ui_tileApps);
    lv_obj_set_size(list1,  320,  410);
    lv_obj_center(list1);

    lv_obj_set_style_radius(list1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(list1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(list1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(list1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_scrollbar_mode(list1, LV_SCROLLBAR_MODE_OFF);

    /*Add buttons to the list*/
    lv_obj_t * btn;

    lv_list_add_text(list1, "File");
    btn = lv_list_add_btn(list1, LV_SYMBOL_FILE, "New");
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);
    btn = lv_list_add_btn(list1, LV_SYMBOL_DIRECTORY, "Open");
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);
    btn = lv_list_add_btn(list1, LV_SYMBOL_SAVE, "Save");
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);
    btn = lv_list_add_btn(list1, LV_SYMBOL_CLOSE, "Delete");
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);
    btn = lv_list_add_btn(list1, LV_SYMBOL_EDIT, "Edit");
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);

    lv_list_add_text(list1, "Connectivity");
    btn = lv_list_add_btn(list1, LV_SYMBOL_BLUETOOTH, "Bluetooth");
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);
    btn = lv_list_add_btn(list1, LV_SYMBOL_GPS, "Navigation");
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);
    btn = lv_list_add_btn(list1, LV_SYMBOL_USB, "USB");
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);
    btn = lv_list_add_btn(list1, LV_SYMBOL_BATTERY_FULL, "Battery");
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);

    lv_list_add_text(list1, "Exit");
    btn = lv_list_add_btn(list1, LV_SYMBOL_OK, "Apply");
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);
    btn = lv_list_add_btn(list1, LV_SYMBOL_CLOSE, "Close");
    lv_obj_add_event_cb(btn, event_handler, LV_EVENT_CLICKED, NULL);
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
