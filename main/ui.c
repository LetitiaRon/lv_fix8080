// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: my_ui
#include "app_main.h"
#include "ui.h"
#include "ui_helpers.h"
int Switch_OF = 0;
///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Screen1;
lv_obj_t *ui_Panel6;
lv_obj_t *ui_Label8;
lv_obj_t *ui_Panel1;
lv_obj_t *ui_Button1;
lv_obj_t *ui_Button2;
lv_obj_t *ui_Button3;
lv_obj_t *ui_Button4;
lv_obj_t *ui_Data;
lv_obj_t *ui_Label5;
lv_obj_t *ui_Label6;
lv_obj_t *ui_Label7;
lv_obj_t *ui_Label9;
lv_obj_t *ui_Vot;
lv_obj_t *ui_Cur;
lv_obj_t *ui_Power;
lv_obj_t *ui_Res;
lv_obj_t *ui_Label10;
lv_obj_t *ui_Switch1;
lv_obj_t *ui_set;
lv_obj_t *ui_SentResi;
lv_obj_t *ui_Label11;
lv_obj_t *ui_Button5;
lv_obj_t *ui_Panel2;
lv_obj_t *ui_ResistanceInput;
lv_obj_t *ui_Label1;
lv_obj_t *ui_Keyboard4;
lv_obj_t *ui_vot;
lv_obj_t *ui_SentVot;
lv_obj_t *ui_Label12;
lv_obj_t *ui_Button6;
lv_obj_t *ui_Panel3;
lv_obj_t *ui_Label2;
lv_obj_t *ui_VotInput;
lv_obj_t *ui_Keyboard1;
lv_obj_t *ui_iot;
lv_obj_t *ui_SentIot;
lv_obj_t *ui_Label13;
lv_obj_t *ui_Button7;
lv_obj_t *ui_Panel4;
lv_obj_t *ui_Label3;
lv_obj_t *ui_CurInput;
lv_obj_t *ui_Keyboard2;
lv_obj_t *ui_power;
lv_obj_t *ui_SentPow;
lv_obj_t *ui_Label14;
lv_obj_t *ui_Button8;
lv_obj_t *ui_Panel5;
lv_obj_t *ui_Label4;
lv_obj_t *ui_PowerInput;
lv_obj_t *ui_Keyboard3;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 0
#error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

// ui_EloAnimation0
// FUNCTION HEADER
void FadeOn_Animation(lv_obj_t *TargetObject, int delay);

// FUNCTION
void FadeOn_Animation(lv_obj_t *TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 300);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_1, -40, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_1);
}

// ui_EloAnimation0
// FUNCTION HEADER
void FadeOn2_Animation(lv_obj_t *TargetObject, int delay);

// FUNCTION
void FadeOn2_Animation(lv_obj_t *TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 300);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_1, 40, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, true);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_1);
}

