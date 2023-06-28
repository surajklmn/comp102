#include <stdio.h>
#include <math.h>
float area(float a, float b, float c);
int main(){
	printf("Enter values for a, b and c:");
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	printf("Area is : %f \n",area(a,b,c));
}

float area(float a, float b, float c){
	float s;
	s = (a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
