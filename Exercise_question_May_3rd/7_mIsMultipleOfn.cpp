// 7.	Write a C program to read two integer 
// values m and n and to decide and print 
// whether m is a multiple of n.

#include<stdio.h>
int main() {
    int m, n;
    printf("Enter the value of m and n: ");
    scanf("%d%d", &m, &n);
    if (n % m == 0) {
        printf("Yes %d is a multiple of %d", m, n);
    }
    else {
        printf("No %d is not a multiple of %d", m, n);
    }
    return 0;
}
