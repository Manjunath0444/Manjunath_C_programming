#include<stdio.h>
int mymul(int num1,int num2)
{
	int num3;
	num3=num1*num2;
	return num3;
}
int mysum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int mymax( int n1,int n2)
{
	if(n1>n2)
		return n1;
	else
		return n2;
}
int mymax_3(int x,int y,int z)
{
	if(x>y && x>z)
		return z;
	else if(y>x && y>z)
		return y;
	else
		return z;
}
int main()
{
	int r1,r2,r3,r4,r5;
	r1=4;
	r2=6;
	r3=mymul(r1,r2);
	r4=mysum(r1,r2);
	r5=mymax(r3,r4);
	printf("%d\n",r3);
	printf("%d\n",r4);
	printf("%d\n",r5);
}

