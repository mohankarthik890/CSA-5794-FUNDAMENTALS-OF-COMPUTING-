#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,fact=1;
	printf("Enter positive number:");
	scanf("%d",&a);
	if(a<=0)
	{
		printf("Factorial of zero or negative number or Character not possible");
	}
	else
	{
	for(i=1;i<=a;i++)
	{
		fact*=i;
	}
	printf("Factorial of %d=%d",a,fact);
	}
	return 0;
}
