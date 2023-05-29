#include <stdio.h>
void increase();
int main(){
	increase();
	increase();
	increase();
	}

void increase(){
	int count = 0;
	count++;
	printf("%d \n",count);
}
