
#ifndef __GAME_H__
#define __GAME_H__

#include <stdint.h>

extern volatile uint8_t pending_sound;
extern uint8_t level;

unsigned int get_score();               // Hàm lấy điểm số hiện tại
void reset_state();                     // Hàm reset trạng thái điểm và led
void press_button(uint8_t button);      // Hàm xử lý sự kiện nhấn button
void press_level_up_button();
void press_level_down_button();
void press_start_button();

#endif  