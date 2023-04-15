#!/bin/bash

# Compile all the .c files into object files
gcc -c *.c

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o

