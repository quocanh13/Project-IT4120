
#ifndef __BUTTON_H__
#define __BUTTON_H__

#include "main.h"
#include "stdint.h"

#define BUTTON_PORT GPIOD
#define BUTTON_1 GPIO_PIN_2
#define BUTTON_2 GPIO_PIN_3
#define BUTTON_3 GPIO_PIN_4
#define BUTTON_4 GPIO_PIN_5
#define BUTTON_5 GPIO_PIN_6
#define BUTTON_6 GPIO_PIN_7

#define LEVEL_UP_BUTTON GPIO_PIN_0
#define LEVEL_DOWN_BUTTON GPIO_PIN_1
#define START_BUTTON GPIO_PIN_9

void handle_press_button(uint16_t pin);

#endif