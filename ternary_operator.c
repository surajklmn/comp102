#include <stdio.h>
int main(){
	int age;
	printf("Enter your age:");
	scanf("%i",&age);
	( age >= 18) ? printf("You are eligible to vote.\n"):printf("Not eligible to vote.\n");
	return 0;
}

