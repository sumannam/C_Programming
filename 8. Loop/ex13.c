// ex13.c
#include <stdio.h>
#include <math.h>

main() 
{
    int a, b;

    a = 2;
    while(a <= 9)
    {
        b = 1;
        while(b <= 9)
        {
             sum = sum + a*b;
             b = b + 1;
        }
        a = a + 1;
    }

	printf("%d %d\n", a, b);

    return;
}

