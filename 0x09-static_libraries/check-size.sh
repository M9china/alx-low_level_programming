#!/bin/bash

# Array to store the unique file contents
declare -A file_contents

# Iterate through the files
for file in 0-isupper.c 0-strcat.c 1-isdigit.c 1-strncat.c 2-strlen.c 3-islower.c 3-strcmp.c 4-isalpha.c 5-strstr.c 9-strcpy.c _putchar.c 1-memset.c 100-atoi.c 1-memcpy.c 2-strchr.c 2-strncpy.c 3-puts.c 3-strspn.c 4-strpbrk.c 6-abs.c; do
    # Check if the file is a regular file
    if [ -f "$file" ]; then
        # Read the content of the file
        content=$(cat "$file")

        # Check if the content is not empty
        if [ -n "$content" ]; then
            # Check if the content already exists in the array
            if [[ -n "${file_contents["$content"]}" ]]; then
                echo "Files '${file_contents["$content"]}' and '$file' have the same content."
            else
                # Store the content and filename in the array
                file_contents["$content"]=$file
            fi
        fi
    fi
done


