// ex03.c
#include <stdio.h>

int main(void) 
{
	int grade = 4;
	
	switch (grade) 
	{
		case 'A' : 
		case 'B' : 
		case 'C' :
		case 'D' : 
			printf("pass\n"); 
			break; 
		case 'F' : 
			pritnf("fail\n"); 
			break;
		default : 
			printf("error\n"); 
			break;        
	}
	
	return 0;
}