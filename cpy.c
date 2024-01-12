#include<stdio.h>
void mystrcpy(char dis[],char sou[])
{
	int i;
	for(i=0;sou[i]!='\0';i++)
	{
		dis[i]=sou[i];
	}
	dis[i]='\0';
}
int main()
{
	char a[9]="abg";
	char b[10]="manjun";
	int y;
	printf("before the copy is:");
	printf("a=%s\n",a);
	printf("b=%s\n",b);
	mystrcpy(a,b);
	printf("after the copy:");
	printf("a=%s\n",a);
	printf("b=%s\n",b);

}


