#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num,originalnum,remainder,result=0;
	printf("enter the 3 integers::");
	scanf("%d",&num);
	originalnum=num;
	while(originalnum!=0)
	{
		remainder=originalnum%10;
		result +=remainder*remainder*remainder;
		originalnum/=10;
	}
	if(result==num)
		printf("is a armstrong\n");
	else
	 	printf("is not apalindrome\n");
}
