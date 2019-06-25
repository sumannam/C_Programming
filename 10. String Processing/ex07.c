// ex06.c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str[10];

	scanf(“%s”, str);

	if(strchr(str, “”) != NULL)
	    printf(“hi is found\n”);
	else
	    printf(“hi is not found\n”);

	return 0;
}
