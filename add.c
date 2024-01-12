#include<stdio.h>
void demo_add()
{
	int num1,num2,sum;
	printf("enter the two integer number:");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("%d +%d=%d",num1,num2,sum);
}
int main()
{
	demo_add();
}

