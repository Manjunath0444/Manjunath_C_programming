#include<stdio.h>
#include<string.h>
typedef struct emp
{
	int  eid;
	float sal;
	char name[20];
	char email[20];
}emp;
int main()
{
	emp e1;
	e1.eid=1233;
	e1.sal=3445.7;
	strcpy(e1.name,"rahul");
	strcpy(e1.email,"rahul@gmail.com");
	printf("enter the employ id=%d\n",e1.eid);
	printf("enter the employ sal=%f\n",e1.sal);
	printf("enter the employ name=%s\n",e1.name);
	printf("enter the employ email=%s\n",e1.email);

}
