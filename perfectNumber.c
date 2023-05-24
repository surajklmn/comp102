#include <stdio.h>
int isPerfectNumber(int a){
	int sum = 0, i;
	for(i = 1; i < a; i++){
		if(a%i == 0){
			sum += i;
		}
	}
	if(sum == a){
	return 1;}
	else return 0;
}
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(isPerfectNumber(n)){
		printf("Yes \n");
	}
	else {
	printf("No \n");
	}
}
