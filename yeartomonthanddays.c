#include <stdio.h>
int main(){
int month, days;
	printf("Enter number of days: ");
	scanf("%i",&days);
	month = days/30;
	days = days%30;
	printf("%i Months and %i Days\n",month,days);
	return 0;
}
