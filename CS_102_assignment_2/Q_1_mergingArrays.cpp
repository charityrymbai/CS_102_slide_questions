// 1. C program to merge two arrays in third array.

#include<stdio.h>

int main() {
    int n1, n2;
    printf("Enter the size of the two arrays: ");
    scanf("%d%d", &n1, &n2);
    int arr1[n1], arr2[n2];

    printf("Enter the elements of 1st array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of 2nd array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("The arrays are: \n");
    for (int i = 0; i < n1; i++) {
        printf("%d\t", arr1[i]);
    }

    printf("\n");

    for (int i = 0; i < n2; i++) {
        printf("%d\t", arr2[i]);
    }

    int n3 = n1 + n2;
    int arr3[n3];
    int i;
    for (i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    printf("\nThe third array is :\n");
    for (int i = 0; i < n3; i++) {
        printf("%d\t", arr3[i]);
    }
    return 0;
}