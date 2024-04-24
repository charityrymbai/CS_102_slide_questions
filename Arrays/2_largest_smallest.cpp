// Write a C program to store 10 numbers in an array and find the
// largest and smallest.

#include<stdio.h>

int main() {
    int n, min, max;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];

    for (int i = 0; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    printf("The largest element is %d and the smallest element is %d", max, min);
    return 0;
}