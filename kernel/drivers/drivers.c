#include "keyboard.h"
#include "video.h"
#include "disk.h"

void init_drivers(void) {
    init_keyboard();
    init_video();
    init_disk();
}
