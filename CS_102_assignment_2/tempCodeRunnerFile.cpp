#include<stdio.h>
int main() {
    int r1, c1, even = 0;
    printf("Enter the row and column of the matrix: ");
    scanf("%d%d", &r1, &c1);
    int mat[r1][c1];

    printf("Enter elements of matrix: \n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat[i][j]);
        }
    }