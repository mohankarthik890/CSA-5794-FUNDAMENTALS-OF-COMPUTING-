//26. Write a program to calculate Pow(x,n), Add(x,n), Sub(x,n), Mul(x,n), Div(x,n)? Get the input and choice from the user.
#include <stdio.h>
#include <math.h>

int main() {
    float x, n, result;
    int choice;

    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%f", &n);
    printf("Enter your choice:\n");
    printf("1. Pow(x,n)\n2. Add(x,n)\n3. Sub(x,n)\n4. Mul(x,n)\n5. Div(x,n)\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = pow(x, n);
            printf("Pow(x,n) = %.2f\n", result);
            break;
        case 2:
            result = x + n;
            printf("Add(x,n) = %.2f\n", result);
            break;
        case 3:
            result = x - n;
            printf("Sub(x,n) = %.2f\n", result);
            break;
        case 4:
            result = x * n;
            printf("Mul(x,n) = %.2f\n", result);
            break;
        case 5:
            if (n == 0) {
                printf("Divide by zero error!\n");
            } else {
                result = x / n;
                printf("Div(x,n) = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}

