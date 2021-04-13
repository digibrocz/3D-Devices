/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Copyright (c) 2021 X-Ryl669 [https://blog.cyril.by]
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

// We need SERIAL_ECHOPAIR and macros.h
#include "serial.h"

#if ENABLED(POSTMORTEM_DEBUGGING)
  // Useful macro for stopping the CPU on an unexpected condition
  // This is used like SERIAL_ECHOPAIR, that is: a key-value call of the local variables you want
  // to dump to the serial port before stopping the CPU.
                          // \/ Don't replace by SERIAL_ECHOPAIR since ONLY_FILENAME cannot be transformed to a PGM string on Arduino and it breaks building
  #define BUG_ON(V...) do { SERIAL_ECHO(ONLY_FILENAME); SERIAL_ECHO(__LINE__); SERIAL_ECHOLN(": "); SERIAL_ECHOLNPAIR(V); SERIAL_FLUSHTX(); *(char*)0 = 42; } while(0)
#elif ENABLED(MARLIN_DEV_MODE)
  // Don't stop the CPU here, but at least dump the bug on the serial port
                          // \/ Don't replace by SERIAL_ECHOPAIR since ONLY_FILENAME cannot be transformed to a PGM string on Arduino and it breaks building
  #define BUG_ON(V...) do { SERIAL_ECHO(ONLY_FILENAME); SERIAL_ECHO(__LINE__); SERIAL_ECHOLN(": BUG!"); SERIAL_ECHOLNPAIR(V); SERIAL_FLUSHTX(); } while(0)
#else
  // Release mode, let's ignore the bug
  #define BUG_ON(V...) NOOP
#endif
