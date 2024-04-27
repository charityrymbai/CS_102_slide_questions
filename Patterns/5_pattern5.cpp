//       1
//     2 2 2
//   3 3 3 3 3
// 4 4 4 4 4 4 4

#include<stdio.h>

int main() {
    int n;
    printf("Enter the no of terms: ");
    scanf("%d", &n);
    for (int i = 1, count = 1; i <= n; i = i + 2, count++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                int tabs = n - count;
                while (tabs != 0) {
                    printf("\t");
                    tabs--;
                }
            }
            printf("\t%d", count);
        }
        printf("\n");
    }

    return 0;
}