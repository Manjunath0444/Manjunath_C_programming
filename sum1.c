#include <stdio.h>

void fun(int *,int *, int *, int *, int *, int *);
int main()
{
    int num,avg, a, b, c, d;
    printf("Enter 5 integers:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    fun(&num,&avg,&a, &b, &c, &d);
    printf("Values after function call:%d %d\n",avg, num);
    return 0;
}

void fun(int *avg,int *num, int *a, int *b, int *c, int *d)
{
    *num = *a + *b + *c + *d;
    *avg=*num/4;
}

