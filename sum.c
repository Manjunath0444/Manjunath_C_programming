#include<stdio.h>
void fun( int *,int *,int *,int *,int *);
int main()
{
	int num,a,b,c,d;
	printf("enter the  5 integers :\n");
	scanf("%d%d%d%d",&a, &b, &c, &d);
	fun(&num,&a,&b,&c,&d);
	printf("value is: %d %d %d %d %d\n"num,a,b,c,d);
	return 0;
}
void fun( int *num,int *a,int *b,int *c, int *d)
{ 
	*num=*a + *b + *c + *d;
}

