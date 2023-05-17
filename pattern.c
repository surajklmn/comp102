#include <stdio.h>
int main(){
	int i, j, n;
	printf("Enter a number: ");
	scanf("%i", &n);
	for(i = 0; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%i",i);
		}
		printf("\n");


	}

}
