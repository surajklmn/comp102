#include <stdio.h>
#define MAX_SIZE 20

int main(){
	int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows, cols;
	printf("Enter the number of row and columns for the matrices: ");
	scanf("%d %d",&rows,&cols);

	printf("Enter elements fo matrix 1: \n");
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			scanf("%d", &matrix1[i][j]);
		}
	}

	printf("Enter the elements of matrix 2: \n");
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			scanf("%d", &matrix2[i][j]);

		}

	}
	//Perfoming addition
	printf("After addition: \n");
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			result[i][j] = matrix1[i][j] + matrix2[i][j];
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;

}
