#include<stdio.h>

typedef struct {
    char name[30];
    char address[50];
    int marks;
} studentStructure;

int main() {
    int n1, n2;
    printf("Enter the no of Group A and Group B students: ");
    scanf("%d%d", &n1, &n2);

    studentStructure a[n1], b[n2];

    printf("Enter details of Group A students: [Name Address Marks]\n");
    for (int i = 0; i < n1; i++) {
        scanf("%s%s%d", a[i].name, a[i].address, &a[i].marks);
    }
    printf("Enter details of Group B students: [Name Address Marks]\n");
    for (int i = 0; i < n2; i++) {
        scanf("%s%s%d", b[i].name, b[i].address, &b[i].marks);
    }

    FILE* filePtr = fopen("CS102.txt", "w");

    fprintf(filePtr, "%s %s", "Group", "A");
    for (int i = 0; i < n1; i++) {
        fseek(filePtr, 0, SEEK_END);
        fprintf(filePtr, "\n%d %s %s %d", i + 1, a[i].name, a[i].address, a[i].marks);
    }

    fseek(filePtr, 0, SEEK_END);
    fprintf(filePtr, "\n%s %s", "Group", "B");
    for (int i = 0; i < n1; i++) {
        fseek(filePtr, 0, SEEK_END);
        fprintf(filePtr, "\n%d %s %s %d", i + 1, b[i].name, b[i].address, b[i].marks);
    }

    fclose(filePtr);
    return 0;

}