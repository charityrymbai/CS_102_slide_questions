// h. Write a C program to print the summation of first N terms of the given
// series. Value of N will be entered by the user.
// l-(1/2)+(1/3)-(1/4)+...

#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("Enter the no of terms: ");
    scanf("%d", &n);
    float sum = 1;
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0)
            sum -= (1 / (float)i);
        else {
            sum += (1 / (float)i);
        }
    }

    printf("Result: %f", sum);

    return 0;
}