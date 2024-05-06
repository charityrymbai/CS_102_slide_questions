// Write a C program to read a four digit integer and print the sum of its digits.
// Hint: use / and % operators.

#include<stdio.h>

int main() {
    int num;
    printf("Enter a four digit number: ");
    scanf("%4d", &num);
    int rem, sum;
    sum = rem = 0;
    while (num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    printf("The sum of its digits is : %d", sum);
    return 0;
}