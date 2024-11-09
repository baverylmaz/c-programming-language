#include<stdio.h>

// the sum of the digits and the number of digits...

int main()
{
	
	int num,digit=0, sum=0;
	
	printf("enter the number:");
	scanf("%d",&num);
	
	do
	{
		sum+=(num%10);
		digit++;
		num=num/10;
	}
	while(num>0);
	printf("the sum of the digits is %d and %d digits",sum,digit);
	
	
	return 0;
}