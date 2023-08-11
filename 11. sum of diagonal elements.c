#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int sum = 0;

    printf("Enter the elements of the matrix:\n");
    int i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Diagonal Elements are ");
    for (i = 0; i < rows && i < cols; i++) {
        printf("%d ", matrix[i][i]);
    }

    printf("\nSum of diagonal elements = %d", sum);

    return 0;
}


