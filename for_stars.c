#include<stdio.h>

int main()
{
	int row,col;
	int n;
	
	printf("enter n value:");
	scanf("%d",&n);
	
	for(row=0; row<=n; row++)
	{
		for(col=0; col<=row; col++)
		{
			printf("*");
		}
		printf("\t\t\n");
	}
	
	
	for(row=0; row<=n; row++)
	{
		for(col=n; col>=row; col--)
		{
			printf("*");
		}
		printf("\t\t\n");
	}
	return 0;
}