// ex06.c
#include <stdio.h>
int g;

void function()  {
          static int a;
          printf("a=%d g=%d", a, g);
}

int main(void) {
          int a = 3, b = 4;
          {
                 int b=5;
                 printf("%d %d", a, b, g);
          }
          printf("%d %d", a, b, g);
          function();
}