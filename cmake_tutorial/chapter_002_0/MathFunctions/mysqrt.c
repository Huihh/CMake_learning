
#include "mysqrt.h"


double mysqrt(double val) 
{ 
    double x, y; 
    x = 0.0;
    y = val / 2;

    while (x != y)
    {
        x = y;
        y = (x + val / x) / 2;
    }

    return x;
}