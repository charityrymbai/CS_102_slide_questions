// 8. C program to find second smallest element in a one dimensional array

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
    int min = (arr[0] < arr[1]) ? arr[0] : arr[1];
    int smin = (arr[0] > arr[1]) ? arr[0] : arr[1];

    for (int i = 2; i < n; i++) {
        if (min > arr[i]) {
            smin = min;
            min = arr[i];
        }
        else if (smin > arr[i]) {
            smin = arr[i];
        }
    }
    printf("\nThe second smallest element is : %d", smin);

    return 0;
}