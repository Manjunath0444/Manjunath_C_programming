#include<stdio.h>
void split_demo()
{
	char a[]="rama is a good boy";
	int len;
	for(int i=0;a[i];i++)
	{
		len++;
		printf("length is=%c\n",len);
	}
}
int main()
{
	split_demo();
}
