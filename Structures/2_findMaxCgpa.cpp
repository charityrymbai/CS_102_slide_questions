// Take the details like roll, name, cgpa, and phone no
// of n number of students in a structure
// and find the student with the highest cgpa and
// show the student's details

#include<stdio.h>
int main() {
    typedef struct {
        int roll;
        char name[30];
        float cgpa;
        long long phNo;
    } student;

    int n;
    printf("Enter the no of students: ");
    scanf("%d", &n);

    student record[n];
    printf("Enter details as follows: roll, name, cgpa, phone no.\n");
    for (int i = 0; i < n; i++) {
        printf("Enter the details of student %d: ", i + 1);
        scanf("%d%s%f%lld", &record[i].roll, record[i].name, &record[i].cgpa, &record[i].phNo);
    }

    int maxCgpa = record[0].cgpa;
    int studentNo = 0;

    for (int i = 0; i < n; i++) {
        if (maxCgpa < record[i].cgpa) {
            maxCgpa = record[i].cgpa;
            studentNo = i;
        }
    }

    printf("\nStudent %d have the highest Cgpa:", studentNo + 1);
    printf("\nDetails are: \nRoll: %d\nName: %s\nCgpa: %f\nPh no: %lld", record[studentNo].roll, record[studentNo].name, record[studentNo].cgpa, record[studentNo].phNo);

    return 0;
}