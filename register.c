#include <stdio.h>
int main(){
	register int n = 3;
	printf("Register variable value : %d\n", &n);//This is illegal
	return 0;

}
