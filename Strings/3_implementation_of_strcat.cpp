// Write a C program to implement strcat() without using built in function.
// C program to reverse the elements of an stray.

#include<stdio.h>
#include<string.h>

int main() {
    char str1[30], str2[30];
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("\nThe first string: %s", str1);
    printf("\nThe second string: %s", str2);

    int n1 = strlen(str1);
    int n2 = strlen(str2);

    for (int i = 0, j = n1; i < n2; i++, j++) {
        str1[j] = str2[i];
    }
    str1[n1 + n2] = '\0';

    printf("\n%s", str1);

    return 0;
}