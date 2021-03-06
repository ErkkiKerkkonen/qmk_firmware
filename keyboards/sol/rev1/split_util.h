#ifndef SPLIT_KEYBOARD_UTIL_H
#define SPLIT_KEYBOARD_UTIL_H

#include <stdbool.h>
#include "eeconfig.h"

extern volatile bool isLeftHand;

// slave version of matix scan, defined in matrix.c
void matrix_slave_scan(void);

void split_keyboard_setup(void);
bool has_usb(void);

#endif
