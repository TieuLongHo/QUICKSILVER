#pragma once

#include "target.h"

#ifdef STM32F4
#define MOTOR_PIN_PA0 MOTOR_PIN(A, 0, GPIO_AF2_TIM5, TIM5, 1)
#define MOTOR_PIN_PA1 MOTOR_PIN(A, 1, GPIO_AF1_TIM2, TIM2, 2)
#define MOTOR_PIN_PA2 MOTOR_PIN(A, 2, GPIO_AF1_TIM2, TIM2, 3)
#define MOTOR_PIN_PA3 MOTOR_PIN(A, 3, GPIO_AF1_TIM2, TIM2, 4)
#define MOTOR_PIN_PA4 MOTOR_PIN(A, 4, GPIO_AF9_TIM14, TIM14, 1)

#define MOTOR_PIN_PA6 MOTOR_PIN(A, 6, GPIO_AF2_TIM3, TIM3, 1)
#define MOTOR_PIN_PA7 MOTOR_PIN(A, 7, GPIO_AF2_TIM3, TIM3, 2)
#define MOTOR_PIN_PA8 MOTOR_PIN(A, 8, GPIO_AF1_TIM1, TIM1, 1)
#define MOTOR_PIN_PA9 MOTOR_PIN(A, 9, GPIO_AF1_TIM1, TIM1, 2)
#define MOTOR_PIN_PA10 MOTOR_PIN(A, 10, GPIO_AF1_TIM1, TIM1, 3)

#define MOTOR_PIN_PB0 MOTOR_PIN(B, 0, GPIO_AF2_TIM3, TIM3, 3)
#define MOTOR_PIN_PB1 MOTOR_PIN(B, 1, GPIO_AF2_TIM3, TIM3, 4)

#define MOTOR_PIN_PB3 MOTOR_PIN(B, 3, GPIO_AF1_TIM2, TIM2, 2)
#define MOTOR_PIN_PB4 MOTOR_PIN(B, 4, GPIO_AF2_TIM3, TIM3, 1)
#define MOTOR_PIN_PB5 MOTOR_PIN(B, 5, GPIO_AF2_TIM3, TIM3, 2)
#define MOTOR_PIN_PB6 MOTOR_PIN(B, 6, GPIO_AF2_TIM4, TIM4, 1)
#define MOTOR_PIN_PB7 MOTOR_PIN(B, 7, GPIO_AF2_TIM4, TIM4, 2)
#define MOTOR_PIN_PB8 MOTOR_PIN(B, 8, GPIO_AF2_TIM4, TIM4, 3)
#define MOTOR_PIN_PB9 MOTOR_PIN(B, 9, GPIO_AF2_TIM4, TIM4, 4)
#define MOTOR_PIN_PB10 MOTOR_PIN(B, 10, GPIO_AF1_TIM2, TIM2, 3)
#define MOTOR_PIN_PB11 MOTOR_PIN(B, 11, GPIO_AF1_TIM2, TIM2, 4)

#define MOTOR_PIN_PC6 MOTOR_PIN(C, 6, GPIO_AF2_TIM3, TIM3, 1)
#define MOTOR_PIN_PC7 MOTOR_PIN(C, 7, GPIO_AF2_TIM3, TIM3, 2)
#define MOTOR_PIN_PC8 MOTOR_PIN(C, 8, GPIO_AF2_TIM3, TIM3, 3)
#define MOTOR_PIN_PC9 MOTOR_PIN(C, 9, GPIO_AF2_TIM3, TIM3, 4)
#endif

#ifdef STM32F7
#define MOTOR_PIN_PA0 MOTOR_PIN(A, 0, GPIO_AF2_TIM5, TIM5, 1)
#define MOTOR_PIN_PA1 MOTOR_PIN(A, 1, GPIO_AF1_TIM2, TIM2, 2)
#define MOTOR_PIN_PA2 MOTOR_PIN(A, 2, GPIO_AF1_TIM2, TIM2, 3)
#define MOTOR_PIN_PA3 MOTOR_PIN(A, 3, GPIO_AF1_TIM2, TIM2, 4)

#define MOTOR_PIN_PA8 MOTOR_PIN(A, 8, GPIO_AF1_TIM1, TIM1, 1)
#define MOTOR_PIN_PA9 MOTOR_PIN(A, 9, GPIO_AF1_TIM1, TIM1, 2)

