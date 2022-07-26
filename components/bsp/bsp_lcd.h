#ifndef __BSP_LCD_H
#define __BSP_LCD_H

#include <stdint.h>

#include <esp_lcd_panel_io.h>

#include "bsp_lcd_panels.h"

// #define LCD_X_PIXELS 320
// #define LCD_Y_PIXELS 480

// #define BSP_LCD_BL_PIN 4
// #define BSP_LCD_CS_PIN 38
// #define BSP_LCD_DC_PIN 39
// #define BSP_LCD_WR_PIN 40
// #define BSP_LCD_DATA_PINS {48, 47, 21, 14, 13, 12, 11, 10, 9, 8, 18, 17, 16, 15, 7, 6}


#define LCD_X_PIXELS 480
#define LCD_Y_PIXELS 320

#define BSP_LCD_CS_PIN 47
#define BSP_LCD_DC_PIN 21
#define BSP_LCD_WR_PIN 14
#define BSP_LCD_RD_PIN 13
#define BSP_LCD_BL_PIN 35
#define BSP_LCD_DATA_PINS {11, 10, 9, 46, 3, 20, 19, 8, 18, 17, 16, 15, 7, 6, 5, 4}

// #define BSP_LCD_CS_PIN 4
// #define BSP_LCD_DC_PIN 5
// #define BSP_LCD_WR_PIN 6
// #define BSP_LCD_RD_PIN 7
// #define BSP_LCD_BL_PIN 35
// #define BSP_LCD_DATA_PINS {16, 17, 18, 8, 19, 20, 3, 46, 9, 10, 11, 12, 13, 14, 21, 47}

esp_lcd_panel_io_handle_t lcd_i80_bus_io_init(uint16_t pclk_mhz, size_t transfer_size);
void lcd_init_reg(const esp_lcd_panel_io_handle_t io, const lcd_panel_reg_t reg_table[]);
void lcd_draw_rect(const esp_lcd_panel_io_handle_t io, uint16_t x_start, uint16_t y_start,uint16_t x_end, uint16_t y_end, const void *color_data);
void lcd_disp_switch(const esp_lcd_panel_io_handle_t io, bool sw);
esp_err_t lcd_bl_set(uint8_t brightness);

#endif
