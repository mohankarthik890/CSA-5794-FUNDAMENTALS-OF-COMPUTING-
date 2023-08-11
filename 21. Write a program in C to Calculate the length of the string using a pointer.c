//21. Write a program in C to Calculate the length of the string using a pointer 
#include <stdio.h>
int main()
{
    char str[100], *p;
    int length = 0;
    printf("Input a string : ");
    gets(str);

    p = str;

    while (*p != '\0')
    {
        length++;
        p++;
    }

    printf("The length of the given string %s is : %d", str, length);

    return 0;
}

