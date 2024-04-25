// Q1. Write a C program to print n Fibonacci series for n terms using
// recursive function.

#include<stdio.h>

void fibo(int f1, int f2, int n);

int main() {
    int n;
    printf("Enter the no of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\t0\t1");

    fibo(0, 1, n - 2);

    return 0;
}

void fibo(int f1, int f2, int n) {
    if (n == 0) {
        return;
    }
    else {
        int f3 = f1 + f2;
        printf("\t%d", f3);
        fibo(f2, f3, n - 1);
    }
}