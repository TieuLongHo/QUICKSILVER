
#include "config.h"
#include "config_helper.h"

#define IFLIGHT_SUCCEX_E_F4

//PORTS
#define SPI_PORTS   \
  SPI1_PA5PA6PA7    \
  SPI2_PB13PB14PB15 \
  SPI3_PC10PC11PC12

#define USART_PORTS \
  USART1_PA10PA9    \
  USART2_PA3PA2     \
  USART4_PA1PA0     \
  USART6_PC7PC6

//LEDS
#define LED_NUMBER 1
#define LED1PIN PIN_B5

#define BUZZER_PIN PIN_B4

//GYRO
#define GYRO_TYPE MPU6XXX
#define GYRO_SPI_PORT SPI_PORT1
#define GYRO_NSS PIN_A4
// #define GYRO_INT
#define SENSOR_ROTATE_90_CCW
#define GYRO_ID_1 0x68
#define GYRO_ID_2 0x73
#define GYRO_ID_3 0x78
#define GYRO_ID_4 0x71

//RADIO
#define RX_USART USART_PORT2

// OSD
#define ENABLE_OSD
#define MAX7456_SPI_PORT SPI_PORT2
#define MAX7456_NSS PIN_B12

//VOLTAGE DIVIDER
#define BATTERYPIN PIN_C2
#define BATTERY_ADC_CHANNEL LL_ADC_CHANNEL_12

#define VOLTAGE_DIVIDER_R1 10000

#define VOLTAGE_DIVIDER_R2 1000

// MOTOR PINS
#define MOTOR_PIN0 MOTOR_PIN_PB0
#define MOTOR_PIN1 MOTOR_PIN_PB1
#define MOTOR_PIN2 MOTOR_PIN_PC9
#define MOTOR_PIN3 MOTOR_PIN_PC8
