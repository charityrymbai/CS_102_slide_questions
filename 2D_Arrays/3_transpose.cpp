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
    int r2 = c1;
    int c2 = r1;
    int ans[r2][c2];
    printf("\nThe transpose of the matrix is : \n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            ans[i][j] = mat[j][i];
        }
    }

    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }



    return 0;
}