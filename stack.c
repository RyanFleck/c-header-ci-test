#include <stdio.h>
#include "calc.h"

#define MAXVAL 100

int sp=0;
double val[MAXVAL];

void push(double d)
{
    printf(">> Push %f\n", d);
}

double pop(void)
{
    printf(">> Pop\n");
    return 0.0;
}
