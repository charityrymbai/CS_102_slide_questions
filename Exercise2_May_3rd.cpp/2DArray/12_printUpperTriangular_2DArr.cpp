// 12. C program to print the upper triangular matrix

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

    printf("\nThe Upper Triangular matrix is: \n");
    for (int i = 0; i < n; i++) {
        for (int k = 1; k <= i; k++) {
            printf("\t");
        }
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                printf("%d\t", mat[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}