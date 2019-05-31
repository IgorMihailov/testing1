#include <stdio.h>
#include <math.h>
#include "roots.h"

roots* equation(double a, double b, double c)
{
    static roots r;
    double D = b*b - 4*a*c;
    
    if (D == 0)
    {
       r.x1 = -b/(2*a);
       r.count = 1;
    }

    if (D > 0)
    {
       r.x1 = (-b + sqrt(D)) / (2*a);
       r.x2 = (-b - sqrt(D)) / (2*a);
       r.count = 2;
    }

    if (D < 0)
    {
        r.count = 0;
    }
    
    if (a == 0)
    {
        r.error = 1;
    }
    return &r;
}
