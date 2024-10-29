// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2020 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

#include "py/obj.h"

#include "components/esp_wifi/include/esp_wifi_types.h"

typedef struct {
    mp_obj_base_t base;
    wifi_ap_record_t record;
} wifi_network_obj_t;
