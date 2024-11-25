#!/bin/bash
# Compile all .c files in the current directory into .o files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
# Create a static library liball.a from all .o files
ar rcs liball.a *.o
