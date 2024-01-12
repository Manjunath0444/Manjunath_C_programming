#include<stdio.h>
void display_char()
{
	char data='A';float f1;double d1;
	printf("data=%c\n",data);
	printf("data=%d\n",data);
	data=data+5;
	printf("data=%c\n",data);
	printf("data=%d\n",data);
	printf("size of data=%ld\n",sizeof(data));
	printf("size of data=%ld\n",sizeof(f1));
	printf("size of data=%ld\n",sizeof(d1));
	
}
	int main()
{
	display_char();
}

