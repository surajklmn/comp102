#include <stdio.h>
int sum(int a){
	int i, sum = 0;
	for(i = 1; i <= a; i++){
		sum += i;
	}
	return sum;

}
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Sum is %d \n", sum(n));
	return 0;
}
