// ex04.c
#include <stdio.h>

int main(void) 
{
	int grade = 4;
	
	switch (grade)
	{
		case 4 :
			printf("A");
		case 3 : 
			printf("B");
		case 2 : 
			printf("C");
		case 1 : 
			printf("D");
		default : 
			printf("Illegal grade");
			break;
	}
	
	return 0;
}