// ex08.c
#include <stdio.h>

int main(void)
{
	int a = 5, b = 6;

	int max = (a < b) ? b : a;
	int min = (a > b) ? b : a;
	
	printf("max = %d\n", max);
	printf("min = %d\n", min);
	
	return 0;
}
