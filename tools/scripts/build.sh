#!/bin/bash

# Set the working directory to the script's location
SCRIPT_DIR=$(dirname "$(realpath "$0")")
ROOT_DIR=$SCRIPT_DIR/../../

# Directories
BOOTLOADER_DIR=$ROOT_DIR/bootloader
KERNEL_DIR=$ROOT_DIR/kernel
OUTPUT_DIR=$ROOT_DIR/output
ISO_DIR=$ROOT_DIR/iso
BUILD_DIR=$OUTPUT_DIR/build

# Create necessary directories if they don't exist
mkdir -p $BUILD_DIR
mkdir -p $ISO_DIR

# Set up environment for the build process
export PATH=$PATH:/usr/local/bin  # Add your toolchain to the PATH if needed

# Toolchain
CC=x86_64-elf-gcc
LD=x86_64-elf-ld
ASM=x86_64-elf-as
OBJCOPY=x86_64-elf-objcopy
GRUB_BUILD_DIR=$BOOTLOADER_DIR/grub

# Clean up previous build artifacts
echo "Cleaning previous build artifacts..."
rm -rf $BUILD_DIR/* $ISO_DIR/*

# Compile the bootloader
echo "Compiling bootloader..."
cd $BOOTLOADER_DIR
make clean
make

# Compile the kernel
echo "Compiling kernel..."
cd $KERNEL_DIR
make clean
make

# Copy the compiled kernel to the build directory
echo "Copying kernel to build directory..."
cp $KERNEL_DIR/kernel.bin $BUILD_DIR/

# Set up the GRUB configuration for booting
echo "Setting up GRUB..."
cp $GRUB_BUILD_DIR/grub.cfg $BUILD_DIR/

# Create an ISO image
echo "Creating ISO image..."
cd $ISO_DIR
grub-mkrescue -o $OUTPUT_DIR/terryos.iso $BUILD_DIR

# Final message
echo "Build complete. You can find your ISO image at $OUTPUT_DIR/terryos.iso"
