#include <stdio.h>
int main(){
	int i, j, n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i = 1; i < n; i++){
		printf("%d",i);

		for(j = 0; i < j; j++){
			printf("%d", j+1);

		}
		printf("\n");
	}



}
