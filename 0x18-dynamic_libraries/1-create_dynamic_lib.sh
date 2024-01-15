#!/bin/bash

#creates a dynamic library called liball.so from all the .c file
#that are in the current directory.

gcc -c -fPIC *.c
gcc -shared -o libdynamic.so *.o
