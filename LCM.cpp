#include <stdio.h>

int main() {
    int num1, num2, max_num;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2) {
        max_num = num1;
    }
    else {
        max_num = num2;
    }

    int lcm = max_num;

    while ((lcm % num1 != 0) || (lcm % num2 != 0)) {
        lcm += max_num;
    }

    printf("Their LCM is %d", lcm);

    return 0;
}