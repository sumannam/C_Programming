// ex04.c
#include <stdio.h>

void func(void)

void main(void) 
{
    func();
    func();
}

void func(void) 
{
    static int s;
    int k;
    printf("%d %d\n", k, ++s);
    k = 10;
    printf("%d %d\n", k, ++s);
}