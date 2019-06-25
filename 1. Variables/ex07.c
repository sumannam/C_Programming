// ex07.c
#include <stdio.h>

void main()
{
	char c;
	c= ‘A’+5;
	printf(“%c %d\n”, c, c);

	c = ‘A’;
	c++;
	printf(“%c %d\n”, c, c);

	/* 48 49 50… 57 is printed */
	for(c = ‘A’; c <= ‘Z’; c++)
		printf(“%c\t”,c);
}