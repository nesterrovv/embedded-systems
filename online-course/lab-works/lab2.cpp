#include "hal.h"
#include <iostream>

int i = 0;

int leds_num[] = {GPIO_PIN_3, GPIO_PIN_4, GPIO_PIN_5,
                  GPIO_PIN_6, GPIO_PIN_8, GPIO_PIN_9,
                  GPIO_PIN_11, GPIO_PIN_12};


void clear_lights(){
    HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, leds_num[4], GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, leds_num[5], GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, leds_num[6], GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOD, leds_num[7], GPIO_PIN_RESET);
}


void TIM7_IRQ_HANDLER(){
    clear_lights();
    if (i == 0) {
        HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 1) {
        HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 2) {
        HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 3) {
        HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 4) {
        HAL_GPIO_WritePin(GPIOD, leds_num[4], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 5) {
        HAL_GPIO_WritePin(GPIOD, leds_num[5], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[4], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 6) {
        HAL_GPIO_WritePin(GPIOD, leds_num[6], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[5], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[4], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 7) {
        HAL_GPIO_WritePin(GPIOD, leds_num[7], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[6], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[5], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[4], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 8) {
        HAL_GPIO_WritePin(GPIOD, leds_num[7], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[6], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[5], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[4], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 9) {
        HAL_GPIO_WritePin(GPIOD, leds_num[7], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[6], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[5], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[4], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 10) {
        HAL_GPIO_WritePin(GPIOD, leds_num[7], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[6], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[5], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[4], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 11) {
        HAL_GPIO_WritePin(GPIOD, leds_num[7], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[6], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[5], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[4], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 12) {
        HAL_GPIO_WritePin(GPIOD, leds_num[7], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[6], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[5], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[4], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }
    if (i == 13) {
        HAL_GPIO_WritePin(GPIOD, leds_num[7], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[6], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[5], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[4], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[3], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[2], GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOD, leds_num[1], GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOD, leds_num[0], GPIO_PIN_SET);
    }

    i++;

    if (i == 14)
        i = 0;
}


int umain() {
    char switches_number[5] = "0000";
    int prev_delay = 500;
    int delay = 500;
    registerTIM7_IRQHandler(TIM7_IRQ_HANDLER);
    __enable_irq();

    WRITE_REG(TIM7_ARR, 500);
    WRITE_REG(TIM7_DIER, TIM_DIER_UIE);
    WRITE_REG(TIM7_PSC, 0);

    WRITE_REG(TIM7_CR1, 1);


    while (true) {

        switches_number[0] = HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4) == GPIO_PIN_RESET ? '0' : '1';
        switches_number[1] = HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_8) == GPIO_PIN_RESET ? '0' : '1';
        switches_number[2] = HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_10) == GPIO_PIN_RESET ? '0' : '1';
        switches_number[3] = HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_12) == GPIO_PIN_RESET ? '0' : '1';

        delay = 500 + 250 * strtol( switches_number, NULL, 2 );

        if (delay != prev_delay) {
            WRITE_REG(TIM7_CR1, 0);

            __disable_irq();
            WRITE_REG(TIM7_ARR, delay);
            WRITE_REG(TIM7_DIER, TIM_DIER_UIE);
            WRITE_REG(TIM7_PSC, 0);
            __enable_irq();

            WRITE_REG(TIM7_CR1, 1);
        }
        prev_delay = delay;
    }

    return 0;
}
