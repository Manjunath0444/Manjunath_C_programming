#include<stdio.h>
void upper_case(char *str)
{
	int i=0;
	while(*str)
	{
		if (*str>='a' &&   *str<='z')
		{
			*str=*str-32;
		}

		str++;
	}
}
int main()
{
	char str[100];
	printf("enter the string:");
	fgets(str,sizeof(str),stdin);
	upper_case(str);
	printf("uppercase string:%s",str);
}
