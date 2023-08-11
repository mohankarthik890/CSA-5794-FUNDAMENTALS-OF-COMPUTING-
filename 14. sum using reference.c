#include <stdio.h>
void add(int *a, int *b, int *sum) {
    *sum = *a + *b;
}
int main() {
    int x, n, sum;
    printf("Input the first number: ");
    scanf("%d", &x);
    printf("Input the second number: ");
    scanf("%d", &n);
    add(&x, &n, &sum);
    printf("The sum of %d and %d is %d\n", x, n, sum);
    return 0;
}

