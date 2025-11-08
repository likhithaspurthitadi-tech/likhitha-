#include<stdio.h>
#include<math.h>
int main()
{
	double num,root;
	printf("enter the integer number");
	scanf("%f",&num);
	root = sqrt(num);
	printf("\n the square root of %.21f is %.21f",num,root);
	return 0;
}
