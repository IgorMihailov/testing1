#include <stdio.h>
#include "roots.h"

int main(void)
{
    roots *answer = equation(3, 1, 1);
    switch (answer->count)
    {
        case 0: printf("Нет корней\n"); break;
        case 1: printf(" 1 корень: %f\n", answer->x1); break;
        case 2: printf(" 2 корня  \nx1: %f \nx2: %f\n", answer->x1, answer->x2); break;
        default: printf("error"); break;
    }
    return 0;
}
