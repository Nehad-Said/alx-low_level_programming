#!/usr/bin/python3
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
