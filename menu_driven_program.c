#include <stdio.h>
#include <ctype.h>
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
			printf("F to pay respect \n");
		break;
		case 'P':
			printf("I see you have pressed P \n");
		break;
		case 'O':
			printf("OOOOOOOOOOOOOOOOoooooooooooooo \n");
		break;

		default:
			printf("Exiting the program \n");
		break;

	}

}
