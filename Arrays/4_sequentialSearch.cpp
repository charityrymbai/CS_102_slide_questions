// C program to find a key from n numbers using sequential 
// search and if found, show the position.
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
    int x;
    printf("Enter element to search: ");
    scanf("%d", &x);


    printf("The arrays is: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    int flag = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            flag = i;
            break;
        }
    }
    if (flag != -1) {
        printf("\nElement %d was found at index %d", x, flag);
    }
    else {
        printf("\nElement %d was not found in the array", x);
    }
    return 0;
}