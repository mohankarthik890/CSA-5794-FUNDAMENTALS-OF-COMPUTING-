//5.Compile and Execute the C program were the user to enter an integer to compute the square, cube of the given decimal number using standard method.
#include<stdio.h>
void main()
{
	float a,squ,cube;
	printf("Enter Number:");
	scanf("%f",&a);
	printf("Square Number:%f\n",a*a);
	printf("Cube Number:%f",a*a*a);
	getch();	
}
