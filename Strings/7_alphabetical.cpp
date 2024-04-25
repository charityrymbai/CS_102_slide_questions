
// Write a program that would sort a list of names in alphabetical order.

#include<stdio.h>
#include<string.h>

void swapstr(char s1[20], char s2[20]) {
    char temp[20];
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);
}

int main() {
    int n;
    printf("Enter the no of words: ");
    scanf("%d", &n);
    printf("Enter the words: ");
    char place[n][20];
    for (int i = 0;i < n; i++) {
        scanf("%s", place[i]);
    }

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - 1; j++) {
            if (strcmp(place[j], place[j + 1]) > 0) {
                swapstr(place[j], place[j + 1]);
            }
        }
    }

    printf("\nThe words in alphabetical order are as follows: \n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", place[i]);
    }

    return 0;
}