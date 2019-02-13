/*program to find if number is palindrome
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
	
	if(reverse==num)
		printf("%d is palindrome",num);
	else
		printf("%d is not palindrome",num);
}
