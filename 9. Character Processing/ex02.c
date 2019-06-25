//ex02.c
#include <stdio.h>

void main() 
{
    char c;
	c = getchar();
	
	while(c != ' ')
	{
		 putchar(c);
		 c = getchar();
	}

}
