// ex06.c
#include <stdio.h>

void main(void)
{
	int i, j, k;

	for (i = 0; i <= 7; ++i )
	{
	    for(j = 0; j <= 7; ++j )
	    {
	        for (k = 0; k <= 7; ++k )
			{
 	            if (i + j + k == 7 )
		      	printf("%d %d %d\n", i, j, k );
			}
	    }
	}
	return;
}
