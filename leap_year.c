#include <stdio.h>
int main(){
	int a;
	printf("Enter a year: ");
	scanf("%i",&a);
	if(a%4 == 0)
		printf("It is a leap year.\n");
	else if(a%100 == 0){
		printf("It is not a leap year. \n");
	}
	else if(a%400 == 0){
		printf("It is a leap year. \n");
	}
	else{
	printf("It is not a leap year");
	}
	return 0;
}
