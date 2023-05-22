#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
