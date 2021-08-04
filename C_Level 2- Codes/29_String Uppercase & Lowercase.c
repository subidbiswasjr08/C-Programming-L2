///C Program to print String Uppercase & Lowercase

#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[]="i aM A c pRogRAmMeR";
	printf("The string in uppercase: %s\n",strupr(str));
	printf("The string in lowercase: %s\n",strlwr(str));
	return 0;
}
