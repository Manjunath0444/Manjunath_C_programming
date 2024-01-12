#include<stdio.h>
void printbinary(unsigned int num)
{
	unsigned int res;
	unsigned int bitmask=16;
	res=num & bitmask;
	if(res==0)
		printf("0");
	else
		printf("1");
}
int main()
{
	unsigned int num=115;
	unsigned int y=~(1<<12);
	printbinary(num);
	num=num |y;
	printbinary( num);
}

