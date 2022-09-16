#include <lvgl.h>

#define BL 23

#define I2C_SDA 18
#define I2C_SCL 19
#define RST_N_PIN -1
#define INT_N_PIN 36

struct TouchData{
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

/* Change to your screen resolution */
static uint32_t screenWidth;
static uint32_t screenHeight;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t *disp_draw_buf;
static lv_disp_drv_t disp_drv;



