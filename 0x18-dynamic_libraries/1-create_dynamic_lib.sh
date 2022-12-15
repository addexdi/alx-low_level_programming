#!/bin/bash

gcc -fPIC -c  *.c -Wall -Wextra -std=gnu89 -Werror -pedantic
gcc -shared -o liball.so *.o 
rm *.o