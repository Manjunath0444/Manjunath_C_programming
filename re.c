#include<stdio.h>
int fun();
	int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	if(n>=10 && n<=90)
		return n;
	else
		return(n+32);
}
