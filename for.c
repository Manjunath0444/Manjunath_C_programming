#include<stdio.h>
#include<unistd.h>
void demo_for()
{
	int i=10,num;
	printf("enter thr number::");
	scanf("%d",&num);
	for(i=0;i<30;i++)
	{
		printf("in a loop\n");
		printf("i =%d\n",i);
		i++;
		sleep(1);
	}
}
	int main()
	{
		demo_for();
	}
