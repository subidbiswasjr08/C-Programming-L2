///C String Copy

#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[20]="\tI am Coder\n";
	char b[20];
	strcpy(b,a);
	printf(b);
	return 0;
}
