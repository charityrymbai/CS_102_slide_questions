// Write a C program to implement strcmp() without using built in function.

// Write a C program to implement strcat() without using built in function.
// C program to reverse the elements of an stray.

#include<stdio.h>
#include<string.h>

int str_cmp(char s1[30], char s2[30]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
        i++;
    }
    return s1[i] - s2[i];
}

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



    printf("\n%d", str_cmp(str1, str2));

    return 0;
}