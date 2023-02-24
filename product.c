#include <stdio.h>
int main()
{
	float a;
	float b;
	float product;
	printf("Enter a floating point number: ");
	scanf("%f",&a);
	printf("Enter another floating point number: ");
	scanf("%f",&b);
	product = (a*b);
	printf("Product of two entered floating point numbers is:%.3f\n",product);
return 0;
}
