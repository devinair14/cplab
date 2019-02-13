/*program to find reverse of a number
author:devi nair
date:13/02/2019*/
#include<stdio.h>
void main()
{
	int number,reverse=0,remainder,num;
	printf("enter number");
	scanf("%d",&number);
	num=number;
	while(number>0)
	{
		remainder=number%10;
		reverse=reverse*10+remainder;
		number=number/10;
	}
	printf("%d is the reverse of %d",reverse,num);
}
