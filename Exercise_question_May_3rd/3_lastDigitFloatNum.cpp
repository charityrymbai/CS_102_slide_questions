// Write a C program that reads a floating point number and then displays the right-most digit
// of the integral part of the number.

#include<stdio.h>

int main() {
    float num = 0;
    printf("Enter the floating point number: ");
    scanf("%f", &num);

    int last_digit = int(num) % 10;
    printf("\nThe last digit of the integer part of the number is: %d", last_digit);
    return 0;
}