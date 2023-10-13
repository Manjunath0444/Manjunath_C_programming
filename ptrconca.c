#include<stdio.h>
void main()
{
	char a[10]="davangere";
	char b[10]="bangalore";
	int *ptr;
	ptr=a[0];
	ptr=b[0];
	int len=0,i;
	for(int i=0;*(ptr+a[i])!='\0';i++)
	{
		len++;
	}
	for(int i=0;*(ptr+b[i])!='\0';i++)
	{
		a[len+i]=b[i];
	}
a[len+i]='\0';
printf("after the concatenation\n");
printf( "string is=%s\n",a);
printf("string is=%s\n",b);
}

