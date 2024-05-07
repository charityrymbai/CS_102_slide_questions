// 11. C program to find occurrence of an element in one dimensional array

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
    int num;
    printf("Enter the element to find the occurence for : ");
    scanf("%d", &num);

    int occur = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            occur++;
        }
    }
    printf("\nThe number of times %d occured in the array is : %d", num, occur);

    return 0;
}