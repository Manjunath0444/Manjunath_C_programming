#include<stdio.h>
void main()
{
	int num,rev_num=0,rem,tempnum;
	printf("enter the  numbers\n::");
	scanf("%d",&num);
	while(num)
	{
		rem=num%10;
		rev_num=rev_num*10+rem;
		num=num/10;
	}
	printf("reversed number is %d\n",rev_num);
tempnum=num;
if (tempnum==rev_num)

	printf("it is a palindrome\n");
else

	printf("it is not a palindrome\n");
}

