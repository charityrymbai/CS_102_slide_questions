// 4. C program to replace all EVEN elements by 0 and Odd by 1 in One Dimensional Array

#include<stdio.h>
int main() {
    int n1;
    printf("Enter the size of the array: ");
    scanf("%d", &n1);
    int arr[n1];
    printf("Enter the elements of array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is: \n");
    for (int i = 0; i < n1; i++) {
        printf("%d\t", arr[i]);
        if (arr[i] % 2 == 0) {
            arr[i] = 0;
        }
        else {
            arr[i] = 1;
        }
    }

    printf("\nThe modified array is: \n");
    for (int i = 0; i < n1; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}