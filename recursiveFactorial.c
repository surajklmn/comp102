#include <stdio.h>
int fact(int a);
int main(){
	int x;
	printf("Enter a number: ");
	scanf("%i",&x);
	printf("Factorial of the entered number is %i.\n",fact(x));

}

int fact(int a){
	if (a == 1){
		return 1;
	}
	else
		return a * fact(a-1);
}
