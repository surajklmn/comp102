#include <stdio.h>
int main(){
	int n = 10;
	int *ptr;
	ptr = &n;
	printf("Value of num: %d \n",n);
	printf("Address of num: %d \n",&n);
	printf("Value of ptr: %d \n",ptr);
	printf("Value pointed by ptr: %d \n",*ptr);
	*ptr = 20;
	printf("Modified value of num: %d \n", n);
	return 0;
}
