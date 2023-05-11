#include <stdio.h>
int main(){
	printf("Enter a lowercase letter: ");
	char c;
	scanf("%c", &c);
	printf("The uppercase of the entered letter is: %c\n", c-32);}
