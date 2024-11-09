#include<stdio.h>

void swap(int *x, int *y){
	
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int num1,num2;
	
	printf("enter first number:");
	scanf("%d",&num1);
	
	printf("enter second number:");
	scanf("%d",&num2);
	
	printf("before swapping: num1= %d, num2= %d\n",num1,num2);
	
	swap(&num1, &num2);
	
	printf("after swapping: num1= %d, num2= %d",num1,num2);
	
	return 0;
	
}