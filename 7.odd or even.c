//7.Compile and Execute the C program to check whether the number divisible by 2, then print the given number even otherwise odd. Check and display the output on the screen.
#include<stdio.h>
void main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("The given number is even");
	}
	else
	{
		printf("The given number is odd");
	}
getch();
}

