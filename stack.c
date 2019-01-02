#include <stdio.h>
#include "calc.h"

#define MAXVAL 100

int sp=0;
double val[MAXVAL];

void push(double d)
{
    printf(">> Push\n");
}

double pop(void)
{
    printf(">> Pop\n");
    return 0.0;
}
