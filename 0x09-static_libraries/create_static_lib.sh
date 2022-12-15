#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rcv liball.a *.o 
ranlib liball.a
rm *.o
