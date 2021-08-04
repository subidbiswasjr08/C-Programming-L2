///C Program to Show Address of Variable Using Pointer

#include<stdio.h>
int main()
{
	int*pc,c;

	c=10;
	printf("Address of c: %p\n",&c);
	printf("Value of c: %d\n\n",c);

	pc=&c;
	printf("Address of pointer pc: %p\n",pc);
	printf("Value of pointer pc: %d\n\n",*pc);
	return 0;
}
