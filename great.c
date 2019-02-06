/*program to find greatest of 3 numbers
author:devi nair
date:06/02/2019*/
#include<stdio.h>
void main()
{
	int number1,number2,number3;
	printf("enter three integer numbers");
	scanf("%d%d%d",&number1,&number2,&number3);
        /*to find which number is greatest*/
	if(number1>number2)
	{
	   if(number1>number3)
	      printf("%d is greater than %d and %d",number1,number2,number3);
	   else
	      printf("%d is greater than %d and %d",number3,number2,number1);
	}
	else
	  { if(number2>number3)
	      printf("%d is greater than %d and %d",number2,number1,number3);
	   else
	      printf("%d is greater than %d and %d",number3,number1,number2);
	  }		
}
