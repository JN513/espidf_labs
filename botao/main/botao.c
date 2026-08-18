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
#include "hal/gpio_types.h"
#include "driver/gpio.h"

void app_main(void)
{
    printf("Hello world!\n");
    gpio_set_direction(GPIO_NUM_17,
                       GPIO_MODE_INPUT); // Configura o pino 17 como entrada

    gpio_set_direction(GPIO_NUM_5,
                       GPIO_MODE_OUTPUT); // Configura o pino 5 como saida

    while (true) {                         // repete infinitamente
        if (gpio_get_level(GPIO_NUM_17)) { // se o pino 17 for acionado
            gpio_set_level(GPIO_NUM_5, 1); // aciona o pino 5
        } else {                           // caso contrario
            gpio_set_level(GPIO_NUM_5, 0); // desativa o pino 5
        }
        vTaskDelay(100 / portTICK_PERIOD_MS); // espera 100 ms
    }
}
