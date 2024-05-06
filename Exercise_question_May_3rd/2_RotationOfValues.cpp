// 2.	Given the values of the variables 
// x, y and z, write a program to rotate 
// their values such that x has the value of y, y 
// has the value of z, and z has the value of x.

#include<stdio.h>
int main() {
    int x, y, z;
    printf("Enter value of x y z:");
    scanf("%d%d%d", &x, &y, &z);
    int temp = x;
    x = y;
    y = z;
    z = temp;

    printf("Value of x y z now is: %d %d %d", x, y, z);
    return 0;
}
