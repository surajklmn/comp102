#include <stdio.h>
int func(int a, int b, int c, int d, int e);
int main(){
	int s,t,u,v,w;
	printf("Enter five integers :");
	scanf("%i %i %i %i %i",&s,&t,&u,&v,&w);
	printf("Sum is %i \n",func(s,t,u,v,w));














}
int func(int a, int b, int c, int d, int e){
	int s = a + b + c + d + e;
	int *sum = &s;




}

