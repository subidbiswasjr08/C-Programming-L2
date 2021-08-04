///C Program to Call a User Defined Function

#include<stdio.h>
void phase1()
{
	puts("I am phase1");
}
void phase2()
{
	puts("I am phase2");
	phase1();
}
int main()
{
	puts("I am main");
    phase2();
    phase1();
}
