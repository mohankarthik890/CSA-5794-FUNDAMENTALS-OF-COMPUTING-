//24. Write a program in C to check a given number is even or odd using the function
#include <stdio.h>
int even_odd(int);

int main()
{
    int num;

    printf("Input any number : ");
    scanf("%d", &num);

    if (even_odd(num) == 1)
    {
        printf("The entered number is even.");
    }
    else
    {
        printf("The entered number is odd.");
    }

    return 0;
}

int even_odd(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

