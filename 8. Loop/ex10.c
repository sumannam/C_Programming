// ex10.c
#include <stdio.h>
#include <math.h>

main() 
{
    int n, sum;

    n  = 1;
    sum = 0;

    while(1)
    {
         sum = sum + n;
         if(sum < 1000) break;
         n = n + 1;
    }

    printf(“%d”, n-2);

    return;
}

