#include <stdio.h>
int gcd(int a, int b);
int main(){
	int x, y, result;
	printf("Enter two numbers: ");
	scanf("%i %i",&x, &y);
	printf("GCD of %d and %d is %d.\n",x, y, gcd(x,y));


}
int gcd(int a, int b){
	if(b == 0){
		return a;
	}
	else{
	return gcd(b, a % b);
	}

}
