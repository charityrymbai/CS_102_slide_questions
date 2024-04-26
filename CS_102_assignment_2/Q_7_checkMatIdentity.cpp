// 7. C program to check a given matrix is an identity matrix or not

#include<stdio.h>
int main() {
    int n1;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n1);
    int mat[n1][n1];

    printf("Enter the elements of Matrix:\n");

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

    int flag = 1;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n1; j++) {
            if (i != j) {
                if (mat[i][j] != 0) {
                    flag = 0;
                }
            }
            else {
                if (mat[i][j] != 1) {
                    flag = 0;
                }
            }
        }
    }
    if (flag == 1) {
        printf("\nGiven matrix is an identity matrix");
    }
    else {
        printf("\nGiven matrix is not an identity matrix");
    }
    return 0;
}