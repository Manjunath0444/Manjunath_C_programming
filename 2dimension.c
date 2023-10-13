#include<stdio.h>
void dd_array()
{
	int a[4][5]={{11,2,3},{22,33.44},{23,45,6,78}};
	printf("%d",a[0][0]);
	printf("size of the array=%d\n",sizeof(a));
	for(int j=0;j<5;j++)
	{
		printf("%d\n",a[0][1]);
		printf("\n");
	}
	{
		for(int j=0;j<5;j++)
		{
			for(int i=0;i<5;i++)
			printf("%d\t",a[i][j]);
			printf("\n");
		}
	}
}
int main()
{
	dd_array();
}
