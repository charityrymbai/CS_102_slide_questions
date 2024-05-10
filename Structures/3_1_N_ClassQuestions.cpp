// Create a structure named book to store book details like title, author and price. 
// Write a C Program to input for N books, find the most expensive and least expensive 
// books and display their information

#include<stdio.h>
typedef struct {
    char title[30];
    char author[30];
    float price;
} book;

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    book bookArr[100];

    printf("Enter the details of the books as in order: [title, author, price]\n");
    for (int i = 0; i < n; i++) {
        scanf("%s%s%f", bookArr[i].title, bookArr[i].author, &bookArr[i].price);
    }

    int maxPrice = bookArr[0].price;
    int maxIndex = 0;

    int minPrice = bookArr[0].price;
    int minIndex = 0;

    for (int i = 0; i < n; i++) {
        if (maxPrice < bookArr[i].price) {
            maxPrice = bookArr[i].price;
            maxIndex = i;
        }

        if (minPrice > bookArr[i].price) {
            minPrice = bookArr[i].price;
            minIndex = i;
        }
    }
    printf("Most Expensive Book details: \n");
    printf("%s %s %f", bookArr[maxIndex].title, bookArr[maxIndex].author, bookArr[maxIndex].price);
    printf("\n");
    printf("Least Expensive Book details: \n");
    printf("%s %s %f", bookArr[minIndex].title, bookArr[minIndex].author, bookArr[minIndex].price);

    return 0;
}