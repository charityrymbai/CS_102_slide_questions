// Delete an element in an array from arbitrary location and display the
// array before and after the deletion. (necessary condition should be
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

    int x;
    printf("\nEnter the index to delete element: ");
    scanf("%d", &x);

    if (x >= n || x < 0) {
        printf("\nEnter valid index!!!!!");
        return 0;
    }

    printf("\nBefore deletion: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    for (int i = x; i < n; i++) {
        arr[i] = arr[i + 1];
    }


    printf("\nAfter deletion: \n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}