#include <stdio.h>
int fibonacci(int n){
	if(n==0 || n==1){
		return n;
	}
	else{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	for(int i = 0; i < a; i++){
	printf("%d \n",fibonacci(i));
	}
	return 0;
}
