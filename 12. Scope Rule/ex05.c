// ex05.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void do_nothing(void);

void main(void) 
{
    int j;
    srand(time(NULL));
    for(j = 0; j < 10; j++)
        if(rand() % 2) do_nothing();
}

void do_nothing(void) 
{
    static int cnt;
    printf("do_nothing is called %d time(s)\n", ++cnt);
}
