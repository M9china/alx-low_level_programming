#!/bin/bash

# List of file names
files=("0-isupper.c" "0-memset.c" "0-strcat.c" "1-isdigit.c" "1-memcpy.c" "1-strncat.c" "100-atoic.c" "2-strchr.c" "2-strlen.c" "2-strncpy.c" "3-islower.c" "3-puts.c" "3-strcpm.c" "3-strspn.c" "4-isalpha.c" "4-strpbrk.c" "5-strstr.c" "6-abs.c" "9-strcpy.c" "_putchar.c" "main.c")

# Create files using a loop
for file in "${files[@]}"; do
    touch "$file"
done

