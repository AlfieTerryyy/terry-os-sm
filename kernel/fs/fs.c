#include "fs.h"
#include "fat32.h"

static FAT32_FS fs;

// Initialize the file system
int fs_init(void) {
    // Initialize the file system (e.g., mount FAT32)
    fat32_init(&fs);
    return 0;
}

// Mount the file system
int fs_mount(void) {
    // Mount the FAT32 file system
    fat32_mount(&fs);
    return 0;
}
