#include <stdio.h>
int main(){
	int a = 1, b = 2, c = 3;
	int result = (a++, ++b, ++c);
	printf("%i\n",result);

}
