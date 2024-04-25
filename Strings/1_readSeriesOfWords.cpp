
// Write a program to read a series of words from a terminal using
// scanf funciton.
#include<stdio.h>
#include<string.h>

int main() {
    int n;
    printf("Enter the no of words: ");
    scanf("%d", &n);
    printf("Enter the words: ");
    char place[n][20];
    for (int i = 0;i < n; i++) {
        scanf("%s", place[i]);
    }

    printf("\nThe words entered are as follows: \n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", place[i]);
    }

    return 0;
}