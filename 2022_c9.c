#include <stdio.h>
#include <math.h>
#define N 4
float sd(float ar[],float mean){
	float summation = 0, standev;
	for(int i = 0;i < N; i++){
	summation += pow(ar[i]-mean,2);
	}
	standev = sqrt(summation/N);
	printf("The required standard deviation is: %f" , standev);
}
int main(){
	float a[N],sum = 0,mean;
	printf("Enter the elements: ");
	for(int i = 0; i < N; i++){
		scanf("%f",&a[i]);
		sum += a[i];
	}
	mean = sum/N;
	sd(a , mean);
	}



