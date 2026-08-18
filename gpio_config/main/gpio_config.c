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

void app_main(void) {
    printf("Iniciando programa\n");

    gpio_config_t io_config = {.intr_type = GPIO_INTR_DISABLE,
                               .mode = GPIO_MODE_INPUT,
                               .pull_down_en = GPIO_PULLDOWN_ENABLE,
                               .pull_up_en = GPIO_PULLUP_DISABLE,
                               .pin_bit_mask = 1ULL << GPIO_NUM_16};

    gpio_config(&io_config);

    gpio_config_t io_config2 = {.intr_type = GPIO_INTR_DISABLE,
                                .mode = GPIO_MODE_OUTPUT,
                                .pull_down_en = false,
                                .pull_up_en = false,
                                .pin_bit_mask = 1ULL << GPIO_NUM_17};

    gpio_config(&io_config2);

    while (1) {
        if (gpio_get_level(GPIO_NUM_16)) {
            gpio_set_level(GPIO_NUM_17, 1);
        } else {
            gpio_set_level(GPIO_NUM_17, 0);
        }

        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
