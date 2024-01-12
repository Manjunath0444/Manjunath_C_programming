#include<stdio.h>
void array_demo()
{
		int a[5];
		int i num;
		printf("enter the numberes:");
		scanf("%d",&num);
		printf("a[0]=%d\n",a[0]);
		printf("a[1]=%d\n",a[1]);
		printf("a[2]=%d\n",a[2]);
		for(i=0;i<5;i++)
		{
			printf("%d\n",a[i]);
		}
}
int main()
{
	array_demo();
}
