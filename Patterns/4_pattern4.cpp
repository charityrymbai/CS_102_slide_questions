//        1
//      2 3
//    4 5 6
// 7 8 9 10

#include<stdio.h>

int main() {
    int n;
    printf("Enter the no of terms: ");
    scanf("%d", &n);
    for (int i = 1, count = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++, count++) {
            if (j == 1) {
                int tabs = n - i;
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