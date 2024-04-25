#include<stdio.h>

void scanArr(int arr[10][10], int  r, int  c);
int getLargest(int arr[10][10], int r, int c);
void printArr(int arr[10][10], int r, int c);

int main() {
    int r1, c1;

    printf("Enter the row and column of the matrix: ");
    scanf("%d%d", &r1, &c1);

    int mat[10][10];

    scanArr(mat, r1, c1);
    int max = getLargest(mat, r1, c1);
    printf("\nLargest element in matrix: %d", max);
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

int getLargest(int arr[10][10], int r, int c) {
    int max = arr[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
    }
    return max;
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