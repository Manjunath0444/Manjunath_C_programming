#include<stdio.h>
 void countevenodd(int arr[],int size,int *evencount,int *oddcount)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			(*evencount)++;
		}
		else
		{
			(*oddcount)++;
		}
	}
}
	int main()
	{
		int arr[]={1,2,3,4,5};
		int size=sizeof(arr)/sizeof(arr[0]);
		int evencount=0;
		int oddcount=0;
		countevenodd(arr,size&evencount &oddcount);
		printf("number of odd elemts:%d\n",oddcount);
		return 0;
	}
