# Kernel Makefile

CC = x86_64-elf-gcc
LD = x86_64-elf-ld
ASM = nasm
CFLAGS = -ffreestanding -O2 -Wall -Wextra -g
LDFLAGS = -T linker.ld -ffreestanding -O2

# Files
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

# Output file
OUTPUT = kernel.bin

# Default target
all: $(OUTPUT)

# Compile kernel
$(OUTPUT): $(OBJ)
	$(LD) $(LDFLAGS) -o $(OUTPUT) $(OBJ)

# Compile .c files to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f *.o $(OUTPUT)
