// 3. C program to create a new array from a given array with the elements divisible by a specific
// number

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

    int ans[count];
    for (int i = 0, j = 0; j < count; i++) {
        if (arr[i] % num == 0) {
            ans[j] = arr[i];
            j++;
        }
    }

    printf("\nThe array with only the elements divisible by num is: \n");
    for (int i = 0; i < count; i++) {
        printf("%d\t", ans[i]);

    }
    return 0;
}