// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: vision_v2_wifi

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image1, &ui_img_1274458812);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 480
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 480
    lv_obj_set_x(ui_Image1, 0);
    lv_obj_set_y(ui_Image1, 90);
    lv_obj_set_align(ui_Image1, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_Image1, 60);

    ui_Label1 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, 0);
    lv_obj_set_y(ui_Label1, 45);
    lv_obj_set_align(ui_Label1, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Label1, "Vision Face");
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

}
