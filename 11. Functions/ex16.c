// ex16.c
#include <stdio.h>

void main() 
{
    int i = 0, j = 1, k = 2;
    int temp;

    printf(“%d %d %d\n”, i, j, k);

    temp = i;
    i = j;
    j = temp;

    temp = j;
    j = k;
    k = temp;

    printf(“%d %d %d\n”, i, j, k);
}



