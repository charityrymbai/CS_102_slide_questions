// 12. C program to find the difference between the 
// largest and smallest element in the array

#include<stdio.h>
int main() {
    int n;
    int arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max, min;
    max = min = arr[0];

    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    printf("\nThe difference of largest and smallest element is  : %d", max - min);

    return 0;
}