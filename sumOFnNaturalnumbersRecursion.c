#include <stdio.h>
int sum(int n){
	if(n <= 1){
		return n;
	}
	return n + sum(n - 1);
}

int main(){
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Sum is %d \n", sum(a));
	return 0;

}
