#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;
    float average;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter the elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    average = (float) sum / (rows * cols);
    printf("Sum = %d\n", sum);
    printf("Average = %f\n", average);
    
    return 0;
}

