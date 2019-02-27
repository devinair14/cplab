/*program to find whether area of rectangle is greater than perimeter
author:devi nair
date:20/02/2019*/
#include<stdio.h>
void main()
{
	int length,breadth;
	float area,perimeter;
	printf("enter length and breadth");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	perimeter=2*(length=breadth);
	if(area>perimeter)
	{
	printf("area of rectangle with sides %d and %d is greater than perimeter",length,breadth);
	}
	else
	{
		printf("area of rectangle with sides %d and %d is less than perimeter",length,breadth);
	}
}
		
