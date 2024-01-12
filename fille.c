#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("file1","a");
	if(fp==NULL)
	{
		printf("file not found");
	}
	else
	{
		printf("file present and opened");
		fclose(fp);
	}
}
