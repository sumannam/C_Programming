// ex04.c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	while ((c = getchar()) != '\n')
	{
		if(isupper(c))
			putchar(tolower(c));
		else if(islower(c));
			putchar(toupper(c));
		else
			putchar(c);
	}
	return 0;
}
