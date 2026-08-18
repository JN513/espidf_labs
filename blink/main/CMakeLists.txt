idf_component_register(SRCS "blink.c"
                       PRIV_REQUIRES spi_flash esp_driver_gpio
                       INCLUDE_DIRS "")
