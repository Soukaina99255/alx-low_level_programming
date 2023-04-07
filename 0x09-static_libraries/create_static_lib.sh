#!/bin/bash
gcc -Wall -pendamic -Werror -Wextra -c *.c
ar rc liball.a *.o
