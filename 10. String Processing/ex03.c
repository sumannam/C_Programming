// ex03.c
#include <stdio.h>

int main(void)
{
	char str1[10], str2[10];
	scanf(“%s”, str1);
	scanf(“%s”, str2);

	if(strcmp(str1,str2) == 0) 
		printf(“Same!!\n”);

	return 0;
}
