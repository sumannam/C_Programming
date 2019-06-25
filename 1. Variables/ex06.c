// ex06.c
#include <stdio.h>

void main()
{
	char c; int i;
	
	/* abc … z is printed */
	for (i = 'a'; i <= 'z'; ++i)
		printf(“%c”, i); 

	/*ABC … Z is printed */
	for (c = 65; c <= 90; ++c)
		printf(“%c”, c); 

	/* 48 49 50… 57 is printed */
	for (c = '0'; c <= '9'; ++c)
		printf(“%d ”, c);
}