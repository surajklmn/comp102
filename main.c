#include <stdio.h>
extern int globalVariable;
int main(){
	globalVariable = 15;
	printf("Value: %d\n",globalVariable);
	return 0;

}
