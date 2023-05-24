#include <stdio.h>
#include <math.h>
int main(){

	int n, digits = 0, sum = 0, temp;
	printf("Enter a number: ");
	scanf("%d", &n);
	 temp = n;
	//Count the digits of enter number
	while(temp != 0){
		temp /= 10;
		digits++;
	}
	//Now raise to the power and sum
	temp = n;
	while(temp != 0){
		int digit = temp%10;
		sum += pow(digit, digits);
		temp /= 10;
	}
	if(sum == n){
		printf("Yes \n");
		}

	else {
		printf("No \n");
	}
}
