#!/bin/bash

gcc -c -FPIC *.c -o liball.o 

gcc -shared liball.o -o liball.so
