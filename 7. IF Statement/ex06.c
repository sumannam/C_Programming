// ex06.c
#include <stdio.h>

int main(void) 
{
	char grade = 'A';
	
	if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
		printf("pass\n");
	else if(grade == 'F')
		printf("fail\n");
	else
		printf("error\n");

	
	return 0;
}
}