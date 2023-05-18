#include <stdio.h>
int main(){
	int s1, s2, s3;
	printf("Enter marks for three subjects: ");
	scanf("%d %d %d", &s1, &s2, &s3);
	int total = s1 + s2 + s3;
	float percentage = total/300.0 * 100;
	printf("Total marks: %d\n", total);
	printf("Percentage: %.2f\n", percentage);
	if (percentage >= 80) {
		printf("Distinction");
	}
	else if (percentage >= 60) {
		printf("First Division");
	}
	else if (percentage >= 40) {
		printf("Second Division");
	}
	else {
		printf("Third Division");
	}
	return 0;
}
