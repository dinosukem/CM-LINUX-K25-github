# Learn Embedded Linux

A hands-on learning path for embedded Linux. This repository contains short, focused exercises that teach foundational concepts used in embedded Linux development: cross-compilation, root filesystem creation, processes, threads, and IPC.

## Goals
- Give you practical experience building and running small Linux-based systems.
- Teach common embedded workflows: toolchains, minimal filesystems, and debugging using QEMU.
- Provide bite-sized labs that map to core OS concepts used in embedded devices.

## Prerequisites
- Basic Linux command-line familiarity
- A development machine with:
  - gcc/clang and build-essential tools
  - Python 3 (optional scripts)
  - QEMU (for running images)
- (Optional) A cross-compile toolchain if you target non-x86 hardware (e.g., `arm-none-eabi` or `arm-linux-gnueabihf`)

## Supported targets / Board notes
- Labs are written to run on x86_64 QEMU by default for convenience.
- If you plan to use a physical board (Raspberry Pi, BeagleBone, etc.), you’ll need a matching cross-toolchain and board-specific setup; instructions will be added per-board as needed.

## Repository structure
- `day-1-makefile/` — Build basics and a Makefile-driven project
- `day-2-filesystem/` — Create and inspect minimal root filesystems
- `day-3-process/` — Process model and simple process exercises
- `day-4-thread/` — Threading and synchronization exercises
- `day-5-ipc-signal/` — Signals and simple IPC patterns
- `day-6-ipc-socket/` — Socket programming and network IPC examples

Each folder contains:
- A README describing the lab
- Source code and Makefiles
- Steps to build and run (often using QEMU or host execution)

## Example workflow
1. Enter a lab directory:
   - `cd projects/day-1-makefile`
2. Read the lab README:
   - `less README.md`
3. Build the exercise:
   - `make`
4. Run locally or under QEMU as instructed in the lab.

## Tips & debugging
- Use `strace` and `ltrace` to inspect syscalls and library calls.
- Use `gdb` or `gdb-multiarch` for debugging native and cross-compiled binaries.
- For filesystem troubleshooting, mount the image loopback locally:
  - `sudo mount -o loop rootfs.img /mnt` (adjust filename and path)

## Contributing
- Add new labs under `projects/` and update this README with a short description.
- Keep each lab self-contained and include build/run instructions.
- Use clear, reproducible steps and prefer QEMU-based instructions when possible.

## License
- Add your preferred license or state "All rights reserved" here.

## Next steps
Tell me which lab you want to expand first (e.g., add QEMU boot scripts, board instructions, or more exercises). I can create the README file now at the path you choose or adjust the content to your audience/board.
