#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define PI 3.14

int main(){
     int a,b,c,d,e;
	 float arithmetic,area,distance,x1,x2,delta,volume;
     int option,y1,y2;
     int num,i,sum = 0;
     int division,remain,number,max,min,radius;
     int num1,num2,length,width,perimeter;
     double result;

printf("options:\n\n");
printf("1:startup\n2:arithmetic average\n3:summation of a series\n");
printf("4:sum of the figures\n5:positive or negative\n6:maximum\n");
printf("7:minimum\n8:divisible\n9:square of a number\n");
printf("10:exponential expressions\n11:area and perimeter of a rectangle");
printf("12:distance between two points\n13:roots of the equations\n14:sphere volume\n\n");

printf("enter a option:");
scanf("%d",&option);
printf("\n\n");

switch(option){
    case 1:
    printf("hello world");
    break;

    case 2:
	printf("enter 5 numbers:");
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	arithmetic=(a+b+c+d+e)/5.0;
	printf("the arithmetic average of the numbers you entered %.5f", arithmetic);
	break;

	case 3:
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The sum of the series is: ");
    for(i = 1; i <= num; i++)
    sum = sum + i;
    printf("%d", sum);
    break;

    case 4:
    printf("enter a number: ");
    scanf("%d",&number);

    division=number/1000;
    sum+=division;
    remain=number%1000;

    division=remain/100;
    sum+=division;
    remain=remain%100;

    division=remain/10;
    sum+=division;
    remain=remain%10;

    division=remain/1;
    sum+=division;
    remain=remain%1;

    printf("sum of the figures: %d",sum);
    break;

    case 5:
    printf("enter a number:");
    scanf("%d",&a);

    if(a==0)
    {
	printf("zero is not positive or negative");
    }
    else if(a>0)
    {
	printf("positive");
    }
    else
    {
	printf("negative");
    }
    break;

    case 6:
    printf("enter a three number:");
	scanf("%d %d %d",&a,&b,&c);

	max=a;
	if(a>b && a>c)
	{
		printf("maximum value is %d",a);
	}
	else if(b>a && b>c)
	{
		printf("maximum value is %d",b);
	}
	else
	{
		printf("maximum value is %d",c);
	}
	break;

	case 7:
    printf("enter a three number:");
	scanf("%d %d %d",&a,&b,&c);

	min=a;
	if(a<b && a<c)
	{
		printf("minimum value is %d",a);
	}
	else if(b<a && b<c)
	{
		printf("minimum value is %d",b);
	}
	else
	{
		printf("minimum value is %d",c);
	}
	break;

	case 8:
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num1 % num2 == 0)
	{
        remain = 1;
    } else {
        remain = 0;
    }

    if(remain)
	{
        printf("%d is divisible by %d", num1, num2);
    } else {
        printf("%d is not divisible by %d", num1, num2);
    }
    break;

    case 9:
    printf("enter a number:");
	scanf("%d",&a);

	if("a!=0")
	{
		printf("square of number is...%d",a*a);
	}
	break;

	case 10:
    printf("enter a value:");
	scanf("%d",&a);


	for(i=1; i<=10; i++)
	{
		result=pow(a,i);
		printf("%d ^ %d = %.2f\n",a,i,result);
	}
	break;

	case 11:
    printf("enter a length and width values:\n");
	scanf("%d %d",&length,&width);

	area=length*width;
	perimeter=2*(length+width);
	printf("area is %.2f\n",area);
	printf("perimeter is %d",perimeter);
	break;

	case 12:
    printf("enter a x1 value: ");
	scanf("%d",&x1);

	printf("enter a y1 value: ");
	scanf("%d",&y1);

	printf("enter a x2 value: ");
	scanf("%d",&x2);

	printf("enter a y2 value: ");
	scanf("%d",&y2);

	distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

	printf("distance between the said points: %.4f",distance);
	break;

	case 13:
    printf("enter the value of equation a:");
	scanf("%d",&a);
	printf("enter the value of equation b:");
	scanf("%d",&b);
	printf("enter the value of equation c:");
	scanf("%d",&c);

	delta=b*b-4*a*c;
	x1=(-b+(sqrt(delta)))/2*a;
	x2=(-b-(sqrt(delta)))/2*a;

	printf("the first root of the equation is %f, the second root %f.",x1,x2);
	break;

	case 14:
    printf("enter the radius of the sphere:");
	scanf("%d",&radius);

	volume=(4/3.0)*PI*(radius*radius*radius);
	printf("the volume of the sphere is %f.",volume);
	break;

	default:
    printf("please choose one of the options on the list...");
    break;
}
return 0;
}

