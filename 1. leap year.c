//1. A year has 365 days but leap year consists of 366 days. This one day is added in the month of February. This month which generally has 28 days and also known as the shortest month in a year would get added with an extra day, which gives us a total of 29 days in that month. It is based on the Georgian calendar. Compile and Execute the C program for checking out whether a given year is a leap year or not.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter Date:");
	scanf("%d/%d/%d",&a,&b,&c);
	if(c%4==0){
		printf("%d/%d/%d is a leap year",a,b,c);
	}
	else
	{
		printf("%d/%d/%d is not a leap year",a,b,c);
	}
}
