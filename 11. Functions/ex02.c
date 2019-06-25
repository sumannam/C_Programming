//ex01.c
#include <stdio.h>

int sum(int x, int y);

int main(void)
{
	int answer = 0;
	answer = sum(3, 4);
	printf("%d \n", answer);
	
	return 0;
}

int sum(int x, int y)
{
	int result = 0;
	result = x + y;
	return result;	
}