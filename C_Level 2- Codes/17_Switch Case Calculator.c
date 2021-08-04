//C program Switchcase calculator

#include<stdio.h>
int main(void)
{
	int num1,num2;
	int add,sub,pro;
	float div,mod;
	char value;

	printf("\tCALCULATOR\n");
	printf("\nEnter 1st number: ");
	scanf("%d",&num1);
	printf("\nEnter 2nd number: ");
	scanf("%d",&num2);
	printf("__________________");
	printf("\nSelect an operation: (+ - * / %%): ");
	scanf(" %c",&value);

	add= num1+num2;
	sub= num1-num2;
	pro= num1*num2;
	div= num1/num2;
	mod= num1%num2;

	switch(value)
	{
		case '+': printf("%i + %i = %i",num1,num2,add);
				  break;

		case '-': printf("%i - %i = %i",num1,num2,sub);
				  break;

		case '*': printf("%i * %i = %i",num1,num2,pro);
				  break;

		case '/': printf("%i / %i = %.2f",num1,num2,div);
				  break;

		case '%': printf("%i %% %i = %.2f",num1,num2,mod);
				  break;

		default: printf("\nInvalid Input");
	}
	return 0;
}
