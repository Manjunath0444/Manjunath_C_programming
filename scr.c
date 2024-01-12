#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 25; i++)
    {
        for (j = 1; j <= 80; j++)
        {
            printf("%c", 1);
        }
	printf("%d%d\n",i,j);
    }
    return 0;
}

