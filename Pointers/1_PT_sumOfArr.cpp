// Write a C program using pointers to compute the sum of all elements stored in
// an array.

#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }

    printf("The Sum of all the elements in the array is %d", sum);
    return 0;
}