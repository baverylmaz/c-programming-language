#include<stdio.h>

int main()
{	
	int n,i;
	float num[100],sum=0.0,avg;
	printf("enter the number of elements:");
	
	scanf("%d",&n);
	
	while(n>100 || n<1)
	{
		printf("error! number should be in the range of (1 to 100.)\n");
		printf("enter the number again:");
		scanf("%d",&n);
	}
	
	for(i=0; i<n; ++i)
	{
		printf("enter number %d:",i+1);
		scanf("%f",&num[i]);
		sum+=num[i];
	} 
	avg=sum/n;
	printf("the average is%.2f",avg);	
	return 0;
}