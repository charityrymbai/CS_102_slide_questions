//       1
//     2 2 2
//   3 3 3 3 3
// 4 4 4 4 4 4 4

#include<stdio.h>

int main() {
    int n;
    printf("Enter the no of terms: ");
    scanf("%d", &n);
    int count = 1, tabs;
    for (int i = 1; i <= n; i++) {
        int tabs = n - i;
        while (tabs != 0) {
            printf("\t");
            tabs--;
        }
        for (int j = 1; j <= count;j++) {
            printf("\t%d", i);
        }
        count += 2;
        printf("\n");
    }

    return 0;
}
