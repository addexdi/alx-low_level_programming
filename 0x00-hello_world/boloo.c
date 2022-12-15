#!/bin/bash
gcc -c *.c 
ar crv libnew.a *.o
rm *.o
