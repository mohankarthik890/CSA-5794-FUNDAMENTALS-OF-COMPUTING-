//19. Write a program in C to find the maximum number between two numbers using a pointer. 
#include <stdio.h>
void max(int *a, int *b, int *result);

int main()
{
    int x, n, result;

    printf("Input the first number: ");
    scanf("%d", &x);
    printf("Input the second number: ");
    scanf("%d", &n);

    max(&x, &n, &result);

    printf("%d is the maximum number.", result);

    return 0;
}

void max(int *a, int *b, int *result)
{
    if (*a > *b)
        *result = *a;
    else
        *result = *b;
}

