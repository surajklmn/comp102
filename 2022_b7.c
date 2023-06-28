#include <stdio.h>
int great(int a);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%i", &num);
	printf("Largest number in %d is %d .\n",num,great(num));
	return 0;
}

int great(int a){
	int rem,large=0;
	while(a > 0){
		rem =  a % 10;
		if(rem>large)
		{
			large = rem;
		}
		a = a/10;
	}
	return large;

}
