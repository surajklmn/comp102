#include <stdio.h>
int main(){
	int a;
	int b;
	printf("Enter two numbers");	
	scanf("%i %i",&a,&b);
	(a >= b) ? (printf("%i is greater than or equal to %i \n",a,b)) : (printf("%i is smaller than or equal to %i \n",a,b)); 
		return 0;
}
