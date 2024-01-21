/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <hal_gpio.h>

// SAMD51 has 14 pin functions

#define GPIO_PIN_FUNCTION_A 0
#define GPIO_PIN_FUNCTION_B 1
#define GPIO_PIN_FUNCTION_C 2
#define GPIO_PIN_FUNCTION_D 3
#define GPIO_PIN_FUNCTION_E 4
#define GPIO_PIN_FUNCTION_F 5
#define GPIO_PIN_FUNCTION_G 6
#define GPIO_PIN_FUNCTION_H 7
#define GPIO_PIN_FUNCTION_I 8
#define GPIO_PIN_FUNCTION_J 9
#define GPIO_PIN_FUNCTION_K 10
#define GPIO_PIN_FUNCTION_L 11
#define GPIO_PIN_FUNCTION_M 12
#define GPIO_PIN_FUNCTION_N 13

#define DO0 GPIO(GPIO_PORTA, 2)
#define DO4 GPIO(GPIO_PORTA, 4)
#define DO5 GPIO(GPIO_PORTA, 6)
#define SCL GPIO(GPIO_PORTA, 12)
#define SDA GPIO(GPIO_PORTA, 13)
#define DO6 GPIO(GPIO_PORTA, 17)
#define DataN GPIO(GPIO_PORTA, 24)
#define DataP GPIO(GPIO_PORTA, 25)
#define DO1 GPIO(GPIO_PORTB, 5)
#define DO2 GPIO(GPIO_PORTB, 8)
#define DO3 GPIO(GPIO_PORTB, 9)
#define CMD_CLK GPIO(GPIO_PORTB, 22)
#define DO7 GPIO(GPIO_PORTB, 23)

#endif // ATMEL_START_PINS_H_INCLUDED
