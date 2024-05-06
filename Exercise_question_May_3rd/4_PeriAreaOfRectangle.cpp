// 4.	Write a C program that will obtain the length and width 
// of a rectangle from the user and compute 
// its area and perimeter.

#include<stdio.h>
int main() {
    int length, breadth;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d%d", &length, &breadth);
    int area = length * breadth;
    int peri = 2 * (length + breadth);
    printf("Area = %d\nPerimeter = %d", area, peri);
    return 0;
}
