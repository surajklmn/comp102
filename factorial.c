#include <stdio.h>
int main(){
	int n;
	int fact = 1;
	printf("Enter a number: ");
	scanf("%i",&n);
	if(n == 0){
		printf("Factorial of 0 is 0\n");
	}
	else{
		for(int i = n;i > 1; i--){
			fact = fact * i;


		}
		printf("Factorial of the entered number is %i\n",fact);
	}
}
