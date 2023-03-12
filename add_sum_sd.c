#include<stdio.h>
#include<math.h> //for sqrt function
void func(int a, int b, int c, int d, int e, float *sum, float *avg);

//main function
void main()
{
	int a,b,c,d,e;
	float sum, avg, std_dev;

	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	printf("Enter 3rd number: ");
	scanf("%d", &c);
	printf("Enter 4th number: ");
	scanf("%d", &d);
	printf("Enter 5th number: ");
	scanf("%d", &e);

	func(a,b,c,d,e,&sum,&avg);

	printf("The Sum: %f\n", sum);
	printf("The Average: %f\n", avg);

}

//func function
void func(int a, int b, int c, int d, int e, float *sum, float *avg)
{
	*sum = a+b+c+d+e;
	*avg = *sum/5.0;
}
