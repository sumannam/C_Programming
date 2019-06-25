// ex06.c
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char str1[10]="1234";
    char str2[10]="abcd";

	strcat(str1, str2);
	printf("%s, %s\n", str1, str2);

	strcat(str2, "efgh");
	printf("%s\n", str2);


	return 0;
}
