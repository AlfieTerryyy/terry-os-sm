#include "video.h"
#include "io.h"

#define VIDEO_MEMORY 0xB8000

static unsigned short* video_memory = (unsigned short*)VIDEO_MEMORY;

void init_video(void) {
    clear_screen();
}

void print_char(char c, int x, int y) {
    unsigned short color = 0x07;
    unsigned short* pos = video_memory + (y * 80 + x);
    *pos = (color << 8) | c;
}

void clear_screen(void) {
    for (int i = 0; i < 80 * 25; i++) {
        video_memory[i] = (0x0F << 8) | ' ';
    }
}
