#include<stdio.h>

int main() {
    int n1;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n1);

    int mat[n1][n1];

    printf("Enter elements of matrix: \n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nThe matrix is : \n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n1; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}