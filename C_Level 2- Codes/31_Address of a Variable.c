///C Program to Show Address of a Variable

#include<stdio.h>
int main()
{
	int x=10;
	printf("Variable: %d\n",x);

	printf("The address of variable: %p\n", &x);
	return 0;
}
