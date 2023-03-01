#include <stdio.h>
int main(){
	int a, flag;
	printf("Enter a number:");
	scanf("%i",&a);
	if(a == 0|| a == 1){
		printf("Not a prime number. \n");
			
	}
	for(int i = 2; i < a; i++){
		if(a%i != 0){
			printf("It is a prime number \n");
			break;			
		}
		else{
			printf("Not a prime \n");
			break;
		}



}
}
