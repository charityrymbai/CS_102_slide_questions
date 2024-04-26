// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<stdio.h>

int main() {
    int n;
    printf("Enter the no of terms: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = i, count = 1; j > 0; j--, count++) {
            printf("\t%d", count);
        }
        printf("\n");
    }

    return 0;
}