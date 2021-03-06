#ifndef IMAGES_SCENERY_H
#define IMAGES_SCENERY_H

const uint8_t PROGMEM scenery_top[] = {
  16, 16,
  0x90, 0x00, 0x40, 0x02, 0x80, 0x00, 0x10, 0x40, 0x00, 0x80, 0x08, 0x00, 0x42, 0x00, 0x48, 0x00,
  0xAA, 0x94, 0xA8, 0x95, 0xA8, 0x94, 0x8A, 0x51, 0x4A, 0x54, 0x4A, 0x54, 0x4A, 0x55, 0x8A, 0x94,
};

const uint8_t PROGMEM scenery_top_up[] = {
  16, 16,
  0x90, 0x00, 0x40, 0x02, 0x80, 0x00, 0x10, 0x40, 0x00, 0x80, 0x08, 0x00, 0x42, 0x00, 0x48, 0x00,
  0x4A, 0x54, 0x48, 0x95, 0xA8, 0x94, 0x8A, 0x51, 0x4A, 0x44, 0x2A, 0x24, 0x2A, 0x25, 0x12, 0x14,
};

const uint8_t PROGMEM scenery_top_down[] = {
  16, 16,
  0x48, 0x00, 0x20, 0x81, 0x40, 0x00, 0x08, 0x80, 0x20, 0x40, 0x04, 0x00, 0x21, 0x80, 0x24, 0x00,
  0x25, 0x2A, 0x24, 0x4A, 0x54, 0x4A, 0x95, 0xA8, 0x95, 0xAA, 0x95, 0x4A, 0x55, 0x4A, 0x95, 0xAA,
};

const uint8_t PROGMEM scenery_bottom[] = {
  16, 16,
  0x55, 0x29, 0x15, 0xA9, 0x15, 0x29, 0x51, 0x8A, 0x52, 0x2A, 0x52, 0x2A, 0x52, 0xAA, 0x51, 0x29,
  0x09, 0x00, 0x02, 0x40, 0x01, 0x00, 0x08, 0x02, 0x00, 0x01, 0x10, 0x00, 0x42, 0x00, 0x12, 0x00,
};

const uint8_t PROGMEM scenery_bottom_up[] = {
  16, 16,
  0xA4, 0x54, 0x24, 0x52, 0x2A, 0x52, 0xA9, 0x15, 0xA9, 0x55, 0xA9, 0x52, 0xAA, 0x52, 0xA9, 0x55,
  0x12, 0x00, 0x04, 0x81, 0x02, 0x00, 0x10, 0x01, 0x04, 0x02, 0x20, 0x00, 0x84, 0x01, 0x24, 0x00,
};

const uint8_t PROGMEM scenery_bottom_down[] = {
  16, 16,
  0x52, 0x2A, 0x12, 0xA9, 0x15, 0x29, 0x51, 0x8A, 0x52, 0x22, 0x54, 0x24, 0x54, 0xA4, 0x48, 0x28,
  0x09, 0x00, 0x02, 0x40, 0x01, 0x00, 0x08, 0x02, 0x00, 0x01, 0x10, 0x00, 0x42, 0x00, 0x12, 0x00,
};

#endif
