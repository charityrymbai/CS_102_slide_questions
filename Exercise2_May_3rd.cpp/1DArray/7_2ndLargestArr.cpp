// 7. C program to find second largest elements in a one dimensional array

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
    int max = (arr[0] > arr[1]) ? arr[0] : arr[1];
    int smax = (arr[0] < arr[1]) ? arr[0] : arr[1];

    for (int i = 2; i < n; i++) {
        if (max < arr[i]) {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i]) {
            smax = arr[i];
        }
    }
    printf("\nThe second largest element is : %d", smax);

    return 0;
}