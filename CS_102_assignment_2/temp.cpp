#include<stdio.h>
#include<string.h>
int main() {
    char s1[10];
    scanf("%s", s1);
    printf("%d", strlen(s1));
    printf("%cend", s1[strlen(s1)]);
    return 0;
}