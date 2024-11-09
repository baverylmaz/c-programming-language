#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int firstnumber=1;
	int secondnumber=1;
	int i;
	
	printf("%d %d ",firstnumber,secondnumber);
	
	for(i=0; i<12; i++)
	{
		int temp=secondnumber;
		secondnumber+=firstnumber;
		firstnumber=temp;
		printf("%d ",secondnumber);
	}
	return 0;
}