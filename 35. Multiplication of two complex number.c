//35. Multiplication of two complex numbers.
#include <stdio.h>
struct complex {
    float real;
    float imag;
};
struct complex multiply(struct complex num1, struct complex num2);
int main() {
    struct complex num1, num2, result;
    printf("Enter First complex number: \n");
    printf("enter real part of complex number: ");
    scanf("%f", &num1.real);
    printf("enter Imaginary part of complex number: ");
    scanf("%f", &num1.imag);
    printf("\nEnter Second complex number: \n");
    printf("enter real part of complex number: ");
    scanf("%f", &num2.real);
    printf("enter Imaginary part of complex number: ");
    scanf("%f", &num2.imag);
    result = multiply(num1, num2);
    printf("\nProduct = %.2f + %.2fi\n", result.real, result.imag);
    return 0;
}
struct complex multiply(struct complex num1, struct complex num2) {
    struct complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    return result;
}

