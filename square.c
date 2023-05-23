#include <stdio.h>
int square(int a);
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The square of %d is %d\n", n, square(n));
}

int square(int a){
	return a*a;
}
