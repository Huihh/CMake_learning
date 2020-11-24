
#include <stdio.h>

#include "mysqrt.h"

int main(int argc, char *argv[])
{
    double x, val;
    val = 70;
    printf("Using mysqrt library\n");

    x = mysqrt(val);

    printf("%f sqrt is %f\n", val, x);

    return 0;
}



