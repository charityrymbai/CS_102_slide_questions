// Q3. Define a structure named circle to represent a circle with a radius.
//  Write a C program to calculate the area and perimeter of N circle (use array of structure)
//   and display the results using call by reference

#include<stdio.h>

typedef struct {
    int radius;
} circleStructure;

void printResult(int* radius) {
    int r = *radius;
    printf("\nArea: %f", 3.14 * r * r);
    printf("\nPerimeter: %f", 2 * 3.14 * r);
}

int main() {
    int n;
    printf("Enter the number of circles: ");
    scanf("%d", &n);

    circleStructure circle[n];

    printf("Enter the radii of the circles: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &circle[i].radius);
    }

    for (int i = 0; i < n; i++) {
        printf("\n\nFor Circle %d:", i + 1);
        printResult(&circle[i].radius);
    }


    return 0;
}