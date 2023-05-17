// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: ASIS

#include "../ui.h"

void ui_screen_ha_data_screen_init(void)
{
ui_screen_ha_data = lv_obj_create(NULL);
lv_obj_clear_flag( ui_screen_ha_data, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_screen_ha_data, lv_color_hex(0x1C1C1C), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_screen_ha_data, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ha_data_wifi_st = lv_img_create(ui_screen_ha_data);
lv_img_set_src(ui_ha_data_wifi_st, &ui_img_wifi_disconet_png);
lv_obj_set_width( ui_ha_data_wifi_st, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ha_data_wifi_st, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ha_data_wifi_st, -20 );
lv_obj_set_y( ui_ha_data_wifi_st, 20 );
lv_obj_set_align( ui_ha_data_wifi_st, LV_ALIGN_TOP_RIGHT );
lv_obj_add_flag( ui_ha_data_wifi_st, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_ha_data_wifi_st, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_add_flag( ui_ha_data_wifi_st, LV_OBJ_FLAG_CLICKABLE );    /// Flags

ui_ha_data_time = lv_label_create(ui_screen_ha_data);
lv_obj_set_width( ui_ha_data_time, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ha_data_time, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ha_data_time, 30 );
lv_obj_set_y( ui_ha_data_time, 20 );
lv_label_set_text(ui_ha_data_time,"21:20");
lv_obj_set_style_text_font(ui_ha_data_time, &ui_font_font1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_screen_home_data_label = lv_label_create(ui_screen_ha_data);
lv_obj_set_width( ui_screen_home_data_label, 316);
lv_obj_set_height( ui_screen_home_data_label, 38);
lv_obj_set_x( ui_screen_home_data_label, 82 );
lv_obj_set_y( ui_screen_home_data_label, 58 );
lv_label_set_text(ui_screen_home_data_label,"Home Assistant Data");
lv_obj_set_style_text_color(ui_screen_home_data_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_screen_home_data_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_screen_home_data_label, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_screen_home_data_label, &ui_font_font0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor1_btn = lv_btn_create(ui_screen_ha_data);
lv_obj_set_width( ui_sensor1_btn, 214);
lv_obj_set_height( ui_sensor1_btn, 164);
lv_obj_set_x( ui_sensor1_btn, 22 );
lv_obj_set_y( ui_sensor1_btn, 96 );
lv_obj_add_flag( ui_sensor1_btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_sensor1_btn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_sensor1_btn, 12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_sensor1_btn, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_sensor1_btn, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor1_logo = lv_img_create(ui_sensor1_btn);
lv_img_set_src(ui_sensor1_logo, &ui_img_ic_temp_png);
lv_obj_set_width( ui_sensor1_logo, LV_SIZE_CONTENT);  /// 45
lv_obj_set_height( ui_sensor1_logo, LV_SIZE_CONTENT);   /// 45
lv_obj_set_x( ui_sensor1_logo, 69 );
lv_obj_set_y( ui_sensor1_logo, 22 );
lv_obj_add_flag( ui_sensor1_logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_sensor1_logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_sensor1_label = lv_label_create(ui_sensor1_btn);
lv_obj_set_width( ui_sensor1_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_sensor1_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_sensor1_label, 0 );
lv_obj_set_y( ui_sensor1_label, -5 );
lv_obj_set_align( ui_sensor1_label, LV_ALIGN_BOTTOM_MID );
lv_label_set_text(ui_sensor1_label, CONFIG_SENSOR1_UI_NAME);
lv_obj_set_style_text_color(ui_sensor1_label, lv_color_hex(0x9E9E9E), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor1_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor1_label, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor1_data = lv_label_create(ui_sensor1_btn);
lv_obj_set_width( ui_sensor1_data, 100);
lv_obj_set_height( ui_sensor1_data, LV_SIZE_CONTENT);   /// 2
lv_obj_set_x( ui_sensor1_data, 11 );
lv_obj_set_y( ui_sensor1_data, 79 );
lv_label_set_text(ui_sensor1_data,"N/A");
lv_obj_set_style_text_color(ui_sensor1_data, lv_color_hex(0xECBF41), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor1_data, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_sensor1_data, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor1_data, &lv_font_montserrat_26, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor1_unit = lv_label_create(ui_sensor1_btn);
lv_obj_set_width( ui_sensor1_unit, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_sensor1_unit, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_sensor1_unit, 125 );
lv_obj_set_y( ui_sensor1_unit, 82 );
lv_label_set_text(ui_sensor1_unit,CONFIG_SENSOR1_UI_UNIT);
lv_obj_set_style_text_color(ui_sensor1_unit, lv_color_hex(0xECBF41), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor1_unit, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor1_unit, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor2_btn = lv_btn_create(ui_screen_ha_data);
lv_obj_set_width( ui_sensor2_btn, 214);
lv_obj_set_height( ui_sensor2_btn, 164);
lv_obj_set_x( ui_sensor2_btn, 244 );
lv_obj_set_y( ui_sensor2_btn, 96 );
lv_obj_add_flag( ui_sensor2_btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_sensor2_btn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_sensor2_btn, 12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_sensor2_btn, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_sensor2_btn, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor2_logo = lv_img_create(ui_sensor2_btn);
lv_img_set_src(ui_sensor2_logo, &ui_img_ic_hum_png);
lv_obj_set_width( ui_sensor2_logo, LV_SIZE_CONTENT);  /// 45
lv_obj_set_height( ui_sensor2_logo, LV_SIZE_CONTENT);   /// 45
lv_obj_set_x( ui_sensor2_logo, 69 );
lv_obj_set_y( ui_sensor2_logo, 22 );
lv_obj_add_flag( ui_sensor2_logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_sensor2_logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_sensor2_label = lv_label_create(ui_sensor2_btn);
lv_obj_set_width( ui_sensor2_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_sensor2_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_sensor2_label, 0 );
lv_obj_set_y( ui_sensor2_label, -5 );
lv_obj_set_align( ui_sensor2_label, LV_ALIGN_BOTTOM_MID );
lv_label_set_text(ui_sensor2_label, CONFIG_SENSOR2_UI_NAME);
lv_obj_set_style_text_color(ui_sensor2_label, lv_color_hex(0x9E9E9E), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor2_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor2_label, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor2_data = lv_label_create(ui_sensor2_btn);
lv_obj_set_width( ui_sensor2_data, 100);
lv_obj_set_height( ui_sensor2_data, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_sensor2_data, 16 );
lv_obj_set_y( ui_sensor2_data, 83 );
lv_label_set_text(ui_sensor2_data,"N/A");
lv_obj_set_style_text_color(ui_sensor2_data, lv_color_hex(0x52AAE5), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor2_data, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_sensor2_data, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor2_data, &ui_font_font2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor2_unit = lv_label_create(ui_sensor2_btn);
lv_obj_set_width( ui_sensor2_unit, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_sensor2_unit, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_sensor2_unit, 125 );
lv_obj_set_y( ui_sensor2_unit, 82 );
lv_label_set_text(ui_sensor2_unit, CONFIG_SENSOR2_UI_UNIT);
lv_obj_set_style_text_color(ui_sensor2_unit, lv_color_hex(0x52AAE5), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor2_unit, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor2_unit, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor3_btn = lv_btn_create(ui_screen_ha_data);
lv_obj_set_width( ui_sensor3_btn, 214);
lv_obj_set_height( ui_sensor3_btn, 164);
lv_obj_set_x( ui_sensor3_btn, 22 );
lv_obj_set_y( ui_sensor3_btn, 268 );
lv_obj_add_flag( ui_sensor3_btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_sensor3_btn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_sensor3_btn, 12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_sensor3_btn, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_sensor3_btn, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor3_logo = lv_img_create(ui_sensor3_btn);
lv_img_set_src(ui_sensor3_logo, &ui_img_ic_tvoc_png);
lv_obj_set_width( ui_sensor3_logo, LV_SIZE_CONTENT);  /// 45
lv_obj_set_height( ui_sensor3_logo, LV_SIZE_CONTENT);   /// 45
lv_obj_set_x( ui_sensor3_logo, 69 );
lv_obj_set_y( ui_sensor3_logo, 22 );
lv_obj_add_flag( ui_sensor3_logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_sensor3_logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_sensor3_label = lv_label_create(ui_sensor3_btn);
lv_obj_set_width( ui_sensor3_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_sensor3_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_sensor3_label, 0 );
lv_obj_set_y( ui_sensor3_label, -5 );
lv_obj_set_align( ui_sensor3_label, LV_ALIGN_BOTTOM_MID );
lv_label_set_text(ui_sensor3_label, CONFIG_SENSOR3_UI_NAME);
lv_obj_set_style_text_color(ui_sensor3_label, lv_color_hex(0x9E9E9E), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor3_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor3_label, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor3_data = lv_label_create(ui_sensor3_btn);
lv_obj_set_width( ui_sensor3_data, 100);
lv_obj_set_height( ui_sensor3_data, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_sensor3_data, 11 );
lv_obj_set_y( ui_sensor3_data, 83 );
lv_label_set_text(ui_sensor3_data,"N/A");
lv_obj_set_style_text_color(ui_sensor3_data, lv_color_hex(0xD76D46), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor3_data, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_sensor3_data, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor3_data, &ui_font_font2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor3_unit = lv_label_create(ui_sensor3_btn);
lv_obj_set_width( ui_sensor3_unit, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_sensor3_unit, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_sensor3_unit, 117 );
lv_obj_set_y( ui_sensor3_unit, 82 );
lv_label_set_text(ui_sensor3_unit, CONFIG_SENSOR3_UI_UNIT);
lv_label_set_recolor(ui_sensor3_unit,"true");
lv_obj_set_style_text_color(ui_sensor3_unit, lv_color_hex(0xD76D46), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor3_unit, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor3_unit, &lv_font_montserrat_22, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor4_btn = lv_btn_create(ui_screen_ha_data);
lv_obj_set_width( ui_sensor4_btn, 214);
lv_obj_set_height( ui_sensor4_btn, 164);
lv_obj_set_x( ui_sensor4_btn, 244 );
lv_obj_set_y( ui_sensor4_btn, 268 );
lv_obj_add_flag( ui_sensor4_btn, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_sensor4_btn, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_sensor4_btn, 12, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_sensor4_btn, lv_color_hex(0x282828), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_sensor4_btn, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor4_logo = lv_img_create(ui_sensor4_btn);
lv_img_set_src(ui_sensor4_logo, &ui_img_ic_co2_png);
lv_obj_set_width( ui_sensor4_logo, LV_SIZE_CONTENT);  /// 45
lv_obj_set_height( ui_sensor4_logo, LV_SIZE_CONTENT);   /// 45
lv_obj_set_x( ui_sensor4_logo, 69 );
lv_obj_set_y( ui_sensor4_logo, 22 );
lv_obj_add_flag( ui_sensor4_logo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_sensor4_logo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_sensor4_label = lv_label_create(ui_sensor4_btn);
lv_obj_set_width( ui_sensor4_label, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_sensor4_label, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_sensor4_label, 0 );
lv_obj_set_y( ui_sensor4_label, -5 );
lv_obj_set_align( ui_sensor4_label, LV_ALIGN_BOTTOM_MID );
lv_label_set_text(ui_sensor4_label, CONFIG_SENSOR4_UI_NAME);
lv_obj_set_style_text_color(ui_sensor4_label, lv_color_hex(0x9E9E9E), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor4_label, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor4_label, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor4_data = lv_label_create(ui_sensor4_btn);
lv_obj_set_width( ui_sensor4_data, 100);
lv_obj_set_height( ui_sensor4_data, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_sensor4_data, 13 );
lv_obj_set_y( ui_sensor4_data, 84 );
lv_label_set_text(ui_sensor4_data,"N/A");
lv_obj_set_style_text_color(ui_sensor4_data, lv_color_hex(0x4F9E52), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor4_data, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_sensor4_data, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor4_data, &ui_font_font2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_sensor4_unit = lv_label_create(ui_sensor4_btn);
lv_obj_set_width( ui_sensor4_unit, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_sensor4_unit, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_sensor4_unit, 119 );
lv_obj_set_y( ui_sensor4_unit, 80 );
lv_label_set_text(ui_sensor4_unit,CONFIG_SENSOR4_UI_UNIT);
lv_obj_set_style_text_color(ui_sensor4_unit, lv_color_hex(0x4F9E52), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_sensor4_unit, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_sensor4_unit, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

}
