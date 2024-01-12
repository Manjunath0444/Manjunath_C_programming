#include<stdio.h>
void demo_swap()
{
	int num1=99,num2=55,num3;
	printf("before summ num1=%d\n num2=%d\n  num1,num2");
	num1=num1+num2;
	num2=num2+num1;
	num3=num1+num2;
	printf("after sum num1=%d\n, num2=%d\n,num3");
}
int main()
{
	demo_swap();
}
