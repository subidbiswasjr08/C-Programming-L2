///Understanding goto function 1

#include<stdio.h>
int main()
{
    goto N;
	printf("Hello");
	printf("World");
	N:printf("Mars");
	return 0;
}
