///C String Compare

#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[]="ABCD";
	char str2[]="AbCd";
	char str3[]="ABCD";
	int b;

	b=strcmp(str1,str2);
	printf("strcmp(str1,str2)= %d\n",b);

	b=strcmp(str2,str3);
	printf("strcmp(str2,str3)= %d\n",b);

	b=strcmp(str1,str3);
	printf("strcmp(str1,str3)= %d\n",b);

    return 0;
}
