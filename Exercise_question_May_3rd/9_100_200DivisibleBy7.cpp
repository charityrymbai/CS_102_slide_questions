// 9.	Write a C program to find the number of 
// and sum of all integers greater than 100 and
//  less than 200 that are divisible by 7.


#include<stdio.h>
int main() {
    int sum = 0, count = 0;
    for (int i = 100; i <= 200; i++) {
        if (i % 7 == 0) {
            sum = sum + i;
            count++;
        }
    }
    printf("No of numbers divisible by 7 from 100 to 200 : %d\n", count);
    printf("Sum of all those numbers is : %d", sum);
    return 0;
}

