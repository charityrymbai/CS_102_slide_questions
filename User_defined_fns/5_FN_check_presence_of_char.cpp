// Write a C program to check whether a character is present in a string using function
// (the function takes a string and a character and returns 1 if the character is present
// otherwise 0)

#include<stdio.h>
#include<string.h>

int checkPresence(char str[30], char x);

int main() {
    char str[30], character;

    printf("Enter the character to search: ");
    character = getchar();

    printf("Enter the string: ");
    scanf("%s", str);

    printf("\nThe string: %s\nCharacter to search: %c\n", str, character);

    if (checkPresence(str, character)) {
        printf("\nCharacter %c is present in the string %s", character, str);
    }
    else {
        printf("\nCharacter %c is not present in the string %s", character, str);
    }


    return 0;
}

int checkPresence(char str[30], char x) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == x) {
            return 1;
        }
    }
    return 0;
}