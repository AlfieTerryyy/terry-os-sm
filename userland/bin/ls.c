#include <stdio.h>
#include <dirent.h>

void main() {
    struct dirent *entry;
    DIR *dp = opendir("/");  // Open root directory

    if (dp == NULL) {
        printf("Cannot open directory\n");
        return;
    }

    while ((entry = readdir(dp))) {
        printf("%s\n", entry->d_name);  // Print file names
    }

    closedir(dp);
}
