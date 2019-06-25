// ex07.c
#include <stdio.h>

void main()
{
	int i=2, j=3;
	
	if((i == 2) && (j++ == 3))
		printf("True\n");
	else
		printf("False\n");
	printf("%d %d\n", i, j);

}