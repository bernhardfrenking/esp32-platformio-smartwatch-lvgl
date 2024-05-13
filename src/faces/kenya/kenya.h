
// File generated by bin2lvgl
// developed by fbiego. 
// https://github.com/fbiego
// Watchface: KENYA

#ifndef _FACE_KENYA_H
#define _FACE_KENYA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "lvgl.h"
#include "app_hal.h"

//#define ENABLE_FACE_KENYA // (Kenya) uncomment to enable or define it elsewhere

#ifdef ENABLE_FACE_KENYA
    extern lv_obj_t *face_kenya;
	extern lv_obj_t *face_kenya_0_264;
	extern lv_obj_t *face_kenya_1_58372;
	extern lv_obj_t *face_kenya_2_58391;
	extern lv_obj_t *face_kenya_3_58391;
	extern lv_obj_t *face_kenya_4_58391;
	extern lv_obj_t *face_kenya_5_58391;
	extern lv_obj_t *face_kenya_7_60782;
	extern lv_obj_t *face_kenya_8_60782;
	extern lv_obj_t *face_kenya_9_60782;
	extern lv_obj_t *face_kenya_10_60782;
	extern lv_obj_t *face_kenya_12_85153;


	LV_IMG_DECLARE(face_kenya_dial_img_0_264_0);
	LV_IMG_DECLARE(face_kenya_dial_img_1_58372_0);
	LV_IMG_DECLARE(face_kenya_dial_img_2_58391_0);
	LV_IMG_DECLARE(face_kenya_dial_img_2_58391_1);
	LV_IMG_DECLARE(face_kenya_dial_img_2_58391_2);
	LV_IMG_DECLARE(face_kenya_dial_img_2_58391_3);
	LV_IMG_DECLARE(face_kenya_dial_img_2_58391_4);
	LV_IMG_DECLARE(face_kenya_dial_img_2_58391_5);
	LV_IMG_DECLARE(face_kenya_dial_img_2_58391_6);
	LV_IMG_DECLARE(face_kenya_dial_img_2_58391_7);
	LV_IMG_DECLARE(face_kenya_dial_img_2_58391_8);
	LV_IMG_DECLARE(face_kenya_dial_img_2_58391_9);
	LV_IMG_DECLARE(face_kenya_dial_img_7_60782_0);
	LV_IMG_DECLARE(face_kenya_dial_img_7_60782_1);
	LV_IMG_DECLARE(face_kenya_dial_img_7_60782_2);
	LV_IMG_DECLARE(face_kenya_dial_img_7_60782_3);
	LV_IMG_DECLARE(face_kenya_dial_img_7_60782_4);
	LV_IMG_DECLARE(face_kenya_dial_img_7_60782_5);
	LV_IMG_DECLARE(face_kenya_dial_img_7_60782_6);
	LV_IMG_DECLARE(face_kenya_dial_img_7_60782_7);
	LV_IMG_DECLARE(face_kenya_dial_img_7_60782_8);
	LV_IMG_DECLARE(face_kenya_dial_img_7_60782_9);
	LV_IMG_DECLARE(face_kenya_dial_img_11_80954_0);
	LV_IMG_DECLARE(face_kenya_dial_img_11_80954_1);
	LV_IMG_DECLARE(face_kenya_dial_img_11_80954_2);
	LV_IMG_DECLARE(face_kenya_dial_img_11_80954_3);
	LV_IMG_DECLARE(face_kenya_dial_img_11_80954_4);
	LV_IMG_DECLARE(face_kenya_dial_img_11_80954_5);
	LV_IMG_DECLARE(face_kenya_dial_img_11_80954_6);
	LV_IMG_DECLARE(face_kenya_dial_img_12_85153_0);
	LV_IMG_DECLARE(face_kenya_dial_img_12_85153_1);
	LV_IMG_DECLARE(face_kenya_dial_img_12_85153_2);
	LV_IMG_DECLARE(face_kenya_dial_img_12_85153_3);
	LV_IMG_DECLARE(face_kenya_dial_img_12_85153_4);
	LV_IMG_DECLARE(face_kenya_dial_img_12_85153_5);
	LV_IMG_DECLARE(face_kenya_dial_img_12_85153_6);
	LV_IMG_DECLARE(face_kenya_dial_img_preview_0);


#endif
    void onFaceEvent(lv_event_t * e);

    void init_face_kenya(void (*callback)(const char*, const lv_img_dsc_t *, lv_obj_t **));
    void update_time_kenya(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday);
    void update_weather_kenya(int temp, int icon);
    void update_status_kenya(int battery, bool connection);
    void update_activity_kenya(int steps, int distance, int kcal);
    void update_health_kenya(int bpm, int oxygen);
    void update_all_kenya(int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
                int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen);
    void update_check_kenya(lv_obj_t *root, int second, int minute, int hour, bool mode, bool am, int day, int month, int year, int weekday, 
                int temp, int icon, int battery, bool connection, int steps, int distance, int kcal, int bpm, int oxygen);


#ifdef __cplusplus
}
#endif

#endif