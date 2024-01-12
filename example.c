#include<stdio.h>
void main()
{
	int num1=99;
	int num2=88;
	int num3=77;
	int num4=66;
	int num5=55;
	int *ptr[5]={&num1,&num2,&num3,&num4,&num5};
		printf("size of ptr=%lu",sizeof(ptr));
				for(int i=0;i<5;i++)
				{
			 		printf("%d\n",*ptr[i]);
					}
			}
