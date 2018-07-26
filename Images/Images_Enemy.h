#pragma once

#ifndef PLANES_HAVE_BORDERS

const uint8_t PROGMEM zero_N[] = {
  15, 15,
  0x10, 0x38, 0x38, 0x68, 0x78, 0x78, 0xFE, 0xC7, 0xFE, 0x78, 0x78, 0x68, 0x38, 0x38, 0x10,
  0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x33, 0x7F, 0x33, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM zero_NE[] = {
  15, 15,
  0x00, 0x00, 0x00, 0x07, 0x0F, 0x9F, 0xF6, 0xFC, 0xB8, 0xD8, 0xEC, 0xFE, 0xFE, 0x0E, 0x00,
  0x00, 0x06, 0x1C, 0x18, 0x36, 0x27, 0x03, 0x03, 0x01, 0x01, 0x03, 0x06, 0x0F, 0x0F, 0x0E,
};

const uint8_t PROGMEM zero_E[] = {
  15, 15,
  0x80, 0xF0, 0xE0, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xF8, 0x7E, 0x77, 0x7E, 0xC0, 0xC0, 0x80,
  0x00, 0x07, 0x03, 0x00, 0x00, 0x01, 0x01, 0x01, 0x0F, 0x3F, 0x77, 0x3F, 0x01, 0x01, 0x00,
};

const uint8_t PROGMEM zero_SE[] = {
  15, 15,
  0x00, 0x30, 0x1C, 0x0C, 0x36, 0xF2, 0xE0, 0xE0, 0xC0, 0xC0, 0xE0, 0xB0, 0xF8, 0x78, 0x38,
  0x00, 0x00, 0x00, 0x70, 0x78, 0x7C, 0x37, 0x1F, 0x1E, 0x1D, 0x1B, 0x3F, 0x3C, 0x38, 0x00,
};

const uint8_t PROGMEM zero_S[] = {
  15, 15,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0xE6, 0xFF, 0xE6, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x0E, 0x0E, 0x0B, 0x0F, 0x0F, 0x3F, 0x71, 0x3F, 0x0F, 0x0F, 0x0B, 0x0E, 0x0E, 0x04,
};

const uint8_t PROGMEM zero_SW[] = {
  15, 15,
  0x38, 0x78, 0xF8, 0xB0, 0xE0, 0xC0, 0xC0, 0xE0, 0xE0, 0xF2, 0x36, 0x0C, 0x1C, 0x30, 0x00,
  0x00, 0x38, 0x3C, 0x3F, 0x1B, 0x1D, 0x1E, 0x1F, 0x37, 0x7C, 0x78, 0x70, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM zero_W[] = {
  15, 15,
  0x80, 0xC0, 0xC0, 0x7E, 0x77, 0x7E, 0xF8, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0xE0, 0xF0, 0x80,
  0x00, 0x01, 0x01, 0x3F, 0x77, 0x3F, 0x0F, 0x01, 0x01, 0x01, 0x00, 0x00, 0x03, 0x07, 0x00,
};

const uint8_t PROGMEM zero_NW[] = {
  15, 15,
  0x00, 0x0E, 0x9E, 0xFE, 0xEC, 0xD8, 0xB8, 0xFC, 0xF6, 0x9F, 0x0F, 0x07, 0x00, 0x00, 0x00,
  0x0E, 0x0F, 0x0F, 0x06, 0x03, 0x01, 0x01, 0x03, 0x03, 0x27, 0x36, 0x18, 0x1C, 0x06, 0x00,
};

const uint8_t PROGMEM zero_hollow_N[] = {
  15, 15,
  0x10, 0x28, 0x28, 0x48, 0x48, 0x48, 0xFE, 0xC7, 0xFE, 0x48, 0x48, 0x48, 0x28, 0x38, 0x10,
  0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x33, 0x7F, 0x33, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM zero_hollow_NE[] = {
  15, 15,
  0x00, 0x00, 0x00, 0x07, 0x0F, 0x9F, 0xF6, 0xFC, 0xB8, 0xD8, 0xEC, 0xFE, 0xFE, 0x0E, 0x00,
  0x00, 0x06, 0x1C, 0x18, 0x36, 0x27, 0x03, 0x03, 0x01, 0x01, 0x03, 0x06, 0x0F, 0x0F, 0x0E,
};

const uint8_t PROGMEM zero_hollow_E[] = {
  15, 15,
  0x80, 0xF0, 0xE0, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xF8, 0x46, 0x41, 0x7E, 0xC0, 0xC0, 0x80,
  0x00, 0x07, 0x03, 0x00, 0x00, 0x01, 0x01, 0x01, 0x0F, 0x31, 0x61, 0x3F, 0x01, 0x01, 0x00,
};

const uint8_t PROGMEM zero_hollow_SE[] = {
  15, 15,
  0x00, 0x30, 0x1C, 0x0C, 0x36, 0xF2, 0xE0, 0xE0, 0xC0, 0xC0, 0xE0, 0xB0, 0xF8, 0x78, 0x38,
  0x00, 0x00, 0x00, 0x70, 0x78, 0x7C, 0x37, 0x1F, 0x1E, 0x1D, 0x1B, 0x3F, 0x3C, 0x38, 0x00,
};

const uint8_t PROGMEM zero_hollow_S[] = {
  15, 15,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0xE6, 0xFF, 0xE6, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x0A, 0x0A, 0x09, 0x09, 0x09, 0x3F, 0x71, 0x3F, 0x09, 0x09, 0x09, 0x0A, 0x0A, 0x04,
};

const uint8_t PROGMEM zero_hollow_SW[] = {
  15, 15,
  0x38, 0x78, 0xF8, 0xB0, 0xE0, 0xC0, 0xC0, 0xE0, 0xE0, 0xF2, 0x36, 0x0C, 0x1C, 0x30, 0x00,
  0x00, 0x38, 0x3C, 0x3F, 0x1B, 0x1D, 0x1E, 0x1F, 0x37, 0x7C, 0x78, 0x70, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM zero_hollow_W[] = {
  15, 15,
  0x80, 0xC0, 0xC0, 0x7E, 0x41, 0x46, 0xF8, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0xE0, 0xF0, 0x80,
  0x00, 0x01, 0x01, 0x3F, 0x61, 0x31, 0x0F, 0x01, 0x01, 0x01, 0x00, 0x00, 0x03, 0x07, 0x00,
};

const uint8_t PROGMEM zero_hollow_NW[] = {
  15, 15,
  0x00, 0x0E, 0x9E, 0xFE, 0xEC, 0xD8, 0xB8, 0xFC, 0xF6, 0x9F, 0x0F, 0x07, 0x00, 0x00, 0x00,
  0x0E, 0x0F, 0x0F, 0x06, 0x03, 0x01, 0x01, 0x03, 0x03, 0x27, 0x36, 0x18, 0x1C, 0x06, 0x00,
};

const uint8_t PROGMEM zero_mask_N[] = {
  0x10, 0x38, 0x38, 0x78, 0x78, 0x78, 0xFE, 0xFF, 0xFE, 0x78, 0x78, 0x78, 0x38, 0x38, 0x10,
  0x00, 0x00, 0x00, 0x00, 0x20, 0x30, 0x33, 0x7F, 0x33, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM zero_mask_NE[] = {
  0x00, 0x00, 0x00, 0x07, 0x0F, 0x9F, 0xFE, 0xFC, 0xF8, 0xF8, 0xFC, 0xFE, 0xFE, 0x0E, 0x00,
  0x00, 0x06, 0x1C, 0x18, 0x36, 0x27, 0x03, 0x03, 0x01, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x0E,
};

const uint8_t PROGMEM zero_mask_E[] = {
  0x80, 0xF0, 0xE0, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xF8, 0xFE, 0xFF, 0xFE, 0xC0, 0xC0, 0x80,
  0x00, 0x07, 0x03, 0x00, 0x00, 0x01, 0x01, 0x01, 0x0F, 0x3F, 0x7F, 0x3F, 0x01, 0x01, 0x00,
};

const uint8_t PROGMEM zero_mask_SE[] = {
  0x00, 0x30, 0x1C, 0x0C, 0x36, 0xF2, 0xE0, 0xE0, 0xC0, 0xC0, 0xE0, 0xF0, 0xF8, 0x78, 0x38,
  0x00, 0x00, 0x00, 0x70, 0x78, 0x7C, 0x3F, 0x1F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3C, 0x38, 0x00,
};

const uint8_t PROGMEM zero_mask_S[] = {
  0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0xE6, 0xFF, 0xE6, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00,
  0x04, 0x0E, 0x0E, 0x0F, 0x0F, 0x0F, 0x3F, 0x7F, 0x3F, 0x0F, 0x0F, 0x0F, 0x0E, 0x0E, 0x04,
};

const uint8_t PROGMEM zero_mask_SW[] = {
  0x38, 0x78, 0xF8, 0xF0, 0xE0, 0xC0, 0xC0, 0xE0, 0xE0, 0xF2, 0x36, 0x0C, 0x1C, 0x30, 0x00,
  0x00, 0x38, 0x3C, 0x3F, 0x1F, 0x1F, 0x1F, 0x1F, 0x3F, 0x7C, 0x78, 0x70, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM zero_mask_W[] = {
  0x80, 0xC0, 0xC0, 0xFE, 0xFF, 0xFE, 0xF8, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0xE0, 0xF0, 0x80,
  0x00, 0x01, 0x01, 0x3F, 0x7F, 0x3F, 0x0F, 0x01, 0x01, 0x01, 0x00, 0x00, 0x03, 0x07, 0x00,
};

const uint8_t PROGMEM zero_mask_NW[] = {
  0x00, 0x0E, 0x9E, 0xFE, 0xFC, 0xF8, 0xF8, 0xFC, 0xFE, 0x9F, 0x0F, 0x07, 0x00, 0x00, 0x00,
  0x0E, 0x0F, 0x0F, 0x07, 0x03, 0x01, 0x01, 0x03, 0x03, 0x27, 0x36, 0x18, 0x1C, 0x06, 0x00,
};

const uint8_t PROGMEM enemy_medium[] = {
  24, 23,    
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xCF, 0xCF, 0xFE, 0xF0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
  0x08, 0x1C, 0x3E, 0x2A, 0x3E, 0xFF, 0xDD, 0xDD, 0xDD, 0xDD, 0xFF, 0x3E, 0x3E, 0x3E, 0x3E, 0x1C, 0x1C, 0x1C, 0x1C, 0x14, 0x6B, 0xEB, 0x7F, 0x08,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x79, 0x79, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM enemy_medium_mask[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFE, 0xF0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00,
  0x08, 0x1C, 0x3E, 0x3E, 0x3E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3E, 0x3E, 0x3E, 0x3E, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x7F, 0xFF, 0x7F, 0x08,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x7F, 0x7F, 0x3F, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM enemy_large[] = {
  43, 48,    
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFE, 0xFF, 0xFF, 0xFE, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8E, 0x8E, 0xFF, 0xAE, 0xAE, 0xAE, 0xAE, 0xAE, 0xAF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x80, 0xC0, 0xC0, 0x60, 0x20, 0xE0, 0x20, 0xE3, 0x33, 0xFF, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFF, 0xFF, 0xF8, 0xF0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFE, 0x7F, 0xBF, 0xBF, 0xFE, 0x80,
  0x00, 0x01, 0x03, 0x03, 0x02, 0x03, 0x02, 0xE3, 0xE6, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xFF, 0xFF, 0x0F, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x3F, 0x7F, 0x7E, 0x7E, 0x3F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0xFF, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xFA, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x3F, 0x7F, 0x7F, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM enemy_large_mask[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFE, 0xFF, 0xFF, 0xFE, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8E, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE3, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xF0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0x80,
  0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0xE3, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x3F, 0x7F, 0x7F, 0x7F, 0x3F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x3F, 0x7F, 0x7F, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#endif


#ifdef PLANES_HAVE_BORDERS

const uint8_t PROGMEM zero_N[] = {
  17, 17,
  0x00,	0x20,	0x70,	0x70,	0xD0,	0xF0,	0xF0,	0xFC,	0x8E,	0xFC,	0xF0,	0xF0,	0xD0,	0x70,	0x70,	0x20,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x40,	0x60,	0x67,	0xFF,	0x67,	0x60,	0x40,	0x00,	0x00,	0x00,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_NE[] = {
  17, 17,
  0x00,	0x00,	0x00,	0x00,	0x0E,	0x1E,	0x3E,	0xEC,	0xF8,	0x70,	0xB0,	0xD8,	0xFC,	0x3C,	0x1C,	0x00,	0x00,
  0x00,	0x00,	0x0C,	0x38,	0x30,	0x6C,	0x4F,	0x07,	0x07,	0x03,	0x03,	0x07,	0x0D,	0x1F,	0x1E,	0x1C,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_E[] = {
  17, 17,
  0x00,	0x00,	0xE0,	0xC0,	0x00,	0x00,	0x80,	0x80,	0x80,	0xF0,	0xFC,	0xEE,	0xFC,	0x80,	0x80,	0x00,	0x80,
  0x00,	0x01,	0x0F,	0x07,	0x01,	0x01,	0x03,	0x03,	0x03,	0x1F,	0x7E,	0xEE,	0x7E,	0x03,	0x03,	0x01,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_SE[] = {
  17, 17,
  0x00,	0x00,	0x60,	0x38,	0x18,	0x6C,	0xE4,	0xC0,	0xC0,	0x80,	0x80,	0xC0,	0x60,	0xF0,	0xF0,	0x70,	0x00,
  0x00,	0x00,	0x00,	0x00,	0xE0,	0xF0,	0xF9,	0x6F,	0x3F,	0x1D,	0x1B,	0x37,	0x7F,	0x79,	0x70,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_S[] = {
  17, 17,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x04,	0x0C,	0xCC,	0xFE,	0xCC,	0x0C,	0x04,	0x00,	0x00,	0x00,	0x00,	0x00,
  0x00,	0x08,	0x1C,	0x1C,	0x16,	0x1E,	0x1E,	0x7F,	0xE3,	0x7F,	0x1E,	0x1E,	0x16,	0x1C,	0x1C,	0x08,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_SW[] = {
  17, 17,
  0x00,	0x70,	0xF0,	0xF0,	0x60,	0xC0,	0x80,	0x80,	0xC0,	0xC0,	0xE4,	0x6C,	0x18,	0x38,	0x60,	0x00,	0x00,
  0x00,	0x00,	0x70,	0x79,	0x7F,	0x37,	0x1B,	0x1D,	0x3F,	0x6F,	0xF9,	0xF0,	0xE0,	0x00,	0x00,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_W[] = {
  17, 17,
  0x00,	0x00,	0x80,	0x80,	0xFC,	0xEE,	0xFC,	0xF0,	0x80,	0x80,	0x80,	0x00,	0x00,	0xC0,	0xE0,	0x00,	0x00,
  0x00,	0x01,	0x03,	0x03,	0x7E,	0xEE,	0x7E,	0x1F,	0x03,	0x03,	0x03,	0x01,	0x01,	0x07,	0x0F,	0x01,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_NW[] = {
  17, 17,
  0x00,	0x00,	0x1C,	0x3C,	0xFC,	0xD8,	0xB0,	0x70,	0xF8,	0xEC,	0x3E,	0x1E,	0x0E,	0x00,	0x00,	0x00,	0x00,
  0x00,	0x1C,	0x1E,	0x1F,	0x0D,	0x07,	0x03,	0x03,	0x07,	0x07,	0x4F,	0x6C,	0x30,	0x38,	0x0C,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_hollow_N[] = {
  17, 17,
  0x00,	0x20,	0x50,	0x50,	0x90,	0x90,	0x90,	0xFC,	0x8E,	0xFC,	0x90,	0x90,	0x90,	0x50,	0x50,	0x20,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x40,	0x60,	0x67,	0xFF,	0x67,	0x60,	0x40,	0x00,	0x00,	0x00,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_hollow_NE[] = {
  17, 17,
  0x00,	0x00,	0x00,	0x00,	0x0E,	0x12,	0x22,	0xC4,	0xC8,	0x70,	0xB0,	0xD8,	0xFC,	0x3C,	0x1C,	0x00,	0x00,
  0x00,	0x00,	0x0C,	0x38,	0x30,	0x6C,	0x4F,	0x07,	0x07,	0x03,	0x03,	0x05,	0x08,	0x11,	0x12,	0x1C,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_hollow_E[] = {
  17, 17,
  0x00,	0x00,	0xE0,	0xC0,	0x00,	0x00,	0x80,	0x80,	0x80,	0xF0,	0x8C,	0x82,	0xFC,	0x80,	0x80,	0x00,	0x80,
  0x00,	0x01,	0x0F,	0x07,	0x01,	0x01,	0x03,	0x03,	0x03,	0x1F,	0x62,	0x82,	0x7E,	0x03,	0x03,	0x01,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_hollow_SE[] = {
  17, 17,
  0x00,	0x00,	0x60,	0x38,	0x18,	0x6C,	0xE4,	0xC0,	0xC0,	0x80,	0x80,	0x40,	0x20,	0x10,	0x90,	0x70,	0x00,
  0x00,	0x00,	0x00,	0x00,	0xE0,	0x90,	0x89,	0x47,	0x2F,	0x1D,	0x1B,	0x37,	0x7E,	0x79,	0x70,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_hollow_S[] = {
  17, 17,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x04,	0x0C,	0xCC,	0xFE,	0xCC,	0x0C,	0x04,	0x00,	0x00,	0x00,	0x00,	0x00,
  0x00,	0x08,	0x14,	0x14,	0x12,	0x12,	0x12,	0x7F,	0xE3,	0x7F,	0x12,	0x12,	0x12,	0x14,	0x14,	0x08,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_hollow_SW[] = {
  17, 17,
  0x00,	0x70,	0x90,	0x10,	0x20,	0x40,	0x80,	0x80,	0xC0,	0xC0,	0xE4,	0x6C,	0x18,	0x38,	0x60,	0x00,	0x00,
  0x00,	0x00,	0x70,	0x79,	0x7E,	0x37,	0x1B,	0x1D,	0x2F,	0x47,	0x89,	0x90,	0xE0,	0x00,	0x00,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_hollow_W[] = {
  17, 17,
  0x00,	0x00,	0x80,	0x80,	0xFC,	0x82,	0x8C,	0xF0,	0x80,	0x80,	0x80,	0x00,	0x00,	0xC0,	0xE0,	0x00,	0x00,
  0x00,	0x01,	0x03,	0x03,	0x7E,	0x82,	0x62,	0x1F,	0x03,	0x03,	0x03,	0x01,	0x01,	0x07,	0x0F,	0x01,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_hollow_NW[] = {
  17, 17,
  0x00,	0x00,	0x1C,	0x3C,	0xFC,	0xD8,	0xB0,	0x70,	0xE8,	0xC4,	0x22,	0x12,	0x0E,	0x00,	0x00,	0x00,	0x00,
  0x00,	0x1C,	0x12,	0x11,	0x08,	0x05,	0x03,	0x03,	0x07,	0x07,	0x4F,	0x6C,	0x30,	0x38,	0x0C,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_mask_N[] = {
  0x20,	0x70,	0xF8,	0xF8,	0xF8,	0xF8,	0xFC,	0xFE,	0xFF,	0xFE,	0xFC,	0xF8,	0xF8,	0xF8,	0xF8,	0x70,	0x20,
  0x00,	0x00,	0x00,	0x00,	0x41,	0xE1,	0xF7,	0xFF,	0xFF,	0xFF,	0xF7,	0xE1,	0x41,	0x00,	0x00,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x01,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_mask_NE[] = {
  0x00,	0x00,	0x00,	0x0F,	0x1F,	0x3F,	0xFF,	0xFE,	0xFC,	0xF8,	0xF8,	0xFC,	0xFE,	0xFE,	0x3E,	0x1E,	0x00,
  0x00,	0x0E,	0x7E,	0x7C,	0x7C,	0xFF,	0xFF,	0xCF,	0x0F,	0x07,	0x07,	0x0F,	0x1F,	0x3F,	0x3F,	0x3E,	0x3C,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_mask_E[] = {
  0x00,	0xE0,	0xF0,	0xE0,	0xC0,	0x80,	0xC0,	0xC0,	0xF0,	0xFC,	0xFE,	0xFF,	0xFE,	0xFC,	0xC0,	0x80,	0x00,
  0x01,	0x0F,	0x1F,	0x0F,	0x07,	0x03,	0x07,	0x07,	0x1F,	0x7F,	0xFF,	0xFF,	0xFF,	0x7F,	0x07,	0x03,	0x01,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x01,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_mask_SE[] = {
  0x00,	0xE0,	0xFC,	0x7C,	0x7C,	0xFE,	0xFE,	0xE6,	0xE0,	0xC0,	0xC0,	0xE0,	0xF0,	0xF8,	0xF8,	0xF8,	0x78,
  0x00,	0x00,	0x00,	0xE0,	0xF0,	0xF9,	0xFF,	0xFF,	0x7F,	0x3F,	0x3F,	0x7F,	0xFF,	0xFF,	0xF9,	0xF0,	0x00,
  0x00,	0x00,	0x00,	0x01,	0x01,	0x01,	0x01,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_mask_S[] = {
  0x00,	0x00,	0x00,	0x00,	0x04,	0x0E,	0xDE,	0xFE,	0xFF,	0xFE,	0xDE,	0x0E,	0x04,	0x00,	0x00,	0x00,	0x00,
  0x08,	0x1C,	0x3E,	0x3E,	0x3F,	0x3F,	0x7F,	0xFF,	0xFF,	0xFF,	0x7F,	0x3F,	0x3F,	0x3E,	0x3E,	0x1C,	0x08,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x01,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_mask_SW[] = {
  0x78,	0xF8,	0xF8,	0xF8,	0xF0,	0xE0,	0xC0,	0xC0,	0xE0,	0xE6,	0xFE,	0xFE,	0x7C,	0x7C,	0xFC,	0xE0,	0x00,
  0x00,	0xF0,	0xF9,	0xFF,	0xFF,	0x7F,	0x3F,	0x3F,	0x7F,	0xFF,	0xFF,	0xF9,	0xF0,	0xE0,	0x00,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x01,	0x01,	0x01,	0x01,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_mask_W[] = {
  0x00,	0x80,	0xC0,	0xFC,	0xFE,	0xFF,	0xFE,	0xFC,	0xF0,	0xC0,	0xC0,	0x80,	0xC0,	0xE0,	0xF0,	0xE0,	0x00,
  0x01,	0x03,	0x07,	0x7F,	0xFF,	0xFF,	0xFF,	0x7F,	0x1F,	0x07,	0x07,	0x03,	0x07,	0x0F,	0x1F,	0x0F,	0x01,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x01,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM zero_mask_NW[] = {
  0x00,	0x1E,	0x3E,	0xFE,	0xFE,	0xFC,	0xF8,	0xF8,	0xFC,	0xFE,	0xFF,	0x3F,	0x1F,	0x0F,	0x00,	0x00,	0x00,
  0x3C,	0x3E,	0x3F,	0x3F,	0x1F,	0x0F,	0x07,	0x07,	0x0F,	0xCF,	0xFF,	0xFF,	0x7C,	0x7C,	0x7E,	0x0E,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM enemy_medium[] = {
  26, 25,    
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0xF0,	0x9E,	0x9E,	0xFC,	0xE0,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
  0x00,	0x10,	0x38,	0x7C,	0x54,	0x7C,	0xFF,	0xBB,	0xBB,	0xBB,	0xBB,	0xFF,	0x7C,	0x7C,	0x7C,	0x7C,	0x38,	0x38,	0x38,	0x38,	0x28,	0xD6,	0xD7,	0xFE,	0x10,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x1F,	0xF3,	0xF3,	0x7F,	0x0F,	0x01,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x01,	0x00,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM enemy_medium_mask[] = {
  0x00,	0x00,	0x00,	0x00,	0x00,	0xF0,	0xFE,	0xFF,	0xFF,	0xFE,	0xFC,	0xE0,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x80,	0x00,	0x00,	0x00,
  0x10,	0x38,	0x7C,	0xFE,	0xFE,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFE,	0xFE,	0xFE,	0x7C,	0x7C,	0x7C,	0x7C,	0xFE,	0xFF,	0xFF,	0xFF,	0xFE,	0x10,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x1F,	0xFF,	0xFF,	0xFF,	0xFF,	0x7F,	0x0F,	0x01,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x01,	0x03,	0x01,	0x00,	0x00,
  0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x01,	0x01,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM enemy_large[] = {
  43, 48,    
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFE, 0xFF, 0xFF, 0xFE, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8E, 0x8E, 0xFF, 0xAE, 0xAE, 0xAE, 0xAE, 0xAE, 0xAF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x80, 0xC0, 0xC0, 0x60, 0x20, 0xE0, 0x20, 0xE3, 0x33, 0xFF, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFF, 0xFF, 0xF8, 0xF0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFE, 0x7F, 0xBF, 0xBF, 0xFE, 0x80,
  0x00, 0x01, 0x03, 0x03, 0x02, 0x03, 0x02, 0xE3, 0xE6, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xFF, 0xFF, 0x0F, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x3F, 0x7F, 0x7E, 0x7E, 0x3F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0xFF, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xFA, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x3F, 0x7F, 0x7F, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM enemy_large_mask[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xF8, 0xFE, 0xFF, 0xFF, 0xFE, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8E, 0x8E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE3, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xF0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFE, 0xFF, 0xFF, 0xFF, 0xFE, 0x80,
  0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0xE3, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x07, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x3F, 0x7F, 0x7F, 0x7F, 0x3F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x38, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0F, 0x3F, 0x7F, 0x7F, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#endif