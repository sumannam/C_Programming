//ex03.c
#include <stdio.h>

int g;
void func(void)

void main(void) {
    printf("%d\n", g);
    func();
    printf("%d\n", g);
}

void func(void) {
    int k;
    printf("%d %d\n", k, ++g);
    k = 10;
    printf("%d %d\n", k, ++g);
}
