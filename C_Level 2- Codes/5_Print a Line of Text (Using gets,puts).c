//C prog to print a line of text gets puts

#include<stdio.h>
int main()
{
	char array[50];
	printf("Your name: ");
	gets(array); //function to read string from user
	printf("My name is: ");
	puts(array);
	return 0;
}
