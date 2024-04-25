
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
    int n = 7;
    char place[n][20] = { "a", "abc", "bcd", "abd", "charity",
"z", "arun" };

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < n - 1; j++) {
            if (strcmp(place[j], place[j + 1]) > 0) {
                swapstr(place[j], place[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        // for (int j = 0; j < n; j++)
        printf("%s\n", place[i]);
    }

    return 0;
}