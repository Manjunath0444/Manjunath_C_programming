#include<stdio.h>
int main()
{
	FILE *fp;
	int num=12345;
	float f=8900.87;
	char grade ='A';
	char ch;
	char name[20]="Rahul";
	char data[80]="C programming";
	fp=fopen("file2","w");
	if(fp==NULL)
	{
		printf("file not found\n");
	}
	else
	{
		printf("file is found and opened\n");
		printf("cursor position=%lu\n",ftell(fp));
		printf("ch=%c\n",ch);
		fprintf(fp,"%d %f %c %s",num,grade,name,f);
		fclose(fp);
	}
}
