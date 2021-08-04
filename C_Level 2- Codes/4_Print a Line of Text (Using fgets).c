//C prog to read a line of text fgets

#include<stdio.h>
int main()
{
	char array[50];
	printf("Your name: ");
	fgets(array,sizeof(array),stdin);
	printf("my name is: ");
	puts(array);
	return 0;
}
