// Write a C program to define a structure type, struct personal that
// would contain person name, date of joining and salary. Using this
// structure, write a program to read this information for one person from
// the keyboard and print the same on the screen.

#include<stdio.h>

struct personal {
    char name[30];
    char dateOfJoining[10];
    int salary;
};

int main() {
    struct personal person1;

    printf("FOR PERSON 1: \nEnter the name:");
    scanf("%s", person1.name);
    printf("Enter the Date of joining:");
    scanf("%s", person1.dateOfJoining);
    printf("Enter the Salary: ");
    scanf("%d", &person1.salary);

    printf("\nPerson 1:\nName:%s", person1.name);
    printf("\nDate of joining: %s", person1.dateOfJoining);
    printf("\nSalary: %d", person1.salary);
    return 0;
}