#include <stdio.h>
#include <ctype.h>
unsigned long long factorial(int a);
void prime(int a);
void even(int a);
int main(){
	int num;
	char choice;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Choose from the options below: \n");
	printf("-Find factorial(f/F).\n");
	printf("-Find prime or not(p/P).\n");
	printf("-Find odd or even(o/O).\n");
	printf("-Exit(e/E) \n");
	scanf(" %c",&choice);
	choice = toupper(choice);
	switch(choice) {
		case 'F':
			printf("Factorial of %d is %llu \n", num, factorial(num));
		break;
		case 'P':
		prime(num);
		break;
		case 'O':
			even(num);
		break;

		default:
			printf("Exiting the program \n");
		break;

	}

}
unsigned long long factorial(int a){
	unsigned long long fact = 1;
	for(int i = a; i > 0; i--){
		fact = fact*i;
	}
	return fact;
}

void prime(int a){
	if(a == 0 || a == 1){
		printf("%d is not a prime number.",a);
		}
	else{
		for(int i = 2; i <= a; i++){
			if(a%i == 0 && i != a){
				printf("It is not a prime number. \n");
				break;
				}
			else if(i == a){
				printf("It is a prime number. \n");
			}
		}
	}	
}

void even(int a){
	(a%2 == 0) ? printf("%d is even.\n",a): printf("%d is odd.\n",a);

}
