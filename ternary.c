#include<stdio.h>
void max_num()
{
	int num1,num2;
	printf("enter the number::");
	scanf("%d%d",&num1,&num2);
	if(num1>num2)
		printf("num1 is greater");
	else
		printf("num2 is  lesser");
}
	int main()
{
	max_num();
}
