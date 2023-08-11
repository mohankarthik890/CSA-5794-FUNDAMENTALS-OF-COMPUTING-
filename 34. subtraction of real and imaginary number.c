#include <stdio.h>
struct complex {
    float real;
    float imag;
};
struct complex sub(struct complex num1, struct complex num2) {
    struct complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}
int main() {
    struct complex num1, num2, result;
    printf("Enter First complex number:\n");
    printf("Enter real part of complex number: ");
    scanf("%f", &num1.real);
    printf("Enter Imaginary part of complex number: ");
    scanf("%f", &num1.imag);
    
    printf("\nEnter Second complex number:\n");
    printf("Enter real part of complex number: ");
    scanf("%f", &num2.real);
    printf("Enter Imaginary part of complex number: ");
    scanf("%f", &num2.imag);
    result = sub(num1, num2);
    printf("\nAddition of complex number :\n");
    printf("Real part of addition : %.2f\n", result.real);
    printf("Imaginary part of addition : %.2f\n", result.imag);
    return 0;
}

