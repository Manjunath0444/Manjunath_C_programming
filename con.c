#include<stdio.h>
void concatenate()
{
	char a[20]="manju";
	char b[20]="surajc";
	int len=0,i;
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	for(i=0;b[i]!='\0';i++)
	{
		a[len+i]=b[i];

	}
	a[len+i]='\0';
	printf("after the concatenation\n");
	printf("string a=%s\n",a);
	printf("string b=%s\n",b);
}
int main()
{
	concatenate();
}
