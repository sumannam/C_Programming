// ex14.c
#include <stdio.h>
#include <math.h>

main() 
{
    int n, a, sum;

    n = 1;
    a = 1;
    sum = 0;

    while(n <= 10)
    {
        a = 1;
        while(a <= n)
        {
            sum = sum + a;
            a = a + 1;
         }
         n = n + 1;
    }

    printf("%d", sum);

    return;
}


