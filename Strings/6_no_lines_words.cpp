
// Write a program to count the number of characters, words, lines in a text.

#include<stdio.h>
#include<string.h>

int main() {
    char str[80];
    printf("Enter the string(enter tab and enter to finish): ");
    scanf("%[^\t]", str);

    int character, word, line;
    character = word = line = 0;

    for (int i = 0; i < strlen(str); i++) {
        character++;
        if (str[i] == ' ') {
            word++;
        }
        if (str[i] == '\n') {
            line++;
        }
    }
    word++;
    line++;
    printf("Characters: %d\nWords: %d\nLines: %d", character, word, line);
    return 0;
}