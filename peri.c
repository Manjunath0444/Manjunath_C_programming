#include<stdio.h>
void peri(int, float *,float *);
int main()
{
	int radius;
	float area;
	float perimeter;
	printf("enter the radius:\n");
	scanf("%d",&radius);
	peri(radius,&area,&perimeter);
	printf("area is %f\n",area);
	printf("perimeter is %f\n",perimeter);
	 return 0;
}
void peri (int radius,float *area,float *perimeter)
	{
		*area=3.14*radius*radius;
		*perimeter=2*3.14*radius;
	}
