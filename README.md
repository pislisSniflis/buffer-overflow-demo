# Buffer Overflow Demo

This repository contains a simple C program to demonstrate a **buffer overflow vulnerability**. The purpose of this demo is to educate students about insecure coding practices and their potential consequences.

## How It Works

- The program contains a vulnerable function that uses `strcpy` to copy user input into a fixed-size buffer without bounds checking.
- By providing an input longer than the buffer size, a **buffer overflow** occurs, potentially overwriting the return address.

## Compilation Instructions

1. Install **gcc** (e.g., via MinGW on Windows or a Linux environment).
2. Compile the program with the following command:
   ```bash
   gcc -g -fno-stack-protector vuln.c -o vuln.exe
   ```

## Running the Program

Run the compiled program and provide input:
```bash
vuln.exe
```

- Enter a short input (e.g., `hello`) to observe normal behavior.
- Enter a long input (e.g., `AAAAAAAAAAAAAAAAAAAA`) to trigger the buffer overflow.

## Debugging

Use `gdb` to analyze the program:
```bash
gdb vuln.exe
```

## Disclaimer

This code is for educational purposes only. Do not use it maliciously.