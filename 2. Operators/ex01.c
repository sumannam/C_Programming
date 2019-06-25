//ex01.c
#include <stdio.h>

int main() 
{
    int i = 4, j;

	j = ++i + 3;
	printf("i : %d, j = %d\n", i,  j);	

	j = i++ + 3;
	printf("i : %d, j = %d\n", i,  j);	

	j = --i + 3;
	printf("i : %d, j = %d\n", i,  j);	

	j = i-- + 3;
	printf("i : %d, j = %d\n", i,  j);
	
	return 0;
}
