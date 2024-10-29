// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2020 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

static const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_ROM_QSTR(MP_QSTR_IO0), MP_ROM_PTR(&pin_GPIO0) },
    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_GPIO0) },
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_GPIO0) },

    { MP_ROM_QSTR(MP_QSTR_IO1), MP_ROM_PTR(&pin_GPIO1) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_GPIO1) },
    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_GPIO1) },

    { MP_ROM_QSTR(MP_QSTR_IO2), MP_ROM_PTR(&pin_GPIO2) },
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_GPIO2) },
    { MP_ROM_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_GPIO2) },

    { MP_ROM_QSTR(MP_QSTR_IO3), MP_ROM_PTR(&pin_GPIO3) },
    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_GPIO3) },
    { MP_ROM_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_GPIO3) },
    { MP_ROM_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_GPIO3) },
    { MP_ROM_QSTR(MP_QSTR_RGB), MP_ROM_PTR(&pin_GPIO3) },

    { MP_ROM_QSTR(MP_QSTR_IO4), MP_ROM_PTR(&pin_GPIO4) },
    { MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_GPIO4) },
    { MP_ROM_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_GPIO4) },

    { MP_ROM_QSTR(MP_QSTR_IO5), MP_ROM_PTR(&pin_GPIO5) },
    { MP_ROM_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_GPIO5) },
    { MP_ROM_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_GPIO5) },

    { MP_ROM_QSTR(MP_QSTR_IO6), MP_ROM_PTR(&pin_GPIO6) },
    { MP_ROM_QSTR(MP_QSTR_A6), MP_ROM_PTR(&pin_GPIO6) },
    { MP_ROM_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_GPIO6) },

    { MP_ROM_QSTR(MP_QSTR_IO7), MP_ROM_PTR(&pin_GPIO7) },
    { MP_ROM_QSTR(MP_QSTR_D7), MP_ROM_PTR(&pin_GPIO7) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_GPIO7) },
    { MP_ROM_QSTR(MP_QSTR_IMUSC), MP_ROM_PTR(&pin_GPIO7) },

    { MP_ROM_QSTR(MP_QSTR_IO8), MP_ROM_PTR(&pin_GPIO8) },
    { MP_ROM_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_GPIO8) },
    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_GPIO8) },
    { MP_ROM_QSTR(MP_QSTR_IMUSD), MP_ROM_PTR(&pin_GPIO8) },

    { MP_ROM_QSTR(MP_QSTR_IO9), MP_ROM_PTR(&pin_GPIO9) },
    { MP_ROM_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_GPIO9) },
    { MP_ROM_QSTR(MP_QSTR_BUTTON), MP_ROM_PTR(&pin_GPIO9) },
    { MP_ROM_QSTR(MP_QSTR_BOOT), MP_ROM_PTR(&pin_GPIO9) },

    { MP_ROM_QSTR(MP_QSTR_IO14), MP_ROM_PTR(&pin_GPIO14) },
    { MP_ROM_QSTR(MP_QSTR_D14), MP_ROM_PTR(&pin_GPIO14) },
    { MP_ROM_QSTR(MP_QSTR_SS), MP_ROM_PTR(&pin_GPIO14) },

    { MP_ROM_QSTR(MP_QSTR_IO15), MP_ROM_PTR(&pin_GPIO15) },
    { MP_ROM_QSTR(MP_QSTR_D15), MP_ROM_PTR(&pin_GPIO15) },

    { MP_ROM_QSTR(MP_QSTR_IO16), MP_ROM_PTR(&pin_GPIO16) },
    { MP_ROM_QSTR(MP_QSTR_D16), MP_ROM_PTR(&pin_GPIO16) },
    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_GPIO16) },

    { MP_ROM_QSTR(MP_QSTR_IO17), MP_ROM_PTR(&pin_GPIO17) },
    { MP_ROM_QSTR(MP_QSTR_D17), MP_ROM_PTR(&pin_GPIO17) },
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_GPIO17) },

    { MP_ROM_QSTR(MP_QSTR_IO18), MP_ROM_PTR(&pin_GPIO18) },
    { MP_ROM_QSTR(MP_QSTR_D18), MP_ROM_PTR(&pin_GPIO18) },
    { MP_ROM_QSTR(MP_QSTR_NEOPIXEL_MATRIX), MP_ROM_PTR(&pin_GPIO18) },

    { MP_ROM_QSTR(MP_QSTR_IO19), MP_ROM_PTR(&pin_GPIO19) },
    { MP_ROM_QSTR(MP_QSTR_D19), MP_ROM_PTR(&pin_GPIO19) },

    { MP_ROM_QSTR(MP_QSTR_IO20), MP_ROM_PTR(&pin_GPIO20) },
    { MP_ROM_QSTR(MP_QSTR_D20), MP_ROM_PTR(&pin_GPIO20) },

    { MP_ROM_QSTR(MP_QSTR_IO21), MP_ROM_PTR(&pin_GPIO21) },
    { MP_ROM_QSTR(MP_QSTR_D21), MP_ROM_PTR(&pin_GPIO21) },
    { MP_ROM_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_GPIO21) },

    { MP_ROM_QSTR(MP_QSTR_IO22), MP_ROM_PTR(&pin_GPIO22) },
    { MP_ROM_QSTR(MP_QSTR_D22), MP_ROM_PTR(&pin_GPIO22) },
    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_GPIO22) },
    { MP_ROM_QSTR(MP_QSTR_MO), MP_ROM_PTR(&pin_GPIO22) },

    { MP_ROM_QSTR(MP_QSTR_IO23), MP_ROM_PTR(&pin_GPIO23) },
    { MP_ROM_QSTR(MP_QSTR_D23), MP_ROM_PTR(&pin_GPIO23) },
    { MP_ROM_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_GPIO23) },
    { MP_ROM_QSTR(MP_QSTR_MI), MP_ROM_PTR(&pin_GPIO23) },

    { MP_ROM_QSTR(MP_QSTR_STEMMA_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
