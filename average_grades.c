#include<stdio.h>

int main()
{
	
	int mid1, mid2, final;
	float averageclass;
	float averageuni;
	
	printf("enter your first midterm note:");
	scanf("%d",&mid1);
	printf("enter your second midterm note:");
	scanf("%d",&mid2);
	printf("enter your final note:");
	scanf("%d",&final);
	printf("enter your university average:");
	scanf("%f",&averageuni);
	
	averageclass=(mid1*3/10.0+mid2*3/10.0+final*4/10.0);
	
	if(averageclass>=90)
	{
		printf("your letter grade is AA and your course average is:%f",averageclass);
	}
	else if(averageclass>=85 && averageclass<90)
	{
	    printf("your letter grade is BA and your course average is:%f",averageclass);	
	}
	else if(averageclass>=80 && averageclass<85)
	{
		printf("your letter grade is BB and your course average is:%f",averageclass);
	}
	else if(averageclass>=75 && averageclass<80)
	{
		printf("your letter grade is CB and your course average is:%f",averageclass);
	}
	else if(averageclass>=70 && averageclass<75)
	{
		printf("your letter grade is CC and your course average is:%f",averageclass);
		if(averageuni<2.5)
		{
			printf("you should take the class again because your average is low.");
		}
	}
	else
	{
		printf("you failed class.");
	}
	return 0;	
}