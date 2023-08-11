#include <stdio.h>

int main() {
    int mat1[10][10], mat2[10][10], result[10][10];
    int m, n, p, q, i, j, k;

    printf("Enter the dimensions of the first matrix (m x n): ");
    scanf("%d %d", &m, &n);
    printf("Enter the dimensions of the second matrix (p x q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Error: Invalid matrix dimensions\n");
        return 0;
    }
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            result[i][j] = 0;
            for (k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("Result of matrix multiplication:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

