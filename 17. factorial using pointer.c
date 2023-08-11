#include <stdio.h>

void factorial(int *n, long long *result);

int main() {
    int n;
    long long result = 1;

    printf("Input a number: ");
    scanf("%d", &n);

    factorial(&n, &result);

    printf("The factorial of %d is: %lld\n", n, result);

    return 0;
}

void factorial(int *n, long long *result) {
    if (*n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        *result = 0;
    } else {
    	int i;
        for (i = 1; i <= *n; i++) {
            *result *= i;
        }
    }
}

