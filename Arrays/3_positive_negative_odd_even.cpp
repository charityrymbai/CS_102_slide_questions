// C program to store N numbers in an array and count the total
// positive, negative, odd and even numbers.

#include<stdio.h>

int main() {
    int n, even, odd, positive, negative;
    even = odd = positive = negative = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (arr[i] > 0) {
                even++;
                positive++;
            }
            else {
                even++;
                negative++;
            }
        }
        else {
            if (arr[i] > 0) {
                odd++;
                positive++;
            }
            else {
                odd++;
                negative++;
            }
        }
    }

    printf("\nPositive: %d", positive);
    printf("\nNegative: %d", negative);
    printf("\nOdd: %d", odd);
    printf("\nEven: %d", even);

    return 0;
}