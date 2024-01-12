#include<stdio.h>
void display_demo()
{
		int num;
		printf("enter num::");
		scanf("%d",&num);
		printf("num in decimal=%d\n",num);
		printf("num in hexadecimal=%X\n",num);
		printf("num in octal=%o\n",num);

}
	int main()
{
	display_demo();
}
