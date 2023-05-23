#include <stdio.h>
unsigned long long factorial(int a);
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Factorial is %llu \n", factorial(n));
	
}

unsigned long long factorial(int a){

	unsigned long long fact = 1;
	if(a == 0 || a == 1){
		return 1;
	}
	else{
	for(int i = a; i > 1; i--){
		fact = fact*i;
	}
	}
	return fact;
}
