//6.Compile and Execute the C program to find whether the person is eligible for vote or not. And if that particular person is not eligible, then print how many years are left to be eligible.
#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You eligible for vote");
	}
	else
	{
		printf("Your are allowed to vote after %d years",18-age);
		getch();	
	}
}
