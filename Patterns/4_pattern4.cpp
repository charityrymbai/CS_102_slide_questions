//        1
//      2 3
//    4 5 6
// 7 8 9 10

#include<stdio.h>

int main() {
    int n;
    printf("Enter the no of terms: ");
    scanf("%d", &n);
    int count = 1, tabs;
    for (int i = 1; i <= n; i++) {
        tabs = n - i;
        while (tabs != 0) {
            printf("\t");
            tabs--;
        }
        for (int j = 1; j <= i; j++) {
            printf("\t%d", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
