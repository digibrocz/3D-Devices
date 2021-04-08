#pragma once

#define CUSTOM_BOOTSCREEN_TIMEOUT 3000
#define CUSTOM_BOOTSCREEN_BMPWIDTH 128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................#.......................................................................................
  0x00,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......................................####.....................................................................................
  0x00,0x00,0x00,0x00,0x03,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ......................................##..##....................................................................................
  0x00,0x00,0x00,0x00,0x03,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ......................................##..##....................................................................................
  0x00,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .......................................####.....................................................................................
  0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ........................................##......................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x03,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ......................................######....................................................................................
  0x00,0x00,0x00,0x00,0x07,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .....................................#######....................................................................................
  0x00,0x00,0x00,0x00,0x07,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .....................................########...................................................................................
  0x00,0x18,0x00,0x60,0x0F,0xF8,0x03,0xFF,0xF3,0x80,0x31,0x80,0x19,0x80,0x06,0x00, // ...........##............##.........#########.........##############..###.........##...##..........##..##............##.........
  0x00,0x1C,0x00,0xE0,0x0F,0xFC,0x03,0xFF,0xF3,0xE0,0x31,0x80,0x19,0xC0,0x0E,0x00, // ...........###..........###.........##########........##############..#####.......##...##..........##..###..........###.........
  0x00,0x1C,0x00,0xE0,0x1F,0x3C,0x03,0x00,0x03,0xF0,0x31,0x80,0x19,0xC0,0x0E,0x00, // ...........###..........###........#####..####........##..............######......##...##..........##..###..........###.........
  0x00,0x1E,0x01,0xE0,0x1F,0x3E,0x03,0x00,0x03,0x38,0x31,0x80,0x19,0xE0,0x1E,0x00, // ...........####........####........#####..#####.......##..............##..###.....##...##..........##..####........####.........
  0x00,0x1B,0x03,0xE0,0x3E,0x1E,0x03,0x07,0xF3,0x1C,0x31,0x80,0x19,0xB0,0x3E,0x00, // ...........##.##......#####.......#####....####.......##.....#######..##...###....##...##..........##..##.##......#####.........
  0x00,0x19,0x87,0x60,0x7E,0x1F,0x03,0x07,0xF3,0x0F,0x31,0x80,0x19,0x98,0x76,0x00, // ...........##..##....###.##......######....#####......##.....#######..##....####..##...##..........##..##..##....###.##.........
  0x00,0x19,0xCE,0x60,0x7C,0x0F,0x03,0x00,0x33,0x07,0xB1,0x80,0x19,0x9C,0xE6,0x00, // ...........##..###..###..##......#####......####......##..........##..##.....####.##...##..........##..##..###..###..##.........
  0x00,0x18,0xFC,0x60,0xFC,0x0F,0x83,0x00,0x33,0x01,0xF1,0x80,0x19,0x8F,0xC6,0x00, // ...........##...######...##.....######......#####.....##..........##..##.......#####...##..........##..##...######...##.........
  0x00,0x18,0x78,0x60,0xF8,0x07,0x83,0xFF,0xF3,0x00,0xF1,0xFF,0xF9,0x87,0x86,0x00, // ...........##....####....##.....#####........####.....##############..##........####...##############..##....####....##.........
  0x00,0x18,0x30,0x61,0xF0,0x07,0xC3,0xFF,0xF3,0x00,0x71,0xFF,0xF9,0x83,0x06,0x00, // ...........##.....##.....##....#####.........#####....##############..##.........###...##############..##.....##.....##.........
  0x00,0x00,0x00,0x01,0xF0,0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ...............................#####..........#####.............................................................................
  0x00,0x00,0x00,0x03,0xE0,0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ..............................#####...........#####.............................................................................
  0x00,0x00,0x00,0x07,0xE0,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .............................######............#####............................................................................
  0x00,0x00,0x00,0x07,0xC0,0x01,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // .............................#####.............#####............................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x03,0xFE,0x6F,0xFD,0xBF,0xE7,0xFE,0x7F,0xE0,0x0F,0xFC,0xFF,0x9F,0xF8,0x00, // ..............#########..##.##########.##.#########..##########..##########.........##########..#########..##########...........
  0x00,0x03,0x03,0x6C,0x01,0xB0,0x36,0x06,0x60,0x60,0x00,0x0C,0xC0,0xD8,0x00,0x00, // ..............##......##.##.##.........##.##......##.##......##..##......##.................##..##......##.##...................
  0x00,0x03,0x03,0x6C,0x01,0xB0,0x36,0x06,0x60,0x60,0x00,0x0C,0xC0,0xD8,0x00,0x00, // ..............##......##.##.##.........##.##......##.##......##..##......##.................##..##......##.##...................
  0x00,0x03,0x03,0x6C,0x7D,0xBF,0xF7,0xFE,0x60,0x60,0x0F,0xFC,0xC0,0xDF,0xF8,0x00, // ..............##......##.##.##...#####.##.##########.##########..##......##.........##########..##......##.##########...........
  0x00,0x03,0x03,0x6C,0x0D,0xB0,0x36,0x0C,0x60,0x60,0x00,0x0C,0xC0,0xC0,0x18,0x00, // ..............##......##.##.##......##.##.##......##.##.....##...##......##.................##..##......##.........##...........
  0x00,0x03,0xFE,0x6F,0xFD,0xBF,0xE6,0x0E,0x7F,0xE0,0x0F,0xFC,0xFF,0x9F,0xF8,0x00, // ..............#########..##.##########.##.#########..##.....###..##########.........##########..#########..##########...........
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // ................................................................................................................................
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00  // ................................................................................................................................
};