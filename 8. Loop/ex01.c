//ex01.c
#include <stdio.h>

void main() 
{
    int i, sum;
	sum =  0;
	i = 2;
	
	while(i <= 100) {
		sum = sum + i;
		i =+ 2;
	}
	
	printf(“%d\n”, sum);
}
