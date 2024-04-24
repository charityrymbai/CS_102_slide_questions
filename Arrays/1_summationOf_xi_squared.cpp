// C program to evaluate the following using array
// total = summation of square of all the elements
// The values of x1, x2....Are to be read from terminal.

#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i] * arr[i];
    }
    printf("The required ans is %d", total);
    return 0;
}