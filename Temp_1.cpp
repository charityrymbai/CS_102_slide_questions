#include<stdio.h>
int main() {
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    int max1 = (a > c) ? a : c;
    int max2 = (b > c) ? b : c;
    max = (a > b) ? max1 : max2;

    printf("Largest is : %d", max);
    return 0;
}
