#!/bin/bash

#creates a static library called liball.a from all the .c files
#that are in the current directory.

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc libmy.a *.o
ranlib libmy.a

