// C program to check if a string is a palindrome


#include<stdio.h>
#include<string.h>
int main() {
    char str[30];
    printf("Enter the string: ");
    scanf("%s", str);

    printf("The string: %s", str);
    int n = strlen(str);
    for (int i = 0; i <= n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            printf("\nGiven string is not a palindrome!!!");
            return 0;
        }
    }

    printf("\nGiven string is a palindrome!!!");

    return 0;
}