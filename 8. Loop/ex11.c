// ex09.c
#include <stdio.h>
#include <math.h>

main() 
{
    int n, sum;

    n  = 1;
    sum = 0;

	sum = sum + n;

    while(sum < 1000)
    {
         n = n + 1;
         sum = sum + n;
    }

    printf("%d", n-2);

    return;
}

