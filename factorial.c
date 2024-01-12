#include<stdio.h>
void fun(int, int);
int main()
{
	int n,fact;
	printf("enter the number:\n");
	scanf("%d",&n);
	fun(n,fact);
	printf("factorial is:",fact);
	return 0;
}
void fun(int n,int fact)
{
	fact=n*(n-1)/2;
	printf("fact is %d\n:",fact);
}

