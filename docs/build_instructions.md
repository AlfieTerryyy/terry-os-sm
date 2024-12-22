# Build Instructions for Terry OS SM

## Table of Contents

- [Introduction](#introduction)
- [Prerequisites](#prerequisites)
- [Building the Bootloader](#building-the-bootloader)
- [Building the Kernel](#building-the-kernel)
- [Building the File System](#building-the-file-system)
- [Creating the ISO](#creating-the-iso)
- [Running Terry OS SM](#running-terry-os-sm)
- [Troubleshooting](#troubleshooting)
- [Conclusion](#conclusion)

## Introduction

Terry OS SM is a custom operating system built from scratch. This document outlines the steps to build the operating system from source, including setting up the development environment, building the bootloader, kernel, file system, and creating an ISO for virtual machine or hardware installation.

Follow these steps carefully to compile and run Terry OS SM on your machine.

## Prerequisites

Before building **Terry OS SM**, ensure you have the following tools and dependencies installed on your system:

- **GCC**: The GNU Compiler Collection (for compiling the C and Assembly code).
- **NASM**: The Netwide Assembler (for assembling the bootloader and low-level code).
- **GRUB**: The bootloader package for managing the boot process.
- **QEMU**: A virtual machine for testing the OS.
- **Make**: To automate the build process.
- **ISO Creation Tool**: Tools like `genisoimage` or `mkisofs` to create the ISO file.
- **A Linux-based OS**: This guide assumes you are using a Linux-based system like Ubuntu or a similar distribution. If you are using macOS or Windows, the instructions may need slight adjustments.

To install the dependencies on a Debian-based system (like Ubuntu), use:

```bash
sudo apt-get update
sudo apt-get install build-essential nasm grub-pc-bin qemu genisoimage
