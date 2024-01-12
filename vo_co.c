#include<stdio.h>
void vo_co()
{
	char a[]={"davanagere"};
	int i;
	int vol=0,con=0;
	for(i=0;a[i];i++)
	{
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	{
		vol++;
	}
	else
	{
		con++;
	}
}
printf("vol=%d\n con=%d\n",vol,con);
}
int main()
{
	vo_co();
}

