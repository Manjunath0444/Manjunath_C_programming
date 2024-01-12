#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[10]={20,30,34,76};
	int b[20]={30,40,55,66};
	char *p1,*p2;
	p1=a;
	p2=b;
	for(int i=0;*(p1+i)='\0';i++)
	{
	b[i]=a[i];
	}
	printf("%d\n",a);
	printf("%d\n",b);

}
