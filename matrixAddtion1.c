#include <stdio.h>
#define MAX 40
void addition(int a[][MAX],int b[][MAX],int result[][MAX],int rows, int cols){
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			result[i][j] = a[i][j] + b[i][j];
		}
	}
}

void display(int mat[][MAX], int row, int cols){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");

    }
}

int main(){
    int mat1[MAX][MAX], mat2[MAX][MAX], rows, cols, result[MAX][MAX];
    
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements fo matrix 1: \n");
    for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
            scanf("%d", &mat1[i][j]);
        }

    }
    printf("Enter the elements fo matrix 2: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &mat2[i][j]);
        }

    }
    addition(mat1,mat2,result,rows,cols);

    printf("Resultant is : \n");
    display(result, rows, cols);

    return 0;

}
