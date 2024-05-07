// 9. C program to calculate Sum, Product of all elements

#include<stdio.h>
int main() {
    int n, sum, product;
    int arr[100];
    sum = 0; product = 1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    printf("The sum of the elements is : %d\nThe product of the elements is : %d", sum, product);

    return 0;
}