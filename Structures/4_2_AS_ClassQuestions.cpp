// Create a structure named complex to represent a complex number with real and imaginary parts. 
// Write a C program to add two complex number using function

#include<stdio.h>

typedef struct {
    int real;
    int imaginary;
} complexNo;

complexNo complexAdd(complexNo num1, complexNo num2);
void scanComplexNo(complexNo* num);

int main() {
    complexNo num1, num2;
    printf("Enter the first Complex No: [real, imaginary]\n");
    scanComplexNo(&num1);
    printf("Enter the second Complex No: [real, imaginary]\n");
    scanComplexNo(&num2);

    printf("Result of addition is : %d+%di", num1.real, num1.imaginary);

    return 0;
}

void scanComplexNo(complexNo* num) {
    scanf("%d%d", num->real, num->imaginary);
}

complexNo complexAdd(complexNo num1, complexNo num2) {
    complexNo sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    return sum;
}
