#include <stdio.h>
float average(int a[], int b);
int main(){
	int n;
	printf("Enter a number of elements: ");
	scanf("%d",&n);
	int numbers[n];
	printf("Enter numbers: ");
	for(int i = 0;i < n;i++){
	scanf("%d",&numbers[i]);
	}
	printf("Average is: %.2f \n", average(numbers,n));

}

float average(int a[], int b){
	float sum = 0;
	for(int i = 0; i < b; i++){
	sum += a[i];
	}
	return (float)sum/b;


}
