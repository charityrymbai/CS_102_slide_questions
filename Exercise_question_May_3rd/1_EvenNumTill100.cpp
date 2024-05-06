// 1.	Write a C program that prints the even numbers from 1 to 100.

#include<stdio.h>
int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\t", i);
        }
    }
    return 0;
}
