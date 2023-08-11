//18.	Write a program in C to add two numbers using pointers. 
#include <stdio.h>
int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    printf("The sum of the entered numbers is: %d", sum);
    return 0;
}

