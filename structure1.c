#include <stdio.h>

struct student {
	char name[20];
	int roll;
	float marks;
};

void display(struct student suraj){
	printf("Name: %s",suraj.name);
	printf("Roll: %d",suraj.roll);
	printf("Marks: %.2f",suraj.marks);	
}

int main(){
	struct student student[5];
	for(int i = 0; i < 5; i++){
		printf("Enter the details for student %d",i+1);
		printf("Name:");
		scanf("%s",&student[i].name);
		printf("Roll.No: ");
		scanf("%d",&student[i].roll);
		printf("Marks: ");
		scanf("%f",&student[i].marks);
	}
	for(int i = 0; i < 5; i++){
		display(student[i]);
	}
}