#define MOTOR_PIN_PB0 MOTOR_PIN(B, 0, GPIO_AF2_TIM3, TIM3, 3)
#define MOTOR_PIN_PB1 MOTOR_PIN(B, 1, GPIO_AF2_TIM3, TIM3, 4)

#define MOTOR_PIN_PB3 MOTOR_PIN(B, 3, GPIO_AF1_TIM2, TIM2, 2)
#define MOTOR_PIN_PB4 MOTOR_PIN(B, 4, GPIO_AF2_TIM3, TIM3, 1)
#define MOTOR_PIN_PB5 MOTOR_PIN(B, 5, GPIO_AF2_TIM3, TIM3, 2)

#define MOTOR_PIN_PB6 MOTOR_PIN(B, 6, GPIO_AF2_TIM4, TIM4, 1)
#define MOTOR_PIN_PB7 MOTOR_PIN(B, 7, GPIO_AF2_TIM4, TIM4, 2)
#define MOTOR_PIN_PB8 MOTOR_PIN(B, 8, GPIO_AF2_TIM4, TIM4, 3)
#define MOTOR_PIN_PB9 MOTOR_PIN(B, 9, GPIO_AF2_TIM4, TIM4, 4)

#define MOTOR_PIN_PB14 MOTOR_PIN(B, 14, GPIO_AF9_TIM12, TIM12, 1)

#define MOTOR_PIN_PC6 MOTOR_PIN(C, 6, GPIO_AF2_TIM3, TIM3, 3)
#define MOTOR_PIN_PC7 MOTOR_PIN(C, 7, GPIO_AF2_TIM3, TIM3, 4)
#define MOTOR_PIN_PC8 MOTOR_PIN(C, 8, GPIO_AF2_TIM3, TIM3, 3)
#define MOTOR_PIN_PC9 MOTOR_PIN(C, 9, GPIO_AF2_TIM3, TIM3, 4)

#define MOTOR_PIN_PE9 MOTOR_PIN(E, 9, GPIO_AF1_TIM1, TIM1, 1)
#define MOTOR_PIN_PE11 MOTOR_PIN(E, 11, GPIO_AF1_TIM1, TIM1, 2)
#endif

#ifdef STM32H7
#define MOTOR_PIN_PA0 MOTOR_PIN(A, 0, GPIO_AF2_TIM5, TIM5, 1)
#define MOTOR_PIN_PA1 MOTOR_PIN(A, 1, GPIO_AF1_TIM2, TIM2, 2)

#define MOTOR_PIN_PB0 MOTOR_PIN(B, 0, GPIO_AF2_TIM3, TIM3, 3)
#define MOTOR_PIN_PB1 MOTOR_PIN(B, 1, GPIO_AF2_TIM3, TIM3, 4)

#define MOTOR_PIN_PB3 MOTOR_PIN(B, 3, GPIO_AF1_TIM2, TIM2, 2)
#define MOTOR_PIN_PB4 MOTOR_PIN(B, 4, GPIO_AF2_TIM3, TIM3, 1)
#define MOTOR_PIN_PB5 MOTOR_PIN(B, 5, GPIO_AF2_TIM3, TIM3, 2)
#define MOTOR_PIN_PB10 MOTOR_PIN(B, 10, GPIO_AF2_TIM4, TIM4, 4)

#define MOTOR_PIN_PE9 MOTOR_PIN(E, 9, GPIO_AF1_TIM1, TIM1, 1)
#define MOTOR_PIN_PE11 MOTOR_PIN(E, 11, GPIO_AF1_TIM1, TIM1, 2)
#endif

#define MOTOR_PINS \
  MOTOR_PIN0       \
  MOTOR_PIN1       \
  MOTOR_PIN2       \
  MOTOR_PIN3

#define MOTOR_PIN_IDENT(port, pin) MOTOR_P##port##pin
#define MOTOR_PIN(port, pin, pin_af, timer, timer_channel) MOTOR_PIN_IDENT(port, pin),

typedef enum {
  MOTOR_PINS
      MOTOR_PIN_MAX
} motor_pin_ident_t;

#undef MOTOR_PIN
