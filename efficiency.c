/*program to find efficiency of worker
author:devi nair
date:20/02/2019*/
#include<stdio.h>
void main()
{
	float time;
	printf("enter time taken by worker");
	scanf("%f",&time);
	if(time>=2 && time<=3)
		printf("worker is said to be highly efficient");
	if(time>=3 && time<=4)
		printf("worker is ordered to improve speed");
	if(time>=4 && time<=5)
		printf("the worker is given training to improve his speed");
	if(time>5)
		printf("the worker is terminated");
}
