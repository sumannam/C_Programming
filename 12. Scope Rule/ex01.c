//ex01.c
#include <stdio.h>

void func(void)

void main(void) {
    float f = 0;
    printf(“%f\n”, f);
    func();
    func();
}

void func(void) {
    int k;
    printf(“%d\n”, k);
    k = 10;
    printf(“%d\n”, k);
}


