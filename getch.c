#include <stdio.h>
#include "calc.h"

#define BUFSIZE 100

char buf[BUFSIZE];

int bufp = 0;

int getch(void)
{
    printf(">> GetCH\n");
    return 0;
}

void ungetch(int i)
{
    printf(">> UnGetCH %i\n", i);

}
