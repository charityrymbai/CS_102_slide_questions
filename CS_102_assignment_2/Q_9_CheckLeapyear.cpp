// 9. In preparing the calendar for a year we need to know whether that particular year is leap year or
// not. Design a function that receives the year as parameter and returns whether the year is leap year
// or not.

#include<stdio.h>

int isLeapYear(int year);

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (isLeapYear(year)) {
        printf("%d is a leap year", year);
    }
    else {
        printf("%d is not a leap year", year);
    }
    return 0;
}

int isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;
            }

        }
        else {
            return 1;
        }
    }
    return 0;
}