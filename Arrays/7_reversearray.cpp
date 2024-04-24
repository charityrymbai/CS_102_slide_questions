// C program to reverse the elements of an array.


#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is : \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    for (int i = 0; i <= n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("\nThe reversed array is : \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }


    return 0;
}