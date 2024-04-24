// Suppose there are M number of girls who sales N number of items.
// Write a C program to using 2D array to compute and print the
// following:
// a. Total value of sales by each girl
// b. Total value of each item sold
// c. Grand total of sales of all the items by all girls

#include<stdio.h>

int main() {
    int m, n;

    printf("Enter the number of girls: ");
    scanf("%d", &m);

    printf("Enter the number of items: ");
    scanf("%d", &n);


    int mat[m][n];


    for (int i = 0; i < m; i++) {
        printf("Enter items sales by girl %d: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    int sales_each, item_each, all_item;
    sales_each = item_each = all_item = 0;
    for (int i = 0; i < m; i++) {
        sales_each = 0;
        for (int j = 0; j < n; j++) {
            sales_each += mat[i][j];
            all_item += mat[i][j];
        }
        printf("\nSales by girl %d: %d", i + 1, sales_each);
    }
    printf("\n");
    for (int j = 0; j < n; j++) {
        item_each = 0;
        for (int i = 0; i < m; i++) {
            item_each += mat[i][j];
        }
        printf("\nSales by item %d: %d", j + 1, item_each);
    }

    printf("\nGrand total of sales: %d", all_item);

    return 0;
}
