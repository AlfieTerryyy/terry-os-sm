#include <stdio.h>
#include <stdlib.h>

void main() {
    char buffer[256];

    printf("Welcome to Terry OS SM shell!\n");

    while (1) {
        printf("$ ");
        fgets(buffer, 256, stdin);  // Get user input
        printf("You typed: %s", buffer);  // Print it back
    }
}
