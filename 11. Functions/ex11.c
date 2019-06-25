// ex11.c
#include <stdio.h>

void function();

void main(void) 
{
	int i = 1, j = 0;
	function();
	printf("main : i=%d, j=%d \n", i, j);
}

void function() 
{
	int j=0, k = 1;
	printf("in function : j=%d, k=%d \n", j, k);
}


