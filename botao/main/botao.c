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

    gpio_set_direction(GPIO_NUM_2, GPIO_MODE_OUTPUT);

    while (true) {
        gpio_set_level(GPIO_NUM_2, 1);

        vTaskDelay(2000 / portTICK_PERIOD_MS);

        gpio_set_level(GPIO_NUM_2, 0);

        vTaskDelay(2000 / portTICK_PERIOD_MS);
    }
}
