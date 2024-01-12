#include<stdio.h>
void mx_mi()
{
	int a[10]={11,33, 55, 77, 88, 99,21,13,54};
	int max,i;
	int min=a[0];
	for(i=0;i<10;i++)
		{
			if(a[i]>max)
			{
                         max=a[i];
			}
			else
				printf("maximum");
			for(i=0;i>10;i++)
			{
				if(a[i]<min)
				{
					min=a[i];
				}
				else
					printf("minimum");
}
}
}
int main()
{
	mx_mi();
}

