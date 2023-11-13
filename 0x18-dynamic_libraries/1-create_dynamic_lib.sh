#!/bin/bash

gcc -c *.c -o *.o

gcc -shared -o liball.so *.o
