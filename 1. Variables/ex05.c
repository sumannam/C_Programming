// ex05.c
#include <stdio.h>

int main(void) 
{
	/* a is printed */
	printf(“%c”, ‘a’);
	
	/* ABC is printed */
	printf(“%c%c%c”, ‘A’, ‘ B’, ‘C’); 
	
	/* a is printed */
	printf(“%c”, 97);
	
	/* b is printed */
	printf(“%c”, ‘a’+1); 
	
	/* 97 is printed */
	printf(“%d”, ‘a’); 
}
