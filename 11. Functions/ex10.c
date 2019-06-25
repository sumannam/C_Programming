// ex10.c
#include <stdio.h>

int fact(int n)
{
  if (n == 1)
     return 1;
  else
     return n * fact (n - 1);
}

int sum (int n)
{
   if (n == 1)
		return 1;
   else 
		return n + sum(n – 1);
}


