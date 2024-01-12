#include<stdio.h>
void demo_while()
{
	int i,num;
	printf("enter the numbrer");
	scanf("%d",&num);
	while(i<num)
	{
		printf("in awhile loop\n)");
		printf("i=%d\n",i);
	}
}
int main()
{
	demo_while();
}



