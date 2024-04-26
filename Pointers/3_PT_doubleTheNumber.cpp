// write a c program to double the value of a number using pointer as
// function argument.

#include<stdio.h>

void doubleTheValue(int* num);

int main() {
    int n;
    printf("Enter the number to double:");
    scanf("%d", &n);
    printf("The value of the num before function call: %d", n);

    doubleTheValue(&n);

    printf("\nThe value of the num after function call: %d", n);

    return 0;
}

void doubleTheValue(int* num) {
    *num *= 2;
}