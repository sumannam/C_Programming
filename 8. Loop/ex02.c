//ex02.c
#include <stdio.h>

void main() 
{
    int i, sum;
	sum =  0;

	for(i = 2; i <= 100; i =+ 2)
		sum = sum + i;
	
	printf("%d\n", sum);	
}
