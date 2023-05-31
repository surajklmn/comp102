#include <stdio.h>
#include <string.h>
struct Person{
	char name[50];
	int cityNo;
	float salary;
};

int main(){
	struct Person person1;
	printf("Enter your name: ");
	scanf("%s",&person1.name);
	printf("Enter your cityNo: ");
	scanf("%d",&person1.cityNo);
	printf("Enter your salary: ");
	scanf("%f", &person1.salary);

	printf("%s \n",person1.name);
	printf("%d \n",person1.cityNo);
	printf("%.3f \n",person1.salary);
}
