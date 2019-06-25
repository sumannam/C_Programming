//ex02.c
#include <stdio.h>

#define YELLOW 0
#define RED    1
#define BLUE   2

void main(void)
{
    int color;

    for(color = YELLOW; color <= BLUE; color++) 
	{
        switch(color) 
		{
			case YELLOW : 
				printf(“Yellow\n”); 
				break;
			case RED : 
				printf(“Red\n”); 
				break;
			case BLUE : 
				printf(“Blue\n”); 
				break;
        }
    }
}
