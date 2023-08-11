//2. Ask the user to enter any positive integer. Then divides the given number into individual digits and add those individual (Sum) digits. Compile and execute the c Program and display the output on the screen.
#include<stdio.h>
main()
{
	int a,n,d,i,sum=0;
	printf("Enter N value:");
	scanf("%d",&n);
	printf("Enter %d digit number:",n);
	scanf("%d",&a);
	for (i=0;i<n;i++)
	{
		d=a%10;
		sum+=d;
		a=a/10;
	}
	printf("Sum of %d digit number: %d",n,sum);
	return 0;
}
