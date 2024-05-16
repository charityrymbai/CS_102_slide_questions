// Q4c. Write a C program to design a calculator to perform arithmetic
//  operation using switch case.

#include<stdio.h>
#include<math.h>

int main() {
    printf("Enter arithmetic operation: [+,-,*,/]: ");
    char choice;
    scanf("%c", &choice);

    printf("Enter two numbers: ");
    float n1, n2;
    scanf("%f%f", &n1, &n2);

    float res;
    switch (choice) {
    case '+':
        res = n1 + n2;
        printf("Result : %f", res);
        break;
    case '-':
        res = n1 - n2;
        printf("Result : %f", res);
        break;
    case '*':
        res = n1 * n2;
        printf("Result : %f", res);
        break;
    case '/':
        res = n1 / n2;
        printf("Result : %f", res);
        break;
    default:
        printf("\nInvalid operator!!!!");

    }
    return 0;
}