#include<stdio.h>
void main()
{
	int num[20]={90,24,45,6,73,44,66,89,99,100};
	int *ptr;
	ptr=&num[0];
	int max;
	max=*ptr;
	for(int i=0;i<10;i++)
	{
		if(*(ptr+i)>max)
			max=*(ptr+i);
	}
	printf("max=%d\n",max);
}

