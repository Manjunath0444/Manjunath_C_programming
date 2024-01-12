#include<stdio.h>
int main()
{
	char arr[]={2,1,5,2,9,6,1};
	int count;
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		count=1;
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count ++;
			}
		}
		printf("sorted array is %d\n",arr[i],count);
	}
}

