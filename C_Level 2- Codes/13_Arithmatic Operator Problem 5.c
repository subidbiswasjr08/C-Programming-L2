//C Program to understand Arithmetic Operators(Inc/Dec)

#include<stdio.h>
int main()
{
	int swe=50, ta;
	swe+=swe;
	--swe;
	ta=swe+10;
	ta=swe--;
	ta++;
	printf("swe: %d \nta: %d", swe, ta);
	return 0;
}

