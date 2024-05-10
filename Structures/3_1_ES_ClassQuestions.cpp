// Create a structure named book to store book details like title, author and price. 
// Write a C Program to input for N books, find the most expensive and least expensive 
// books and display their information

#include<stdio.h>
typedef struct {
    char title[30];
    char author[30];
    float price;
} book;

void displayResult(book bookArr[100], int n);
void printBookAtIndex(book bookArr[100], int index);

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    book bookArr[100];

    printf("Enter the details of the books as in order: [title, author, price]\n");
    for (int i = 0; i < n; i++) {
        scanf("%s%s%f", bookArr[i].title, bookArr[i].author, &bookArr[i].price);
    }

    displayResult(bookArr, n);
    return 0;
}

void displayResult(book bookArr[100], int n) {
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
    printBookAtIndex(bookArr, maxIndex);
    printf("\n");
    printf("Least Expensive Book details: \n");
    printBookAtIndex(bookArr, minIndex);

}

void printBookAtIndex(book bookArr[100], int index) {
    printf("%s %s %f", bookArr[index].title, bookArr[index].author, bookArr[index].price);
}
