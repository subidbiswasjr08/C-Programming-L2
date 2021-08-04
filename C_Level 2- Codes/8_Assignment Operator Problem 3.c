//C Program to understand Assignment Operators(3)

#include<stdio.h>
int main()
{
	int x=4, y=8;
	y=x+y; //12
	printf("%d %d\n",x,y);
	x=y; //12
	printf("%d %d\n",x,y);
	y*=x; //144
	printf("%d %d\n",x,y);
	y=y%x; //0
	printf("%d %d\n",x,y);
	return 0;
}
