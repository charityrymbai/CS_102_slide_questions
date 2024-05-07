// 1. C program to find Sum of all elements of each row of a matrix

#include<stdio.h>

int main() {
    int r1, c1;

    printf("Enter the row and column of the matrix: ");
    scanf("%d%d", &r1, &c1);

    int mat[r1][c1];

    printf("Enter elements of matrix: \n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nThe matrix is : \n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    int rsum = 0;
    for (int i = 0; i < r1; i++) {
        rsum = 0;
        for (int j = 0; j < c1; j++) {
            rsum += mat[i][j];
        }
        printf("\nSum of row %d: %d", i + 1, rsum);
    }

    return 0;
}