#include<stdio.h>
void sum1_array()
{
		int a[]={11,22,44};
		int sum=0;
		int length=sizeof(a)/sizeof(a[0]);
		for(int i=0;i<length;i++)
		{
			sum =sum+a[i];
		}
		printf("%d\n",sum);
}
int main()
{
	sum1_array();
}

