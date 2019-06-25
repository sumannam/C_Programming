// ex08.c
#include <stdio.h>

double square(double x) 
{
    return x*x;
}

int main(void) 
{
    int      y=4;
    double result = square(y);

    printf("square(%d) = %f\n", result);
}


