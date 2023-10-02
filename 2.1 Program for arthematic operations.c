#include<stdio.h>
void main()
{
	int a,b,sum,sub,mult,div;
	printf("Enter two numbers to perform arthematic operations");
	scanf("%d%d",&a,&b);
	sum=a+b; //addition operator
	sub=a-b; //subtraction operator
	mult=a*b; //multiplication operator
	div=a/b; //duvision operator
	printf ("\n%d+%d=%d",a,b,sum);
	printf("\n%d-%d=%d",a,b,sub);
	printf("\n%d*%d=%d",a,b,mult);
	printf("\n%d/%d=%d",a,b,div);
}