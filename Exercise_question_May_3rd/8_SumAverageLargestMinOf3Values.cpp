// 8.	Write a C program to read three values using scanf statement and print the following results:
// a.	Sum of the values
// b.	Average of the three values
// c.	Largest of the three
// d.	Smallest of the three

#include<stdio.h>
int main() {
    int a, b, c;
    int max, min;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    int sum = a + b + c;
    float avg = (float)sum / 3;

    if (a > b) {
        if (a > c) {
            max = a;
            if (b > c) {
                min = c;
            }
            else {
                min = b;
            }
        }
        else {
            max = c;
            min = b;
        }
    }
    else {
        if (b > c) {
            max = b;
            if (a > c) {
                min = c;
            }
            else {
                min = a;
            }
        }
        else {
            max = c;
            min = a;
        }
    }

    printf("Sum is : %d\n", sum);
    printf("Average is : %f\n", avg);
    printf("Largest is : %d\n", max);
    printf("Smallest is : %d\n", min);
    return 0;
}

