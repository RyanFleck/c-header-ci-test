#include <stdio.h>
#include <stdlib.h>  // Supplies atof()
#include "calc.h"

#define MAXOP 100

int main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ( (type = getop(s)) != EOF ) {
        switch(type) {
        case NUMBER:
            push(atof(s));
            break;
        }
    }

    return 0;
}
