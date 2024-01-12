#include<stdio.h>
int main()
{
	char num[20]="manjunath";
	char *ptr;
	ptr=&num[0];
	int len=0;
	for(int i=0;*(ptr+i)!='\0';i++)
		len++; printf("string length is =%d\n",len);
	return 0;
}
