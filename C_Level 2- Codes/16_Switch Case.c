// C program using Switchcase

#include<stdio.h>
int main()
{
	int x;
	printf("Press 1 or 2 or 3: ");
	scanf("%d", &x);

	switch(x)
	{
		case 1: printf("\n1 pressed!\n");
				printf("\nI print Sweta");
				break;

		case 2: printf("\n2 pressed!\n");
				printf("\nI print Biswas");
				break;

		case 3: printf("\n\3 pressed!\n");
				printf("\nI print nothing");
				break;

		default: printf("\nInvalid Input");
	}
	return 0;
}
