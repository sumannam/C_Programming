//ex01.c
#include <stdio.h>

int main(void)
{
	int nchars;
	char p[ ] = "Hello! the world"; 

	nchars = printf("%s", p); 
	printf("\nnum of chars=%d\n", nchars);
	
	return 0;
} 

