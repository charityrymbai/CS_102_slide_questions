#include<stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int n_copy = n;

    int rem, rev;
    rem = rev = 0;

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (rev == n_copy)
    {
        printf("\n%d is a Palindrome!!", n_copy);
    }
    else {
        printf("\n%d is not a Palindrome!!", n_copy);
    }
    return 0;
}