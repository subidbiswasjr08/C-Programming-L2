///C Program to understand Increment/Decrement
/*
#include<stdio.h>
int main()
{
	int sweta=50, bis=5;
	bis=++sweta;
	printf("sweta:\t%d \nbis:\t%d",sweta, bis);
	bis=sweta--;
	printf("\n\nsweta:\t%d \nbis:\t%d",sweta, bis);
	return 0;
}*/
#include<stdio.h>

int main()
{
  int number;
  positive:
  printf("Enter any positive number: ");
  scanf("%d", &number);
  if(number>0)
  {
    printf("Number %d is positive!", number);
  }
  else
  {
    goto positive;
  }
}
