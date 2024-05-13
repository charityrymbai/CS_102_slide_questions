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
        int count = 1;
        for (int j = i; j > 0; j--) {
            printf("\t%d", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
