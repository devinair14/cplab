/*program to find youngest of three
author:devi nair
date:20/02/2019*/
#include<stdio.h>
void main()
{
	int age_ram,age_shyam,age_ajay;
	printf("enter age of ram,shyam and ajay");
	scanf("%d%d%d",&age_ram,&age_shyam,&age_ajay);
	if(age_ram<age_shyam && age_ram<age_ajay)
		printf("ram is youngest");
	if(age_shyam<age_ram && age_shyam<age_ajay)
		printf("shyam is youngest");

	if(age_ajay<age_ram && age_ajay<age_shyam)
		printf("ajay is youngest");
}


