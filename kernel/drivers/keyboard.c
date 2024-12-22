#include "keyboard.h"
#include "io.h"

#define KEYBOARD_PORT 0x60

void init_keyboard(void) {
}

char get_key(void) {
    unsigned char key = inb(KEYBOARD_PORT);
    return key;
}
