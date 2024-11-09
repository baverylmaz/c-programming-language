#include<stdio.h>

int main()
{
	int age;
	
	printf("between the ages of 0-2 baby\n");
	printf("between the ages of 3-13 child\n");
	printf("between the ages of 14-21 teenage\n");
	printf("between the ages of 22-64 adult\n");
	printf("age 65 and over old\n");
	
	printf("enter your age:");
	scanf("%d",&age);
	
	if(age>=0 && age<=2)
	{
		printf("you are a baby");
	}
	else if(age>=3 && age<=13)
	{
		printf("you are a child");
	}
	else if(age>=14 && age<=21)
	{
		printf("you are a teenage");
	}
	else if(age>=22 && age<=64)
	{
		printf("you are an adult");
	}
	else if(age>=65)
	{
		printf("you are an old");
	}
	else
	{
		printf("you're not born yet...'");
	}
	return 0;
}