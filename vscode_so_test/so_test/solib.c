#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdalign.h>
#include <string.h>

#define __USE_MISC  1
#include <math.h>
#include <uchar.h>
#include <stdatomic.h>
#include <complex.h>

#include <unistd.h>
#include <dlfcn.h>

// build:
// cmake -S ./ -B ./build/

int solib_function(int x)
{
    printf("π + e = %f\n",  M_PI + M_E);

    const int a = x + 100;
    return a;
}

