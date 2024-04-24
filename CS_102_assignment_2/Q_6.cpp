#include<stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter the row and column of the 1st matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the row and column of the 1st matrix: ");
    scanf("%d%d", &r2, &c2);
    int mat1[r1][c1];
    int mat2[r2][c2];

    printf("Enter elements of 1st matrix: \n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nEnter elements of 2nd matrix: \n");
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



    if (r1 != r2 || c1 != c2) {
        printf("\nMatrices sizes not same and therefore they are not same!!!");
        return 0;
    }
    int flag = 1;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                flag = 0;
            }
        }
    }

    if (flag == 1) {
        printf("\nGiven matrices are same!!!");
    }
    else {
        printf("\nGiven matrices are not same!!!");
    }
    return 0;
}