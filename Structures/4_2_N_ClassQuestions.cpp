// Create a structure named complex to represent a complex number with real and imaginary parts. 
// Write a C program to add two complex number using function

#include<stdio.h>

typedef struct {
    int real;
    int imaginary;
} complexNo;

int main() {
    complexNo num1, num2;
    printf("Enter the first Complex No: [real, imaginary]\n");
    scanf("%d%d", &num1.real, &num1.imaginary);
    printf("Enter the second Complex No: [real, imaginary]\n");
    scanf("%d%d", &num2.real, &num2.imaginary);

    complexNo result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;

    printf("Result of addition is : %d+%di", result.real, result.imaginary);

    return 0;
}
