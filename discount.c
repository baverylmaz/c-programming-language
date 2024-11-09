#include<stdio.h>

int main()
{
	float t;
	printf("please enter the product price:");
	scanf("%f",&t);
	
	if(t>=0 && t<=50)
	{
		t=t-((t/100)*10);
		printf("discount version %.2f",t);
	}
	
	else if(t>50 && t<=100)
	{
		t=t-((t/100)*20);
		printf("%.2f",t);
	}
	
	else if(t>100)
	{
		t=t-((t/100)*30);
		printf("discount version %.2f",t);
	}
	
	else
	{
		printf("error");
	}
	return 0;
}