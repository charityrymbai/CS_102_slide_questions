#include<stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter the row and column of the 1st matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the row and column of the 2nd matrix: ");
    scanf("%d%d", &r2, &c2);

    int mat1[r1][c1];
    int mat2[r2][c2];

    printf("Enter elements of 1st matrix: \n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix: \n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nThe 1st matrix is : \n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nThe 2nd matrix is : \n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }



    if (c2 != r1) {
        printf("\nMatrices cannot be multiplied!!!");
        return 0;
    }

    int r3 = r1;
    int c3 = c2;
    int ans[r3][c3];

    for (int i = 0; i < r3; i++) {
        for (int j = 0; j < c3; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("\nThe multiplication of the two matrices is : \n");
    for (int i = 0; i < r3; i++) {
        for (int j = 0; j < c3; j++) {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}