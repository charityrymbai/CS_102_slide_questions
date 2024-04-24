// Insert an element in an array in arbitrary location and display the
// array before and after the insertion. (necessary condition should be
// checked)
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

    int num, x;
    printf("\nEnter the number and the index to add it: ");
    scanf("%d%d", &num, &x);

    printf("\nBefore insertion: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    for (int i = n; i >= x; i--) {
        arr[i + 1] = arr[i];
    }

    arr[x] = num;

    printf("\nAfter insertion: \n");
    for (int i = 0; i < n + 1; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}