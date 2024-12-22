#include <stdio.h>

void main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: cat <file>\n");
        return;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Cannot open file %s\n", argv[1]);
        return;
    }

    char c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c);  // Print each character
    }

    fclose(file);
}
