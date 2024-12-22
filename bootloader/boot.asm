; boot.asm - Terry OS SM Bootloader

    [BITS 16]        ; We're working in 16-bit real mode initially
    [ORG 0x7C00]     ; GRUB loads the bootloader at address 0x7C00 in memory

start:
    ; Print "Welcome to Terry OS SM!" using BIOS interrupt
    mov ah, 0x0E     ; BIOS teletype output function
    mov al, 'W'      ; Character to print
    call print_char
    mov al, 'e'
    call print_char
    mov al, 'l'
    call print_char
    mov al, 'c'
    call print_char
    mov al, 'o'
    call print_char
    mov al, 'm'
    call print_char
    mov al, 'e'
    call print_char
    mov al, ' '
    call print_char
    mov al, 't'
    call print_char
    mov al, 'o'
    call print_char
    mov al, ' '
    call print_char
    mov al, 'T'
    call print_char
    mov al, 'e'
    call print_char
    mov al, 'r'
    call print_char
    mov al, 'r'
    call print_char
    mov al, 'y'
    call print_char
    mov al, ' '
    call print_char
    mov al, 'O'
    call print_char
    mov al, 'S'
    call print_char
    mov al, ' '
    call print_char
    mov al, 'S'
    call print_char
    mov al, 'M'
    call print_char
    mov al, '!'
    call print_char

    ; Infinite loop to halt the system
hang:
    jmp hang

; Helper function to print characters
print_char:
    mov ah, 0x0E     ; BIOS teletype function
    int 0x10         ; Call BIOS interrupt to print the character
    ret

; Fill the rest of the boot sector with 0s (for padding)
times 510 - ($ - $$) db 0
dw 0xAA55            ; Bootloader signature, must be present
