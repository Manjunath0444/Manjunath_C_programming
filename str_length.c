#include<stdio.h>
void str_length()
{
	char a[]={"manjunath"};
	int length=0;
	for(int i=0;a[i]!='\0';i++)
	{
		printf("length of the string=%d\n",length);
		length++;
	}
}
	int main()
	{
		str_length();
	}


