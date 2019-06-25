// ex13.c
#include <stdio.h>

void function(int);

int main(void) 
{
    int i = 0, j = 0;
    function(i, j);
    printf(“i=%d, j=%d \n”, i, j);
}

void function(int i, int j) 
{
    int k = 0;
    i++; j++;
    printf(“i=%d, j=%d, k=%d \n”, i, j, k);
}


