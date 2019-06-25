//ex01.c
#include <stdio.h>

int g;
int main() 
{
   printf(“%d\n”, g);
   my_func();
   printf(“%d\n”, g);
}

void my_func()
{
    g = 10;
}
