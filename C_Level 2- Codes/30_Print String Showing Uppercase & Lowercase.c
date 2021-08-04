///C Program to print String Upper & Lower case(input by user)

#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100];
	printf("Enter string: ");
	gets(str);
	printf("The string in uppercase: %s\n",strupr(str));
	printf("The string in lowercase: %s\n",strlwr(str));
	return 0;
}
