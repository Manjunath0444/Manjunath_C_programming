#include<stdio.h>
void demo_rev()
{
	int num,rev,rem,i,j;
	char  a[10]="0x12394578",x;
	int len=0;
	for(i=0;a[i];i++)
	{
		len++;
	}
	printf("length=%d\n",len);
	for(i=0,j=len-1;i<len/2;i++,j--)

	{
		x=a[i];
		a[i]=a[j];
		a[j]=x;
	}
	printf("string is=%s\n",a);	

}		
int main()
{
	demo_rev();
}
