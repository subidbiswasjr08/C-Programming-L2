///Understanding goto function 2

#include<stdio.h>
int main()
{
	A:puts("A");
	B:puts("B");
	goto D;
	C:puts("C");
	D:puts("D");
	return 0;
}
