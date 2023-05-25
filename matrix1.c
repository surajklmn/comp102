#include <stdio.h>
#define MAX 40

int main(){
	int mat1[MAX][MAX], mat2[MAX][MAX],result[MAX][MAX], row1, row2, col1, col2;

	printf("Enter the rows and columns for matrix 1: ");
	scanf("%d %d",&row1, &col1);
	printf("Enter the rows and columns for matrix 2: ");
	scanf("%d %d", &row2, &col2);

	if(col1 != row2){
	printf("Invalid matrix for multiplication. \n");
		return 0;
	}

	printf("Enter the elements of matrix 1:\n");
	for(int i = 0; i < row1; i++){
		for(int j = 0; i < col1; j++){
			scanf("%d",&mat1[i][j]);
			}
	}
	printf("Enter the elements of matrix 2:\n");
	for(int i = 0; i < row2; i++){
		for(int j = 0; i < col2; j++){
			scanf("%d",&mat2[i][j]);
			}
	}

	//Multiplication
	for(int i = 0; i < row1; i++){
		for(int j = 0; i < col2; j++){
		result[i][j]= 0;
			for(int k = 0; k < col1; k++){
				result[i][j] += mat1[i][k]*mat2[k][j];
				
			}
		}
	}
	printf("Resultant \n");

	for(){
		for(){
			printf();
		}
		printf("\n");
	}


}
