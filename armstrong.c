/*program to find if a mnumberis armstrong number or not
author:devi nair
date:13/02/2019*/
#include<stdio.h>
void main()
{
	int number,cube=0,remainder,num;
	printf("enter number");
	scanf("%d",&number);
	num=number;
	while(number>0)
	{
		remainder=number%10;
		cube=cube+remainder*remainder*remainder;
		number=number/10;
	}
	if(cube==num)
		printf("%d is amrstrong number",num);
	else
		printf("%d is not armstrong number",num);
}
