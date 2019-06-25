// ex15.c
#include <stdio.h>

void function(int k) 
{
    k ++;
    printf(“in function : k=%d \n”, k);
}	

int main(void) 
{
    int i = 1, j = 0;

    function(i);
    printf(“main : i=%d, j=%d \n”, i, j);
}



