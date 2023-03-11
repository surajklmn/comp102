#include <stdio.h>
int power(int a,int b);
int main(){
	int x,y;
	printf("Enter a number: ");
	scanf("%i",&x);
	printf("Enter the power you would like to raise a to: ");
	scanf("%i",&y);
	printf("Answer is : %i\n",power(x,y));

}
int power(int a,int b){
	for(int i=0; i < b; i++){
		return a*a;
	}


}



