// 9. C program to find the sum of main and opposite diagonal elements of a matrix

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

    int mainSum, oppSum;
    mainSum = oppSum = 0;
    for (int i = 0; i < n; i++) {
        mainSum += mat[i][i];
        oppSum += mat[i][n - i - 1];
    }

    printf("The main diagonal sum is : %d\nThe Opposite Diagonal sum is : %d", mainSum, oppSum);
    return 0;
}