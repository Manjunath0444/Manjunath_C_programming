#include<stdio.h>
int main()
{
	int n;
	int i,j,k;
	printf("enter the num ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
	//		printf("* ");
	//		printf("\n");
		}
		for(k=0;k<n+1;k++)
		{
			printf("*");
			printf("\n");
		}
		return 0;
	}
}
