#include<stdio.h>
#define PI3.14
int main()
{
	float PI ,radius,area;
	printf("enter radius");
	scanf("%f",&radius);
	area =PI*radius*radius;
	printf("\n the area of circle:%.2f",area);
	return 0;
}
