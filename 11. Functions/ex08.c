// ex08.c
#include <stdio.h> 

int Sum(int k) 
{
    int i, sum = 0;
    for(i = 1; i <= k; i++)
        sum += i;
    return sum;
}

void main()
{
    int i;

    for(i = 0; i <= 10; i++)
        printf(“%d\n”, Sum(i));
}

