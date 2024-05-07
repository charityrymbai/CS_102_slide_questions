// 11. C program to find the trace of matrix

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

    int trace = 0;

    printf("\nThe matrix is : \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        trace += mat[i][i];
    }

    printf("The trace of the matrix is : %d", trace);
    return 0;
}