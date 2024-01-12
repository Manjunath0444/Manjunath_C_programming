#include<stdio.h>
void demo_len()
{

	char a[10]={"Manjunath"};
	char b[15]={"madhukumar sdm"};
	int len=0;
	for(int i=0;a[i];i++)
	{
		printf("length of the string is=%d\n",len);
		len++;
	}
	printf("%d\n",len);

}
int main()
{
	demo_len();
}


