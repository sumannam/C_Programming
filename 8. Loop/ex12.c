// ex12.c
#include <stdio.h>
#include <math.h>

main() 
{
    int a, b;

    a = 1;
    while(a <= 10)
    {
        b = 1;
        while(b <= 10)
        {
            sum = sum + a;
            b = b + 1;
        }
        a = a + 1;
    }

    printf("%d %d\n", a, b);
	
	return;
}


