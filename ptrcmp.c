#include<stdio.h>
void main()
{
	char a[10]="manju";
	char b[10]="manjunath";
	int *ptr;
	ptr=&a[0];
        int len=0;
	for(int i=0;a[i];i++)
	len++;
	printf("length is %d\n",len);
	for( int j=0;b[j];j++)
		len++;
	printf("length is %d\n",len);
	for(int i=0;b[i];i++)
	{
	if(a[i]>b[i])
		printf("true");
	else
		printf("false");
}
printf("\n");
}

