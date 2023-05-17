#include <stdio.h>
int main(){
	char input[100];
	printf("Enter a string: ");
	scanf(" %[^\n]",&input);
	printf("The string is: %s",input);
}
