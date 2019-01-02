#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

#define MAXOP 100

int main()
{
    printf(">> Main\n");

    getop("c");
    push(0.0);
    pop();
    getch();
    ungetch(0);
    
    printf("\nAll methods called.\n");

    return 0;
}
