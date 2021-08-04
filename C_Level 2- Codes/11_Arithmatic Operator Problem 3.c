///C Program to understand Assigning Arithmetic Operators

#include<stdio.h>
int main(void)
{
    int joker=100, hospital=10;
    hospital=++joker;/** Value of joker=100 will be Pre Incremented
    & then taken by hospital as the incremented value.**/
    printf("hospital = %i  and  joker = %i\n",hospital,joker);

    hospital=--joker;/** Value of joker=101 will be Pre Decremented
    & then taken by hospital as the decremented value.**/
    printf("hospital = %i  and  joker = %i\n",hospital,joker);
    return 0;
}
