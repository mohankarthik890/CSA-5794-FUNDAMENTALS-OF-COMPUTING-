//23. Write a program in C to find the square of any number using the function. 
#include <stdio.h>
float square(float);
int main()
{
    float num;
    printf("Input any number for square : ");
    scanf("%f", &num);
    printf("The square of %g is : %g", num, square(num));
    return 0;
}
float square(float num)
{
    return num * num;
}
