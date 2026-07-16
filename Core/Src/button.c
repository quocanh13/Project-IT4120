#include "button.h"
#include "game.h"

const uint16_t BUTTON[] = {BUTTON_1, BUTTON_2, BUTTON_3, BUTTON_4, BUTTON_5, BUTTON_6};

void handle_press_button(uint16_t pin){
    for(int i = 0; i < 6; i++){
        if(!(BUTTON[i] == pin)) continue;
        press_button(i);
    }

    if(pin == LEVEL_UP_BUTTON)
        press_level_up_button();
    if(pin == LEVEL_DOWN_BUTTON)
        press_level_down_button();
    if(pin == START_BUTTON)
        press_start_button();
}

