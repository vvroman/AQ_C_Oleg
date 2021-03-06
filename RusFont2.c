// RusFont2.c
// Font type    : Full (95 characters)
// Font size    : 8x12 pixels
// Memory usage : 1144 bytes

#include <avr/pgmspace.h>

PROGMEM const uint8_t RusFont2[1144] ={
0x08,0x0C,0x20,0x5F,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x20,0x00,0x00,  // !
0x00,0x28,0x50,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // "
0x00,0x00,0x28,0x28,0xFC,0x28,0x50,0xFC,0x50,0x50,0x00,0x00,  // #
0x00,0x20,0x78,0xA8,0xA0,0x60,0x30,0x28,0xA8,0xF0,0x20,0x00,  // $
0x00,0x00,0x48,0xA8,0xB0,0x50,0x28,0x34,0x54,0x48,0x00,0x00,  // %
0x00,0x00,0x20,0x50,0x50,0x78,0xA8,0xA8,0x90,0x6C,0x00,0x00,  // &
0x00,0x40,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // '
0x00,0x04,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x04,0x00,  // (
0x00,0x40,0x20,0x10,0x10,0x10,0x10,0x10,0x10,0x20,0x40,0x00,  // )
0x00,0x00,0x00,0x20,0xA8,0x70,0x70,0xA8,0x20,0x00,0x00,0x00,  // *
0x00,0x00,0x20,0x20,0x20,0xF8,0x20,0x20,0x20,0x00,0x00,0x00,  // +
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x80,  // ,
0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,  // -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,  // .
0x00,0x08,0x10,0x10,0x10,0x20,0x20,0x40,0x40,0x40,0x80,0x00,  // /

0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,0x00,  // 0
0x00,0x00,0x20,0x60,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00,  // 1
0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x40,0x80,0xF8,0x00,0x00,  // 2
0x00,0x00,0x70,0x88,0x08,0x30,0x08,0x08,0x88,0x70,0x00,0x00,  // 3
0x00,0x00,0x10,0x30,0x50,0x50,0x90,0x78,0x10,0x18,0x00,0x00,  // 4
0x00,0x00,0xF8,0x80,0x80,0xF0,0x08,0x08,0x88,0x70,0x00,0x00,  // 5
0x00,0x00,0x70,0x90,0x80,0xF0,0x88,0x88,0x88,0x70,0x00,0x00,  // 6
0x00,0x00,0xF8,0x90,0x10,0x20,0x20,0x20,0x20,0x20,0x00,0x00,  // 7
0x00,0x00,0x70,0x88,0x88,0x70,0x88,0x88,0x88,0x70,0x00,0x00,  // 8
0x00,0x00,0x70,0x88,0x88,0x88,0x78,0x08,0x48,0x70,0x00,0x00,  // 9
0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x20,0x00,0x00,  // :
0x00,0x00,0xC0,0xC0,0xC0,0xFC,0xC6,0xC6,0xC6,0xFC,0x00,0x00,  // (;) - �
0x00,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x00,0x00,  // <
//0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,  // =
0x00,0x00,0x00,0x00,0x7C,0xCC,0xCC,0x7C,0x6C,0xCC,0x00,0x00,  // � (=)
0x00,0x40,0x20,0x10,0x08,0x04,0x08,0x10,0x20,0x40,0x00,0x00,  // >
0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x20,0x00,0x20,0x00,0x00,  // ?
//=================================================================== ������� (Caps ON)
0x00,0x30,0x78,0xCC,0xCC,0xCC,0xFC,0xCC,0xCC,0xCC,0x00,0x00,  // (@) - �
0x00,0xFE,0x62,0x60,0x7C,0x66,0x66,0x66,0x66,0xFC,0x00,0x00,  // (A) - �
0x00,0xFC,0x66,0x66,0x66,0x7C,0x66,0x66,0x66,0xFC,0x00,0x00,  // (B) - �
0x00,0xFE,0x62,0x62,0x60,0x60,0x60,0x60,0x60,0xF0,0x00,0x00,  // (C) - �
0x00,0x3E,0x66,0x66,0x66,0x66,0x66,0x66,0x66,0xFF,0xC3,0x00,  // (D) - �
0x00,0xFE,0x62,0x60,0x64,0x7C,0x64,0x60,0x62,0xFE,0x00,0x00,  // (E) - �
0x00,0x99,0xDB,0x5A,0x7E,0x3C,0x7E,0x5A,0xDB,0x99,0x00,0x00,  // (F) - �
0x00,0x3C,0x66,0x46,0x06,0x1C,0x06,0x46,0x66,0x3C,0x00,0x00,  // (G) - �
0x00,0xC6,0xC6,0xCE,0xDE,0xFE,0xF6,0xE6,0xC6,0xC6,0x00,0x00,  // (H) - �
0x18,0xD6,0xF6,0xCE,0xDE,0xFE,0xF6,0xE6,0xC6,0xC6,0x00,0x00,  // (I) - �
0x00,0xE6,0x66,0x6C,0x6C,0x78,0x6C,0x6C,0x66,0xE6,0x00,0x00,  // (J) - �
0x00,0x1E,0x3E,0x66,0x66,0x66,0x66,0x66,0x66,0xC6,0x00,0x00,  // (K) - �
0x00,0xC6,0xEE,0xFE,0xFE,0xD6,0xC6,0xC6,0xC6,0xC6,0x00,0x00,  // (L) - �
0x00,0xC6,0xC6,0xC6,0xC6,0xFE,0xC6,0xC6,0xC6,0xC6,0x00,0x00,  // (M) - �
0x00,0x38,0x6C,0xC6,0xC6,0xC6,0xC6,0xC6,0x6C,0x38,0x00,0x00,  // (N) - �
0x00,0xFE,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0xC6,0x00,0x00,  // (O) - �

0x00,0xFC,0x66,0x66,0x66,0x7C,0x60,0x60,0x60,0xF0,0x00,0x00,  // (P) - �
0x00,0x3C,0x66,0xC6,0xC0,0xC0,0xC0,0xC6,0x66,0x3C,0x00,0x00,  // (Q) - �
0x00,0x7E,0x5A,0x18,0x18,0x18,0x18,0x18,0x18,0x3C,0x00,0x00,  // (R) - �
0x00,0x66,0x66,0x66,0x66,0x66,0x3E,0x06,0x66,0x3C,0x00,0x00,  // (S) - �
0x00,0x18,0x7E,0xDB,0xDB,0xDB,0xDB,0x7E,0x18,0x18,0x00,0x00,  // (T) - �
0x00,0xCC,0xCC,0xCC,0x78,0x30,0x78,0xCC,0xCC,0xCC,0x00,0x00,  // (U) - �
0x00,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xCC,0xFE,0x06,0x00,  // (V) - �
0x00,0xC6,0xC6,0xC6,0xC6,0xC6,0x7E,0x06,0x06,0x06,0x00,0x00,  // (W) - �
0x00,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xFE,0x00,0x00,  // (X) - �
0x00,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xD6,0xFF,0x03,0x00,  // (Y) - �
0x00,0xE0,0xE0,0x60,0x60,0x7C,0x66,0x66,0x66,0x7C,0x00,0x00,  // (Z) - �
0x00,0xC6,0xC6,0xC6,0xC6,0xF6,0xDE,0xDE,0xDE,0xF6,0x00,0x00,  // ([) - � (��� �����)
0x00,0x00,0xC0,0xC0,0xC0,0xFC,0xC6,0xC6,0xC6,0xFC,0x00,0x00,  // <backslash>
0x00,0x78,0xCC,0xC6,0x06,0x1E,0x06,0xC6,0xCC,0x78,0x00,0x00,  // (]) - � (��� �����)
0x00,0xCE,0xDB,0xDB,0xFB,0xFB,0xDB,0xDB,0xDB,0xCE,0x00,0x00,  // (^) - �
0x00,0x3F,0x66,0x66,0x66,0x3E,0x36,0x66,0x66,0xE7,0x00,0x00,  // (_) - �
//=================================================================== ��������� (Caps OFF)
0x00,0x00,0x00,0x00,0x78,0x0C,0x7C,0xCC,0xCC,0x76,0x00,0x00,  // (`) - �
0x00,0x00,0x00,0x04,0x7C,0xC0,0xF8,0xCC,0xCC,0x78,0x00,0x00,  // (a) - �
0x00,0x00,0x00,0x00,0xF8,0xCC,0xF8,0xCC,0xCC,0xF8,0x00,0x00,  // (b) - �
0x00,0x00,0x00,0x00,0xFC,0xC0,0xC0,0xC0,0xC0,0xC0,0x00,0x00,  // (c) - �
0x00,0x00,0x00,0x00,0x7C,0x6C,0x6C,0x6C,0x6C,0xFE,0xC6,0x00,  // (d) - �
0x00,0x00,0x00,0x00,0x78,0xCC,0xFC,0xC0,0xCC,0x78,0x00,0x00,  // (e) - �
0x00,0x00,0x00,0x00,0x92,0xD6,0x7C,0x7C,0xD6,0x92,0x00,0x00,  // (f) - �
0x00,0x00,0x00,0x00,0x78,0x8C,0x38,0x0C,0x8C,0x78,0x00,0x00,  // (g) - �
0x00,0x00,0x00,0x00,0xCC,0xCC,0xDC,0xFC,0xEC,0xCC,0x00,0x00,  // (h) - �
0x00,0x08,0x18,0x10,0xCC,0xCC,0xDC,0xFC,0xEC,0xCC,0x00,0x00,  // (i) - �
0x00,0x00,0x00,0x00,0xCC,0xD8,0xF0,0xD8,0xC8,0xCC,0x00,0x00,  // (j) - �
0x00,0x00,0x00,0x00,0x1C,0x3C,0x2C,0x6C,0x4C,0xCC,0x00,0x00,  // (k) - �
0x00,0x00,0x00,0x00,0xC6,0xEE,0xD6,0xD6,0xC6,0xC6,0x00,0x00,  // (l) - �
0x00,0x00,0x00,0x00,0xCC,0xCC,0xFC,0xCC,0xCC,0xCC,0x00,0x00,  // (m) - �
0x00,0x00,0x00,0x00,0x78,0xCC,0xCC,0xCC,0xCC,0x78,0x00,0x00,  // (n) - �
0x00,0x00,0x00,0x00,0xFC,0xCC,0xCC,0xCC,0xCC,0xCC,0x00,0x00,  // (o) - �

0x00,0x00,0x00,0x00,0xF8,0xCC,0xCC,0xCC,0xCC,0xF8,0xC0,0xC0,  // (p) - �
0x00,0x00,0x00,0x00,0x78,0xCC,0xC0,0xC0,0xCC,0x78,0x00,0x00,  // (q) - �
0x00,0x00,0x00,0x00,0xFC,0x30,0x30,0x30,0x30,0x30,0x00,0x00,  // (r) - �
0x00,0x00,0x00,0x00,0x66,0x66,0x66,0x66,0x3E,0x06,0x66,0x3C,  // (s) - �
0x00,0x00,0x00,0x10,0x7C,0xD6,0xD6,0xD6,0x7C,0x10,0x10,0x00,  // (t) - �
0x00,0x00,0x00,0x00,0xC6,0x6C,0x38,0x38,0x6C,0xC6,0x00,0x00,  // (u) - �
0x00,0x00,0x00,0x00,0xCC,0xCC,0xCC,0xCC,0xCC,0xFE,0x06,0x00,  // (v) - �
0x00,0x00,0x00,0x00,0xCC,0xCC,0xCC,0x7C,0x0C,0x0C,0x00,0x00,  // (w) - �
0x00,0x00,0x00,0x00,0xD6,0xD6,0xD6,0xD6,0xD6,0xFE,0x00,0x00,  // (x) - �
0x00,0x00,0x00,0x00,0xD6,0xD6,0xD6,0xD6,0xD6,0xFF,0x03,0x00,  // (y) - �
0x00,0x00,0x00,0x00,0xE0,0xE0,0x7C,0x66,0x66,0x7C,0x00,0x00,  // (z) - �
0x00,0x00,0x00,0x00,0xC6,0xC6,0xF6,0xDE,0xDE,0xF6,0x00,0x00,  // ({) - � (����� ����)
0x00,0x00,0x00,0x00,0xC0,0xC0,0xF8,0xCC,0xCC,0xF8,0x00,0x00,  // (|) - �
0x00,0x00,0x00,0x00,0x78,0xCC,0x3C,0x0C,0xCC,0x78,0x00,0x00,  // (}) - � (����� ����)
0x00,0x00,0x00,0x00,0xDC,0xF6,0xF6,0xF6,0xF6,0xDC,0x00,0x00,  // (~) - �
};
