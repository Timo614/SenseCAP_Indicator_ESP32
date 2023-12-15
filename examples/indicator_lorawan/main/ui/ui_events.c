// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.3
// Project name: indicator_lorawan

#include "ui.h"

lv_obj_t *g_prev_scr = NULL;

void fn_save_pre_screen(lv_event_t *e)
{
    g_prev_scr = lv_event_get_target(e);
}

void Back2PreScreen(lv_event_t *e)
{
    if (g_prev_scr == NULL) {
        printf("no previous screen\n");
        return;
    }
    // any screen change anim
    _ui_screen_change(&g_prev_scr, LV_SCR_LOAD_ANIM_NONE, 0, 0, NULL);
}

int NumCheck(lv_event_t *e)
{
    lv_obj_t *textarea = lv_event_get_target(e);
    // Get the text from the text area
    const char *text   = lv_textarea_get_text(textarea);
    int         num    = atoi(text);

    // Check if the conversion was successful
    if (num == 0 && strcmp(text, "0") != 0) {
        printf("Cannot convert to number\n");
        lv_textarea_set_text(textarea, "1"); // 重置为默认值
        return -1;
    }
    return num;
}

void UpdateNumInterval(bool increase)
{
    lv_event_t pre_coded = {
        .target = ui_NumInterval,
    };
    int num = NumCheck(&pre_coded);
    if (num == -1)
        return;

    if (increase) {
        num++;
    } else {
        if (num > 1)
            num--;
    }

    char str[12];
    sprintf(str, "%d", num);
    lv_textarea_set_text(ui_NumInterval, str);
}
void NumIntervalDefocused(lv_event_t *e)
{
    NumCheck(e);
}

void BtnPlusDecreaseNum(lv_event_t *e)
{
    UpdateNumInterval(false);
}

void BtnPlusIncreaseNum(lv_event_t *e)
{
    UpdateNumInterval(true);
}


void btn_clicked_sensor_charts_event(lv_event_t *e)
{
    // Your code here
}

void TabviewChanged(lv_event_t *e)
{
    // Your code here
}

void save_timesetting(lv_event_t *e)
{
    // struct view_data_time_cfg cfg;
    // char                      buf[32];
    // lv_dropdown_get_selected_str(ui_time_format_cfg1, buf, sizeof(buf));
    // if (strcmp(buf, "12H") == 0) {
    //     cfg.time_format_24 = false;
    // } else {
    //     cfg.time_format_24 = true;
    // }

    // if (lv_obj_has_state(ui_auto_update_cfg1, LV_STATE_CHECKED)) {
    //     cfg.auto_update = true;
    // } else {
    //     cfg.auto_update = false;
    //     struct tm tm;
    //     memset(&tm, 0, sizeof(struct tm));

    //     tm.tm_year = _g_date_cfg.year > 1900 ? (_g_date_cfg.year - 1900) : 0;
    //     tm.tm_mon  = _g_date_cfg.month - 1; // todo
    //     tm.tm_mday = _g_date_cfg.day;

    //     lv_roller_get_selected_str(ui_hour_cfg1, buf, sizeof(buf));
    //     // ESP_LOGI( TAG,"hour: %s\n", buf);
    //     tm.tm_hour = atoi(buf);

    //     lv_roller_get_selected_str(ui_min_cfg1, buf, sizeof(buf));
    //     // ESP_LOGI( TAG,"min: %s\n", buf);
    //     tm.tm_min = atoi(buf);

    //     lv_roller_get_selected_str(ui_sec_cfg2, buf, sizeof(buf));
    //     // ESP_LOGI( TAG,"sec: %s\n", buf);
    //     tm.tm_sec = atoi(buf);

    //     cfg.time  = mktime(&tm);

    // cfg.set_time = set_time;

    // zone
    // int8_t zone;
    // if (lv_obj_has_state(ui_zone_auto_update_cfg, LV_STATE_CHECKED)) {
    //     cfg.auto_update_zone = true;
    // } else {
    //     cfg.auto_update_zone = false;
    // }

    // lv_dropdown_get_selected_str(ui_time_zone_sign_cfg_, buf, sizeof(buf));
    // if (strcmp(buf, "-") == 0) {
    //     lv_dropdown_get_selected_str(ui_time_zone_num_cfg, buf, sizeof(buf));
    //     zone = 0 - atoi(buf);
    // } else {
    //     lv_dropdown_get_selected_str(ui_time_zone_num_cfg, buf, sizeof(buf));
    //     zone = atoi(buf);
    // }
    // cfg.zone = zone;

    // if (lv_obj_has_state(ui_daylight_cfg, LV_STATE_CHECKED)) {
    //     cfg.daylight = true;
    // } else {
    //     cfg.daylight = false;
    // }
    // }
    // esp_event_post_to(view_event_handle, VIEW_EVENT_BASE, VIEW_EVENT_TIME_CFG_UPDATE, &cfg, sizeof(cfg), portMAX_DELAY);
}