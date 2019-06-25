//ex02.c
#include <stdio.h>

int main() 
{
    char c;
    scanf("%c", &ch);
	
	if ('0' <= c && c <= '9') 
		printf("숫자\n");
	else if ('A' <= c && c <= 'Z') 
		printf("대문자\n");
	else if ('a' <= c && c <= 'z')  
		printf("소문자\n");
	else 
		printf("그외 문자\n"); 

    return 0;
}
