#include<stdio.h>

void scanArr(int arr[10][10], int  r, int  c);
int getSumOfPrincipalDiagonal(int arr[10][10], int r, int c);
void printArr(int arr[10][10], int r, int c);

int main() {
    int r1, c1, n;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    r1 = c1 = n;
    int mat[10][10];

    scanArr(mat, r1, c1);
    int sum = getSumOfPrincipalDiagonal(mat, r1, c1);
    printf("\nThe sum of principal diagonal: %d", sum);
    printArr(mat, r1, c1);

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

int getSumOfPrincipalDiagonal(int arr[10][10], int r, int c) {
    int sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == j) {
                sum += arr[i][j];
            }
        }
    }
    return sum;
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