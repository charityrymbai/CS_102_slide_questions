// Write a program using pointers to determine the length of a
// character sring.

#include<stdio.h>

int main() {
    char str[30];
    printf("Enter the string to get the length of: ");
    scanf("%s", str);
    char* temp = str;
    int length = 0;
    while (*temp != '\0') {
        length++;
        temp = temp + 1;
    }

    printf("The length of %s is: %d", str, length);
    return 0;
}