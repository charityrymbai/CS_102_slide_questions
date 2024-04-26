// 2. C program to count total number of elements
// divisible by a specific number in an array

#include<stdio.h>

int main() {
    int n1, num, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n1);
    int arr[n1];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter number to check divisibility of elements in array: ");
    scanf("%d", &num);

    printf("The arrays is: \n");
    for (int i = 0; i < n1; i++) {
        printf("%d\t", arr[i]);
        if (arr[i] % num == 0) {
            count++;
        }
    }

    printf("\nThe number of elements divisible by %d : %d", num, count);

    return 0;
}