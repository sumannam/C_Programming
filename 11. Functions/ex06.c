// ex06.c
#include <stdio.h>

float abs(float x)
{
    if(x>=0.0) 
        return x;       	
   else 
        return –x;
} 

void main(void)
{
    float y = -2.4;
    printf("%f\n", y, abs(y));
}