///////////////////// FUNCTIONS ////////////////////
static void ui_event_Button1(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_set, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 450, 0);
    }
    if (event == LV_EVENT_CLICKED)
    {
        sendData_NULL("1");/*进入设置恒阻模式*/
        FadeOn_Animation(ui_Panel2, 450);
        FadeOn_Animation(ui_Button5, 600);
        FadeOn_Animation(ui_SentResi, 650);
    }
}
static void ui_event_Button2(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        sendData_NULL("2");/*进入设置恒压模式*/
        _ui_screen_change(ui_vot, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 450, 0);
        FadeOn_Animation(ui_Panel3, 450);
        FadeOn_Animation(ui_Button6, 600);
        FadeOn_Animation(ui_SentVot, 650);
    }
}
static void ui_event_Button3(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        sendData_NULL("3");/*进入设置恒流模式*/
        _ui_screen_change(ui_iot, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 450, 0);
        FadeOn_Animation(ui_Panel4, 450);
        FadeOn_Animation(ui_Button7, 600);
        FadeOn_Animation(ui_SentIot, 650);
    }
}
static void ui_event_Button4(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        sendData_NULL("4");/*进入设置恒功率模式*/
        _ui_screen_change(ui_power, LV_SCR_LOAD_ANIM_MOVE_BOTTOM, 450, 0);
        FadeOn_Animation(ui_Panel5, 450);
        FadeOn_Animation(ui_Button8, 600);
        FadeOn_Animation(ui_SentPow, 650);
    }
}
static void ui_event_Switch1(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        Switch_OF += 1;
        if (Switch_OF == 2)
            Switch_OF = 0;
        switch (Switch_OF)
        {
        case 0:
            lv_label_set_text(ui_Label10, "OFF");
            sendData_NULL("OFF"); //发送关闭总开关指令
            break;
        case 1:
            lv_label_set_text(ui_Label10, "ON");
            sendData_NULL("ON"); //发送开启总开关指令
            break;
        default:
            break;
        }
    }
}
static void ui_event_SentResi(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_Keyboard4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        //sendData_NULL("Resis:");
        sendData_NULL(lv_textarea_get_text(ui_ResistanceInput)); //发送恒阻值
        if (ui_ResistanceInput != NULL)                          //文本框置空
        {
            lv_textarea_set_text(ui_ResistanceInput, "");
        }
    }
}
static void ui_event_Button5(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_TOP, 450, 0);
        FadeOn2_Animation(ui_Panel1, 450);
        FadeOn2_Animation(ui_Data, 550);
        FadeOn2_Animation(ui_Panel6, 650);
    }
}
static void ui_event_ResistanceInput(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_Keyboard4, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
}
static void ui_event_SentVot(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_Keyboard1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        //sendData_NULL("Vota:");
        sendData_NULL(lv_textarea_get_text(ui_VotInput)); //发送恒压值
        if (ui_VotInput != NULL)                          //文本框置空
        {
            lv_textarea_set_text(ui_VotInput, "");
        }
    }
}
static void ui_event_Button6(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_TOP, 450, 0);
        FadeOn2_Animation(ui_Panel1, 450);
        FadeOn2_Animation(ui_Data, 550);
        FadeOn2_Animation(ui_Panel6, 650);
    }
}
static void ui_event_VotInput(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_Keyboard1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
}
static void ui_event_SentIot(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_Keyboard2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        //sendData_NULL("Curr:");
        sendData_NULL(lv_textarea_get_text(ui_CurInput)); //发送恒流值
        if (ui_CurInput != NULL)                          //文本框置空
        {
            lv_textarea_set_text(ui_CurInput, "");
        }
    }
}
static void ui_event_Button7(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_TOP, 450, 0);
        FadeOn2_Animation(ui_Panel1, 450);
        FadeOn2_Animation(ui_Data, 550);
        FadeOn2_Animation(ui_Panel6, 650);
    }
}
static void ui_event_CurInput(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_Keyboard2, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
}
static void ui_event_SentPow(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_Keyboard3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        //sendData_NULL("Powe:");
        sendData_NULL(lv_textarea_get_text(ui_PowerInput)); //发送恒功率值
        if (ui_PowerInput != NULL)                          //文本框置空
        {
            lv_textarea_set_text(ui_PowerInput, "");
        }
    }
}
static void ui_event_Button8(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_Screen1, LV_SCR_LOAD_ANIM_MOVE_TOP, 450, 0);
        FadeOn2_Animation(ui_Panel1, 450);
        FadeOn2_Animation(ui_Data, 550);
        FadeOn2_Animation(ui_Panel6, 650);
    }
}
static void ui_event_PowerInput(lv_event_t *e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t *ta = lv_event_get_target(e);
    if (event == LV_EVENT_CLICKED)
    {
        _ui_flag_modify(ui_Keyboard3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen1_screen_init(void)
{

    // ui_Screen1

    ui_Screen1 = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_img_src(ui_Screen1, &ui_img_bg_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel6

    ui_Panel6 = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_Panel6, 495);
    lv_obj_set_height(ui_Panel6, 45);

    lv_obj_set_x(ui_Panel6, 1);
    lv_obj_set_y(ui_Panel6, -160);

    lv_obj_set_align(ui_Panel6, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_border_color(ui_Panel6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Panel6, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label8

    ui_Label8 = lv_label_create(ui_Panel6);

    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label8, 0);
    lv_obj_set_y(ui_Label8, 9);

    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label8, "Current");

    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0x611007), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel1

    ui_Panel1 = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_Panel1, 397);
    lv_obj_set_height(ui_Panel1, 56);

    lv_obj_set_x(ui_Panel1, 0);
    lv_obj_set_y(ui_Panel1, 100);

    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0xD5BAF9), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel1, lv_color_hex(0xE1BFFB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Panel1, lv_color_hex(0xF7A4E6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Panel1, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Panel1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button1

    ui_Button1 = lv_btn_create(ui_Panel1);

    lv_obj_set_width(ui_Button1, 40);
    lv_obj_set_height(ui_Button1, 40);

    lv_obj_set_x(ui_Button1, -150);
    lv_obj_set_y(ui_Button1, 0);

    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xFE9AD5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button1, &ui_img_set_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button1, lv_color_hex(0x9A49F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Button1, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Button1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Button1, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button2

    ui_Button2 = lv_btn_create(ui_Panel1);

    lv_obj_set_width(ui_Button2, 40);
    lv_obj_set_height(ui_Button2, 40);

    lv_obj_set_x(ui_Button2, -50);
    lv_obj_set_y(ui_Button2, 0);

    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0xF6A1DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button2, &ui_img_vot_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button2, lv_color_hex(0x9A49F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Button2, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Button2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Button2, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button3

    ui_Button3 = lv_btn_create(ui_Panel1);

    lv_obj_set_width(ui_Button3, 40);
    lv_obj_set_height(ui_Button3, 40);

    lv_obj_set_x(ui_Button3, 50);
    lv_obj_set_y(ui_Button3, 0);

    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0xF6A1DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button3, &ui_img_iot_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button3, lv_color_hex(0x9A49F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Button3, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Button3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Button3, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button4

    ui_Button4 = lv_btn_create(ui_Panel1);

    lv_obj_set_width(ui_Button4, 40);
    lv_obj_set_height(ui_Button4, 40);

    lv_obj_set_x(ui_Button4, 150);
    lv_obj_set_y(ui_Button4, 0);

    lv_obj_set_align(ui_Button4, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0xF6A1DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button4, &ui_img_power_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button4, lv_color_hex(0x9A49F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Button4, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Button4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Button4, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Data

    ui_Data = lv_obj_create(ui_Screen1);

    lv_obj_set_width(ui_Data, 317);
    lv_obj_set_height(ui_Data, 145);

    lv_obj_set_x(ui_Data, -3);
    lv_obj_set_y(ui_Data, -41);

    lv_obj_set_align(ui_Data, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Data, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Data, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Data, lv_color_hex(0xFFC6DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Data, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Data, lv_color_hex(0xF9B6F2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Data, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label5

    ui_Label5 = lv_label_create(ui_Data);

    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label5, -101);
    lv_obj_set_y(ui_Label5, -44);

    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label5, "Vot:");

    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label6

    ui_Label6 = lv_label_create(ui_Data);

    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label6, -103);
    lv_obj_set_y(ui_Label6, 2);

    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label6, "Cur:");

    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label7

    ui_Label7 = lv_label_create(ui_Data);

    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label7, -108);
    lv_obj_set_y(ui_Label7, 43);

    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label7, "Pow:");

    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label9

    ui_Label9 = lv_label_create(ui_Data);

    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label9, 46);
    lv_obj_set_y(ui_Label9, -44);

    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label9, "Res:");

    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Vot

    ui_Vot = lv_label_create(ui_Data);

    lv_obj_set_width(ui_Vot, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Vot, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Vot, -40);
    lv_obj_set_y(ui_Vot, -44);

    lv_obj_set_align(ui_Vot, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Vot, "12.5 V");

    lv_obj_set_style_text_font(ui_Vot, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Cur

    ui_Cur = lv_label_create(ui_Data);

    lv_obj_set_width(ui_Cur, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Cur, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Cur, -43);
    lv_obj_set_y(ui_Cur, 2);

    lv_obj_set_align(ui_Cur, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Cur, "5.5 A");

    lv_obj_set_style_text_font(ui_Cur, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Power

    ui_Power = lv_label_create(ui_Data);

    lv_obj_set_width(ui_Power, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Power, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Power, -33);
    lv_obj_set_y(ui_Power, 43);

    lv_obj_set_align(ui_Power, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Power, "50.5 W");

    lv_obj_set_style_text_font(ui_Power, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Res

    ui_Res = lv_label_create(ui_Data);

    lv_obj_set_width(ui_Res, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Res, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Res, 109);
    lv_obj_set_y(ui_Res, -44);

    lv_obj_set_align(ui_Res, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Res, "12.5KR");

    lv_obj_set_style_text_font(ui_Res, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label10

    ui_Label10 = lv_label_create(ui_Data);

    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label10, 51);
    lv_obj_set_y(ui_Label10, 42);

    lv_obj_set_align(ui_Label10, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label10, "OFF");

    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Switch1

    ui_Switch1 = lv_switch_create(ui_Screen1);

    lv_obj_set_width(ui_Switch1, 50);
    lv_obj_set_height(ui_Switch1, 25);

    lv_obj_set_x(ui_Switch1, 193);
    lv_obj_set_y(ui_Switch1, -76);

    lv_obj_set_align(ui_Switch1, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_Switch1, ui_event_Switch1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Switch1, lv_color_hex(0xFBB8B8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Switch1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
}
void ui_set_screen_init(void)
{

    // ui_set

    ui_set = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_set, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_img_src(ui_set, &ui_img_bg2_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SentResi

    ui_SentResi = lv_btn_create(ui_set);

    lv_obj_set_width(ui_SentResi, 50);
    lv_obj_set_height(ui_SentResi, 50);

    lv_obj_set_x(ui_SentResi, 191);
    lv_obj_set_y(ui_SentResi, -93);

    lv_obj_set_align(ui_SentResi, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_SentResi, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_SentResi, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_SentResi, ui_event_SentResi, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_SentResi, lv_color_hex(0xFFC6DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SentResi, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label11

    ui_Label11 = lv_label_create(ui_SentResi);

    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label11, 0);
    lv_obj_set_y(ui_Label11, 0);

    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label11, "OK");

    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button5

    ui_Button5 = lv_btn_create(ui_set);

    lv_obj_set_width(ui_Button5, 40);
    lv_obj_set_height(ui_Button5, 40);

    lv_obj_set_x(ui_Button5, -150);
    lv_obj_set_y(ui_Button5, 100);

    lv_obj_set_align(ui_Button5, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button5, ui_event_Button5, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button5, lv_color_hex(0xFE9AD5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button5, &ui_img_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button5, lv_color_hex(0x9A49F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Button5, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Button5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Button5, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel2

    ui_Panel2 = lv_obj_create(ui_set);

    lv_obj_set_width(ui_Panel2, 309);
    lv_obj_set_height(ui_Panel2, 65);

    lv_obj_set_x(ui_Panel2, 0);
    lv_obj_set_y(ui_Panel2, -93);

    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel2, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0xFFC7DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel2, lv_color_hex(0xFFC7DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Panel2, lv_color_hex(0xDE3010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Panel2, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Panel2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_ResistanceInput

    ui_ResistanceInput = lv_textarea_create(ui_Panel2);

    lv_obj_set_width(ui_ResistanceInput, 171);
    lv_obj_set_height(ui_ResistanceInput, 39);

    lv_obj_set_x(ui_ResistanceInput, 32);
    lv_obj_set_y(ui_ResistanceInput, -1);

    lv_obj_set_align(ui_ResistanceInput, LV_ALIGN_CENTER);

    // if ("" == "")
    //     lv_textarea_set_accepted_chars(ui_ResistanceInput, NULL);
    // else
    //     lv_textarea_set_accepted_chars(ui_ResistanceInput, "");

    lv_textarea_set_text(ui_ResistanceInput, "");
    lv_textarea_set_placeholder_text(ui_ResistanceInput, "Placeholder...");

    lv_obj_add_event_cb(ui_ResistanceInput, ui_event_ResistanceInput, LV_EVENT_ALL, NULL);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_Panel2);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, -106);
    lv_obj_set_y(ui_Label1, -2);

    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label1, "C-resis:");

    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x611007), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Keyboard4

    ui_Keyboard4 = lv_keyboard_create(ui_set);

    lv_keyboard_set_mode(ui_Keyboard4, LV_KEYBOARD_MODE_NUMBER);

    lv_obj_set_width(ui_Keyboard4, 481);
    lv_obj_set_height(ui_Keyboard4, 196);

    lv_obj_set_x(ui_Keyboard4, 0);
    lv_obj_set_y(ui_Keyboard4, 65);

    lv_obj_set_align(ui_Keyboard4, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Keyboard4, LV_OBJ_FLAG_HIDDEN);

    // POST CALLS
    lv_keyboard_set_textarea(ui_Keyboard4, ui_ResistanceInput);
}
void ui_vot_screen_init(void)
{

    // ui_vot

    ui_vot = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_vot, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_img_src(ui_vot, &ui_img_bg2_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SentVot

    ui_SentVot = lv_btn_create(ui_vot);

    lv_obj_set_width(ui_SentVot, 50);
    lv_obj_set_height(ui_SentVot, 50);

    lv_obj_set_x(ui_SentVot, 191);
    lv_obj_set_y(ui_SentVot, -93);

    lv_obj_set_align(ui_SentVot, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_SentVot, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_SentVot, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_SentVot, ui_event_SentVot, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_SentVot, lv_color_hex(0xFFC6DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SentVot, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label12

    ui_Label12 = lv_label_create(ui_SentVot);

    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label12, 0);
    lv_obj_set_y(ui_Label12, 0);

    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label12, "OK");

    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button6

    ui_Button6 = lv_btn_create(ui_vot);

    lv_obj_set_width(ui_Button6, 40);
    lv_obj_set_height(ui_Button6, 40);

    lv_obj_set_x(ui_Button6, -150);
    lv_obj_set_y(ui_Button6, 100);

    lv_obj_set_align(ui_Button6, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button6, ui_event_Button6, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button6, lv_color_hex(0xFE9AD5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button6, &ui_img_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button6, lv_color_hex(0x9A49F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Button6, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Button6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Button6, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel3

    ui_Panel3 = lv_obj_create(ui_vot);

    lv_obj_set_width(ui_Panel3, 309);
    lv_obj_set_height(ui_Panel3, 65);

    lv_obj_set_x(ui_Panel3, 0);
    lv_obj_set_y(ui_Panel3, -93);

    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel3, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0xFFC7DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel3, lv_color_hex(0xFFC7DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Panel3, lv_color_hex(0xDE3010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Panel3, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Panel3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label2

    ui_Label2 = lv_label_create(ui_Panel3);

    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label2, -107);
    lv_obj_set_y(ui_Label2, -4);

    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label2, "Voltage:");

    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0x611007), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_VotInput

    ui_VotInput = lv_textarea_create(ui_Panel3);

    lv_obj_set_width(ui_VotInput, 171);
    lv_obj_set_height(ui_VotInput, 39);

    lv_obj_set_x(ui_VotInput, 32);
    lv_obj_set_y(ui_VotInput, -1);

    lv_obj_set_align(ui_VotInput, LV_ALIGN_CENTER);

    // if ("" == "")
    //     lv_textarea_set_accepted_chars(ui_VotInput, NULL);
    // else
    //     lv_textarea_set_accepted_chars(ui_VotInput, "");

    lv_textarea_set_text(ui_VotInput, "");
    lv_textarea_set_placeholder_text(ui_VotInput, "Placeholder...");

    lv_obj_add_event_cb(ui_VotInput, ui_event_VotInput, LV_EVENT_ALL, NULL);

    // ui_Keyboard1

    ui_Keyboard1 = lv_keyboard_create(ui_vot);

    lv_keyboard_set_mode(ui_Keyboard1, LV_KEYBOARD_MODE_NUMBER);

    lv_obj_set_width(ui_Keyboard1, 481);
    lv_obj_set_height(ui_Keyboard1, 196);

    lv_obj_set_x(ui_Keyboard1, 0);
    lv_obj_set_y(ui_Keyboard1, 65);

    lv_obj_set_align(ui_Keyboard1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Keyboard1, LV_OBJ_FLAG_HIDDEN);

    // POST CALLS
    lv_keyboard_set_textarea(ui_Keyboard1, ui_VotInput);
}
void ui_iot_screen_init(void)
{

    // ui_iot

    ui_iot = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_iot, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_img_src(ui_iot, &ui_img_bg2_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SentIot

    ui_SentIot = lv_btn_create(ui_iot);

    lv_obj_set_width(ui_SentIot, 50);
    lv_obj_set_height(ui_SentIot, 50);

    lv_obj_set_x(ui_SentIot, 191);
    lv_obj_set_y(ui_SentIot, -93);

    lv_obj_set_align(ui_SentIot, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_SentIot, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_SentIot, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_SentIot, ui_event_SentIot, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_SentIot, lv_color_hex(0xFFC6DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SentIot, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label13

    ui_Label13 = lv_label_create(ui_SentIot);

    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label13, 0);
    lv_obj_set_y(ui_Label13, 0);

    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label13, "OK");

    lv_obj_set_style_text_color(ui_Label13, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button7

    ui_Button7 = lv_btn_create(ui_iot);

    lv_obj_set_width(ui_Button7, 40);
    lv_obj_set_height(ui_Button7, 40);

    lv_obj_set_x(ui_Button7, -150);
    lv_obj_set_y(ui_Button7, 100);

    lv_obj_set_align(ui_Button7, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button7, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button7, ui_event_Button7, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button7, lv_color_hex(0xFE9AD5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button7, &ui_img_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button7, lv_color_hex(0x9A49F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Button7, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Button7, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Button7, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel4

    ui_Panel4 = lv_obj_create(ui_iot);

    lv_obj_set_width(ui_Panel4, 309);
    lv_obj_set_height(ui_Panel4, 65);

    lv_obj_set_x(ui_Panel4, 0);
    lv_obj_set_y(ui_Panel4, -93);

    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel4, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel4, lv_color_hex(0xFFC7DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel4, lv_color_hex(0xFFC7DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Panel4, lv_color_hex(0xDE3010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Panel4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Panel4, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Panel4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label3

    ui_Label3 = lv_label_create(ui_Panel4);

    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label3, -102);
    lv_obj_set_y(ui_Label3, -3);

    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label3, "Current:");

    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0x611007), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_CurInput

    ui_CurInput = lv_textarea_create(ui_Panel4);

    lv_obj_set_width(ui_CurInput, 171);
    lv_obj_set_height(ui_CurInput, 39);

    lv_obj_set_x(ui_CurInput, 32);
    lv_obj_set_y(ui_CurInput, -1);

    lv_obj_set_align(ui_CurInput, LV_ALIGN_CENTER);

    // if ("" == "")
    //     lv_textarea_set_accepted_chars(ui_CurInput, NULL);
    // else
    //     lv_textarea_set_accepted_chars(ui_CurInput, "");

    lv_textarea_set_text(ui_CurInput, "");
    lv_textarea_set_placeholder_text(ui_CurInput, "Placeholder...");

    lv_obj_add_event_cb(ui_CurInput, ui_event_CurInput, LV_EVENT_ALL, NULL);

    // ui_Keyboard2

    ui_Keyboard2 = lv_keyboard_create(ui_iot);

    lv_keyboard_set_mode(ui_Keyboard2, LV_KEYBOARD_MODE_NUMBER);

    lv_obj_set_width(ui_Keyboard2, 481);
    lv_obj_set_height(ui_Keyboard2, 196);

    lv_obj_set_x(ui_Keyboard2, 0);
    lv_obj_set_y(ui_Keyboard2, 65);

    lv_obj_set_align(ui_Keyboard2, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Keyboard2, LV_OBJ_FLAG_HIDDEN);

    // POST CALLS
    lv_keyboard_set_textarea(ui_Keyboard2, ui_CurInput);
}
void ui_power_screen_init(void)
{

    // ui_power

    ui_power = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_power, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_img_src(ui_power, &ui_img_bg2_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_SentPow

    ui_SentPow = lv_btn_create(ui_power);

    lv_obj_set_width(ui_SentPow, 50);
    lv_obj_set_height(ui_SentPow, 50);

    lv_obj_set_x(ui_SentPow, 191);
    lv_obj_set_y(ui_SentPow, -93);

    lv_obj_set_align(ui_SentPow, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_SentPow, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_SentPow, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_SentPow, ui_event_SentPow, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_SentPow, lv_color_hex(0xFFC6DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SentPow, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label14

    ui_Label14 = lv_label_create(ui_SentPow);

    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label14, 0);
    lv_obj_set_y(ui_Label14, 0);

    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label14, "OK");

    lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Button8

    ui_Button8 = lv_btn_create(ui_power);

    lv_obj_set_width(ui_Button8, 40);
    lv_obj_set_height(ui_Button8, 40);

    lv_obj_set_x(ui_Button8, -150);
    lv_obj_set_y(ui_Button8, 100);

    lv_obj_set_align(ui_Button8, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Button8, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
    lv_obj_clear_flag(ui_Button8, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_Button8, ui_event_Button8, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Button8, lv_color_hex(0xFE9AD5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Button8, &ui_img_back_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Button8, lv_color_hex(0x9A49F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Button8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Button8, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Button8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_opa(ui_Button8, 200, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Panel5

    ui_Panel5 = lv_obj_create(ui_power);

    lv_obj_set_width(ui_Panel5, 309);
    lv_obj_set_height(ui_Panel5, 65);

    lv_obj_set_x(ui_Panel5, 0);
    lv_obj_set_y(ui_Panel5, -93);

    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);

    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_radius(ui_Panel5, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0xFFC7DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Panel5, lv_color_hex(0xFFC7DE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Panel5, lv_color_hex(0xDE3010), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Panel5, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Panel5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Label4

    ui_Label4 = lv_label_create(ui_Panel5);

    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label4, -103);
    lv_obj_set_y(ui_Label4, 0);

    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);

    lv_label_set_text(ui_Label4, "Power:");

    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x611007), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_PowerInput

    ui_PowerInput = lv_textarea_create(ui_Panel5);

    lv_obj_set_width(ui_PowerInput, 171);
    lv_obj_set_height(ui_PowerInput, 39);

    lv_obj_set_x(ui_PowerInput, 32);
    lv_obj_set_y(ui_PowerInput, -1);

    lv_obj_set_align(ui_PowerInput, LV_ALIGN_CENTER);

    // if ("" == "")
    //     lv_textarea_set_accepted_chars(ui_PowerInput, NULL);
    // else
    //     lv_textarea_set_accepted_chars(ui_PowerInput, "");

    lv_textarea_set_text(ui_PowerInput, "");
    lv_textarea_set_placeholder_text(ui_PowerInput, "Placeholder...");

    lv_obj_add_event_cb(ui_PowerInput, ui_event_PowerInput, LV_EVENT_ALL, NULL);

    // ui_Keyboard3

    ui_Keyboard3 = lv_keyboard_create(ui_power);

    lv_keyboard_set_mode(ui_Keyboard3, LV_KEYBOARD_MODE_NUMBER);

    lv_obj_set_width(ui_Keyboard3, 481);
    lv_obj_set_height(ui_Keyboard3, 196);

    lv_obj_set_x(ui_Keyboard3, 0);
    lv_obj_set_y(ui_Keyboard3, 65);

    lv_obj_set_align(ui_Keyboard3, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Keyboard3, LV_OBJ_FLAG_HIDDEN);

    // POST CALLS
    lv_keyboard_set_textarea(ui_Keyboard3, ui_PowerInput);
}

void ui_init(void)
{
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                              false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_set_screen_init();
    ui_vot_screen_init();
    ui_iot_screen_init();
    ui_power_screen_init();
    lv_disp_load_scr(ui_Screen1);
}
