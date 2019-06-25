//ex02.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand((int)time(NULL));
    for(i=0; i<10; i++)
        printf("%d\n", rand());
}
