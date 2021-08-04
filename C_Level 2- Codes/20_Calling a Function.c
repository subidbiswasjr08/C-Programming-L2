///C Program Problem on Calling a Function

#include<stdio.h>
void p3(void)
{
	puts("I am p1");
}
void p1()
{
	puts("I am p2");
	p3();
}
int main()
{
	p3();
	p1();
}
