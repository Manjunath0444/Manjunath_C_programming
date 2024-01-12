#include<stdio.h>
void main()
{
	int i;
	int num=20;
	int count=0;
	for(i=1;i<=20;i++)
	{
		if(i%num==0)
		{

		count =count+1;
		}
	}
	printf("%d\n",count);
}
