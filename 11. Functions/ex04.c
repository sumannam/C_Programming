// ex04.c
#include <stdio.h>  // ex04.c

int max(int m, int n)
{
    if(m > n) 
        return m;
    else
        return n;
}

void main(void)
{
    int a, b, c, m;

    scanf("%d%d%d", &a, &b, &c);

    m = max(a, b);
    printf("%d\n", m);
    
	m = max(a, c);
    printf(“%d\n”, m);

    m = max(b, c);
    printf(“%d\n”, m);
}

