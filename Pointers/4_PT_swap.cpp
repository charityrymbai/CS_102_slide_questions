// write a C program to swap the value of two variable using function

#include<stdio.h>

void swap(int* a, int* b);

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("Value of x and y after function call : %d\t%d", x, y);

    swap(&x, &y);

    printf("\nValue of x and y after function call : %d\t%d", x, y);

    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}