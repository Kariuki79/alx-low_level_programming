#!/bin/bash
# A script to create a static library called liball.a from all .c files in the current directory

# Compile all .c files into .o files
gcc -c *.c

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# Clean up: Remove the .o files
rm -f *.o
