#include<stdio.h>

void scanArr(int arr[10][10], int  r, int  c);
int matMultiply(int ans[10][10], int mat1[10][10], int mat2[10][10], int r1, int c1, int r2, int c2);
void printArr(int arr[10][10], int r, int c);

int main() {
    int r1, c1, r2, c2;

    printf("Enter the row and column of the first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the row and column of the second matrix: ");
    scanf("%d%d", &r2, &c2);

    int mat1[10][10];
    int mat2[10][10];

    scanArr(mat1, r1, c1);
    scanArr(mat2, r2, c2);

    printf("\nMatrix 1:\n");
    printArr(mat1, r1, c1);

    printf("\nMatrix 2:\n");
    printArr(mat2, r2, c2);

    int ans[10][10];
    matMultiply(ans, mat1, mat2, r1, c1, r2, c2);

    printArr(ans, r1, c2);

    return 0;
}


void scanArr(int arr[10][10], int  r, int  c) {
    printf("\nEnter the elements of the matrix: \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

int matMultiply(int ans[10][10], int mat1[10][10], int mat2[10][10], int r1, int c1, int r2, int c2) {
    if (c2 != r1) {
        printf("\nMatrices cannot be multiplied!!!");
        return 0;
    }

    int r3 = r1;
    int c3 = c2;

    for (int i = 0; i < r3; i++) {
        for (int j = 0; j < c3; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                ans[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

}

void printArr(int arr[10][10], int  r, int  c) {
    printf("\nThe elements of the matrix are: \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}