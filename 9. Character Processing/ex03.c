// ex03.c
#include <stdio.h>

int main(void)
{
	while ((c = getchar()) != '\n') 
	{
		if('A' <= c && c <= 'Z')
			putchar(c + ('a'-'A'));
		else if('a' <= c && c <= 'z');
			putchar(c - ('a'-'A'));
		else
			putchar(c);
	}
	return 0;
}
