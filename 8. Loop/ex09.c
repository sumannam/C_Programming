// ex09.c
#include <stdio.h>

main() 
{
    int i, sum;

    i  = 0;
    sum = 0;

    while(i <= 100)
    {
          if(i % 2 == 0)
          {
              sum = sum + i;
          }
          i = i + 1;
    }

    printf("%d", sum);

    return;
}

