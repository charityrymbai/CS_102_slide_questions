// C program to delete
//  prime numbers from an array

#include<stdio.h>

void deleleElement(int arr[100], int n, int x);

int main() {
    int n;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is : \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    int count = 0;
    for (int j = 0; j < n; j++) {
        int fact = 0;
        for (int i = 1; i <= arr[j]; i++) {
            if (arr[j] % i == 0) {
                fact++;
            }
        }
        if (fact == 2) {
            deleleElement(arr, n, j);
            count++; j--;
        }
    }

    printf("\nThe array without prime nos is : \n");
    for (int i = 0; i < n - count; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}

void deleleElement(int arr[100], int n, int x) {
    for (int i = x; i < n; i++) {
        arr[i] = arr[i + 1];
    }
}