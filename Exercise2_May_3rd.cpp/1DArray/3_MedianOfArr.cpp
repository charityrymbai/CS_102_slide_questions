// 3. C program to calculate median of an array

#include<stdio.h>

void swap(int*, int*);
float median_even(int arr[100], int n);
float median_odd(int arr[100], int n);

int main() {
    int n;
    scanf("%d", &n);
    int arr[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Using bubble sort
    int length = n;
    while (length >= 1) {
        for (int i = 0; i < length - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
            }
        }
        length--;
    }


    float median = 0;
    if (n % 2 == 0) {
        median = median_even(arr, n);
    }
    else {
        median = median_odd(arr, n);
    }

    printf("%f", median);

    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

float median_even(int arr[100], int n) {
    return (float)(arr[(n / 2) - 1] + arr[((n / 2) + 1) - 1]) / 2;
}

float median_odd(int arr[100], int n) {
    return (float)arr[((n + 1) / 2) - 1];
}