// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2013, 2014 Damien P. George
// SPDX-FileCopyrightText: Copyright (c) 2019 Artur Pacholec
//
// SPDX-License-Identifier: MIT

#include <string.h>

#include "py/runtime.h"
#include "py/mphal.h"
#include "common-hal/microcontroller/Pin.h"

// Pins aren't actually defined here. They are in the board specific directory
// such as boards/imxrt1010_evk/pins.c.
