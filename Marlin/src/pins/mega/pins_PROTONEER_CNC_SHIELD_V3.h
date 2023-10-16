/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Protoneer v3.00 pin assignments
 * Schematic: https://green-candy.osdn.jp/external/MarlinFW/board_schematics/Protoneer%20CNC%20Shield%20v3.00/Arduino-CNC-Shield-Scematics-V3.XX_.webp
 * Origin: https://i0.wp.com/blog.protoneer.co.nz/wp-content/uploads/2013/07/Arduino-CNC-Shield-Scematics-V3.XX_.jpg
 * ATmega2560
 *
 * This CNC shield has an UNO pinout and fits all Arduino-compatibles.
 *
 * Referenced docs:
 * - https://blog.protoneer.co.nz/arduino-cnc-shield-v3-00-assembly-guide/
 * - https://blog.protoneer.co.nz/arduino-cnc-shield/
 */

#include "env_validate.h"

#define BOARD_INFO_NAME "Protoneer CNC Shield v3.00 x2"

//
// Limit Switches
//
#define X_STOP_PIN                             9
#define Y_STOP_PIN                            10
#define Z_STOP_PIN                            11
#define I_STOP_PIN                             9
#define J_STOP_PIN                             9
#define K_STOP_PIN                             9

//
// Steppers
//
#define X_STEP_PIN                             2
#define X_DIR_PIN                              5
#define X_ENABLE_PIN                           8  // Shared enable pin

#define Y_STEP_PIN                             3
#define Y_DIR_PIN                              6
#define Y_ENABLE_PIN                X_ENABLE_PIN // not used = Jumper on board

#define Z_STEP_PIN                             4
#define Z_DIR_PIN                              7
#define Z_ENABLE_PIN                X_ENABLE_PIN 

// Designated with letter "A" on BOARD = "A" (I in Marlin config)
// Needed 2 jumpers on Board (D12/D13)
#define I_STEP_PIN                             12
#define I_DIR_PIN                              13
#define I_ENABLE_PIN                 X_ENABLE_PIN

// ----- Second CNC Shield v3.00 ------
// "X" on BOARD = "B" (J in Marlin config)
#define J_STEP_PIN                             30
#define J_DIR_PIN                              31
#define J_ENABLE_PIN                 X_ENABLE_PIN 

// "Y" on BOARD = "C" (K in Marlin config)
#define K_STEP_PIN                             40
#define K_DIR_PIN                              41
#define K_ENABLE_PIN                 X_ENABLE_PIN

