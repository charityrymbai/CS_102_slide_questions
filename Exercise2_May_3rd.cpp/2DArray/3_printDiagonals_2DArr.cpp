// 3. C program to Read a Matrix and Print Diagonals

#include<stdio.h>

int main() {
    int n;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    int mat[n][n];

    printf("Enter elements of matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nThe matrix is : \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nThe diagonals are: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", mat[i][i]);
    }

    return 0;
}