// ex05.c
#include <stdio.h> 

int max(int , int n)
{
    if(m > n) 
        return m;
    else
        return n;
}

int max3(int a, int b, int c)
{
    int k = max(a, b);
    k = max(k, c);
    return k;
}

void main()
{
    int m;
    m = max3(3, 4, 10);
    printf("%d\n", m);
}