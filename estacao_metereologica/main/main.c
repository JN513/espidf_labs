/*
 * SPDX-FileCopyrightText: 2010-2022 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: CC0-1.0
 */

#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_system.h"
#include "drivers/gpio.h"
#include "sht4x.h"
#include "esp_err.h"

#define ANEN_PIN GPIO_NUM_1
#define PLUV_PIN GPIO_NUM_2
#define DIRE_PIN GPIO_NUM_3
#define SHT4_SDA GPIO_NUM_17
#define SHT4_SCL GPIO_NUM_18

// Anenometro

// GPIO - ISR

// Pluviometro

// GPIO - ISR

// Direcao do vento

// ADC

// Temp humidade

// I2C

void config_gpios(){

}

void config_sht(){

}

void config_adc(){

}

void app_main(void)
{

}
