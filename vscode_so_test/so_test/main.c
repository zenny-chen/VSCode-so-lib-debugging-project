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

extern int solib_function(int x);

int main(int argc, const char* argv[])
{
    printf("π / 2 + 2 / π = %f\n", M_PI_2 + M_2_PI);

    const int result = solib_function(11);
    printf("result = %d\n", result);
}

