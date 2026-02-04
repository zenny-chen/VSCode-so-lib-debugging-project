#!/bin/sh
mkdir build
gcc  solib.c -o build/libsolib.so  -g -O0 -shared -fPIC -std=gnu17
gcc  main.c  -o build/test  -g -O0 -std=gnu17  -L./build  -lsolib
#as   hello.S -o build/hello.o  -c  -g

