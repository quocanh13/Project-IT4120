#include "led.h"

const uint16_t LED[] = {LED_1, LED_2, LED_3, LED_4, LED_5, LED_6};
uint32_t prev_time = 0;

void set_led(uint8_t led_index, uint8_t state){
    if (state)
        HAL_GPIO_WritePin(LED_PORT, LED[led_index], GPIO_PIN_SET);
    else
        HAL_GPIO_WritePin(LED_PORT, LED[led_index], GPIO_PIN_RESET);
}

void turn_off_all_leds(void)
{
    for (int i = 0; i < 6; i++)
    {
        HAL_GPIO_WritePin(LED_PORT, LED[i], GPIO_PIN_RESET);
    }
}

uint8_t get_led(uint8_t led_index){
    return HAL_GPIO_ReadPin(LED_PORT, LED[led_index]);
}

uint8_t random_position(){
    uint32_t seed;
    seed ^= HAL_GetTick();
    uint8_t index = (seed >> 16) % 6;
    return index;
}

void random_led(){
    uint8_t index = random_position();
    set_led(index, 1);
}

void next_random_led(){
    uint32_t cur_time = HAL_GetTick();
    if(cur_time - prev_time > 2000){
        for(int i = 0; i < 3; i++)
        random_led();
    }
    prev_time = cur_time;
}