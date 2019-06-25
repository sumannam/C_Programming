// ex14.c
#include <stdio.h>
int g = 0;

int main(void) 
{
    int i =0, j=0;
    function(i);
    printf(“main : %d %d %d\n”, i, j, g);
}

void function(int i) 
{
    int j = 3;
    i++;
    printf(“in function : %d %d %d\n”, i, j, g);
    g++;
}


