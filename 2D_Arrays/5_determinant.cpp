#include <stdio.h>

int determinant(int matrix[10][10], int n) {
    int det = 0;
    int submatrix[10][10];

    if (n == 2) {
        return (matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]);
    }
    else {
        for (int x = 0; x < n; x++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x) {
                        continue;
                    }
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det += (x % 2 == 0 ? 1 : -1) * matrix[0][x] * determinant(submatrix, n - 1);
        }
    }
    return det;
}

int main() {
    int n;
    int matrix[10][10];

    printf("Enter the size of the square matrix (max %d): ", 10);
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int det = determinant(matrix, n);
    printf("Determinant: %d\n", det);

    return 0;
}
