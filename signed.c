#include<stdio.h>
void demo_signed_unsigned()
{
		unsigned int bitmask;
		unsigned int res;
		unsigned int num=115;
		int i=31;
		while(i>=0)
		{
			bitmask=1<<i;
			res=num & bitmask;
			if(res==0)
				printf("0");
			else
				printf("1");
				i--;
		
			}
		printf("\n");
}

	int main()
{
	demo_signed_unsigned();
}

