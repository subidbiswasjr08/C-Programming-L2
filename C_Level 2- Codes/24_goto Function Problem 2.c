///Understanding goto function 3

#include<stdio.h>
int main(void)
{
	A:puts("A");
	B:puts("B");
	C:puts("C");
	goto A;
	D:puts("D");
	return 0;
}
