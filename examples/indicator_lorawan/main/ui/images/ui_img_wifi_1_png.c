// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.3
// Project name: indicator_lorawan

#include "../ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets\wifi_1.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_wifi_1_png_data[] = {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x49,0x4A,0x40,0x28,0x42,0x7F,0x28,0x42,0xAF,0x28,0x42,0xDF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xDF,0x28,0x42,0xBF,0x28,0x42,0x90,0x49,0x4A,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x42,0x10,0x28,0x42,0x7F,0x28,0x42,0xEF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xDF,0x28,0x42,0x8F,0x49,0x4A,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x42,0x60,0x28,0x42,0xEF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,
    0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xDF,0x28,0x42,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x42,0x10,0x28,0x42,0xAF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xBF,0x28,0x42,0x90,0x28,0x42,0x80,0x28,0x42,0x60,0x28,0x42,0x80,0x28,0x42,0x90,0x28,0x42,0xBF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xDF,0x49,0x4A,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x49,0x4A,0x20,0x28,0x42,0xDF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xBF,0x28,0x42,0x6F,0x08,0x42,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x42,0x60,0x28,0x42,0xBF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xDF,
    0x49,0x4A,0x20,0x00,0x00,0x00,0x28,0x42,0xBF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xEF,0x28,0x42,0x5F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x42,0x60,0x28,0x42,0xDF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xDF,0x00,0x00,0x00,0x49,0x4A,0x20,0x28,0x42,0xDF,0x28,0x42,0xFF,0x28,0x42,0xCF,0x49,0x4A,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x49,0x4A,0x20,0x49,0x4A,0x20,0x49,0x4A,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x42,0x10,0x28,0x42,0xAF,0x28,0x42,0xFF,0x28,0x42,0xEF,0x28,0x42,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x42,0x30,0x28,0x42,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x49,0x4A,0x40,0x28,0x42,0xAF,
    0x28,0x42,0xEF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xEF,0x28,0x42,0xBF,0x28,0x42,0x5F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x42,0x80,0x28,0x42,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x49,0x4A,0x40,0x28,0x42,0xDF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xDF,0x28,0x42,0x5F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x42,0x7F,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0x8F,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x42,0x30,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xEF,0x28,0x42,0x90,0x28,0x42,0x60,0x28,0x42,0x40,0x08,0x42,0x50,0x28,0x42,0x90,0x28,0x42,0xDF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0xFF,0x28,0x42,0x4F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x42,0x60,0x28,0x42,0xFF,0x28,0x42,0xEF,0x28,0x42,0x80,0x08,0x42,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x42,0x60,0x28,0x42,0xDF,0x28,0x42,0xFF,0x28,0x42,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x42,0x80,0x28,0x42,0x30,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x49,0x4A,0x20,0x28,0x42,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x20,0xFF,0xFF,0x40,0xFF,0xFF,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x20,0xFF,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xDF,0xFF,0xFF,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x70,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xAF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xA0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xA0,0xFF,0xFF,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xAF,0xFF,0xFF,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
const lv_img_dsc_t ui_img_wifi_1_png = {
    .header.always_zero = 0,
    .header.w = 26,
    .header.h = 19,
    .data_size = sizeof(ui_img_wifi_1_png_data),
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = ui_img_wifi_1_png_data
};

