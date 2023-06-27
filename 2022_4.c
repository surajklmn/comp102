#include <stdio.h>
int main(){
	int a,b; int c = 5; int *p;
	a = 5* (c + 20);
	p = &c;
	b = 5 * (*p + 10);
	printf("%d %d",b,a);

}
