// Q1. Write a C program to print n Fibonacci series for n terms using
// recursive function.

#include<stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Enter the no to get factorial of: ");
    scanf("%d", &n);
    printf("Factorial : %d", factorial(n));

    return 0;
}

int  factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}