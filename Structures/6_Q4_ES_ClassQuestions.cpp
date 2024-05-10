// Q4. Define a structure named 'Date' with member day, month, year. 
// Write C program to input two dates and find the difference in 
// day between them by passing entire structure as parameter.<br>
// Assume 1 month = 30 days

#include<stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} dateStructure;

int dateDiff(dateStructure date1, dateStructure date2);

int main() {
    dateStructure date1, date2;

    printf("Enter 1st date: [dd mm yyyy]\n");
    scanf("%d%d%d", &date1.day, &date1.month, &date1.year);

    printf("Enter 2nd date: [dd mm yyyy]\n");
    scanf("%d%d%d", &date2.day, &date2.month, &date2.year);

    int res = dateDiff(date1, date2);

    printf("The difference between them in days is : %d", res);

    return 0;
}

int dateDiff(dateStructure date1, dateStructure date2) {
    int days1 = date1.year * 365 + date1.month * 30 + date1.day;
    int days2 = date2.year * 365 + date2.month * 30 + date2.day;

    return days2 - days1;

}
