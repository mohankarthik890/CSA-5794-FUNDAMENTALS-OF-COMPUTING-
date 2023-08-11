//15. The transpose of a matrix is found by interchanging its rows into columns or columns into rows. Write a program to find the Transpose of a given Matrix.
#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10
void transpose(int mat[MAX_ROWS][MAX_COLS], int rows, int cols) {
    int trans[MAX_COLS][MAX_ROWS],i,j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for ( j = 0; j < rows; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols,i,j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    int mat[MAX_ROWS][MAX_COLS];
    printf("Enter the matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    transpose(mat, rows, cols);
    return 0;
}

