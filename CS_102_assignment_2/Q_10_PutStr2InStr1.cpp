// 10.Design a function that takes two strings s1 and s2 and one integer value m as parameters and
// inserts the string s2 into s1 immediately after the index m.

#include<stdio.h>
#include<string.h>

void place_str(char str1[30], char str2[30], int m);

int main() {
    char s1[30];
    char s2[30];
    char s3[30];
    int m;

    printf("Enter 1st String: ");
    scanf("%s", s1);
    printf("Enter 2nd String: ");
    scanf("%s", s2);

    printf("Enter the index after which to insert the 2nd string: ");
    scanf("%d", &m);

    printf("\nThe final string is : ");
    place_str(s1, s2, m);
    printf("%s\n", s1);

    return 0;
}

void place_str(char str1[30], char str2[30], int m) {
    int i = m;
    int str1Length = strlen(str1);
    int str2Length = strlen(str2);
    for (int i = m + 1, j = 0; j < str2Length; i++, j++) {
        str1[str2Length + i] = str1[i];
        str1[i] = str2[j];
    }
    str1[str1Length + str2Length] = '\0';
}