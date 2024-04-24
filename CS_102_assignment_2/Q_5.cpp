#include<stdio.h>
int main() {
    int n1;
    printf("Enter the size of the array: ");
    scanf("%d", &n1);
    int arr[n1], even = 0, odd = 0;
    printf("Enter the elements of array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array is: \n");
    for (int i = 0; i < n1; i++) {
        printf("%d\t", arr[i]);
        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    int e_arr[even], o_arr[odd];
    for (int i = 0, e = 0, o = 0; i < n1; i++) {
        if (arr[i] % 2 == 0) {
            e_arr[e] = arr[i];
            e++;
        }
        else {
            o_arr[o] = arr[i];
            o++;
        }
    }

    printf("\nThe even array is: \n");
    for (int i = 0; i < even; i++) {
        printf("%d\t", e_arr[i]);
    }

    printf("\nThe odd array is: \n");
    for (int i = 0; i < odd; i++) {
        printf("%d\t", o_arr[i]);
    }
    return 0;
}