#include<stdio.h>
int main()
{
	int num;
	printf("enter te number");
	scanf("%d",&num);
	if(num!=0 && num&(num-1)==0)
	{
		printf("power is");
	}
	else
	{
		printf("powis is not");
	}
	return 0;
}
