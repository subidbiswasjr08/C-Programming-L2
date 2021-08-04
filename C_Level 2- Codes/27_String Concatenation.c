///C String Concatenation

#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[20]="\n\tI am Coder";
	char b[]="\n\tAnd I Code";
	strcat(a,b);
	puts(a);
	return 0;
}
