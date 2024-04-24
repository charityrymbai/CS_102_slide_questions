#include<stdio.h>

int main() {
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    while (num2 != 0) {
        int temp = num1;
        num1 = num2;
        num2 = temp % num2;
    }

    printf("%d", num1);

    return 0;
}