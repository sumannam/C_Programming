// ex17.c
#include <stdio.h>

void Swap(int i, int j) 
{
    int temp;

    temp = i;
    i = j;
    j = temp;
}

void main() 
{
     int i = 0, j = 1, k = 2;

     printf("%d %d %d\n", i, j, k);

     Swap(i, j);
     Swap(j, k);

     printf("%d %d %d\n", i, j, k);
}




