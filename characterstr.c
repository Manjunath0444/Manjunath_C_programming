#include<stdio.h>
#include<string.h>
int main()
{
	char a[50][100]={"Rahul:Dravid:bangalore:90909080","sachin:tendulkar:mumbai:990855788"};
	char *token1;
	for(int i=0;i<2;i++)
	{
		token1=strtok(a[i],":");
		while(token1!=NULL)
		{
			printf("token1=%s\n",token1);
			token1=strtok(NULL,":");
		}
	}
}

