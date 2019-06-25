//ex01.c
#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main() 
{
	/* 1도에 해당하는 radian값 */
	double r = PI / (2*90);
	int    i;

	for(i=0; i<=90; i+=5)
	{
		printf("cos(%d) = %f\t", i, cos(r*i));
		printf("sin(%d) = %f\t", i, sin(r*i));
		printf("tan(%d) = %f\n", i, tan(r*i));
	}
}
