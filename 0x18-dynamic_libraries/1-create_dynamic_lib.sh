#!/bin/bash

# Get all the .c files in the current directory
c_files=$(ls *.c)

# Compile each .c file into an object file
for file in $c_files; do
    gcc -c $file -o ${file%.c}.o
done

# Create the static library
ar rcs liball.a *.o

	
