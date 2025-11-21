#include<stdio.h>
void addition(inta,intb);
int main()
{
	int a,b;
	printf("\n enter a and b values");
	scanf("%d%d",&a,&b);
	addition(a,b);//ca
	return 0;
}
    void addition(int x,int y);function definition
{
 	int c;
	c=x+y;
	printf("\n%d",c);
}

