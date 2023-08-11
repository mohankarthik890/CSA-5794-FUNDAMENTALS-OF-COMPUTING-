//9.	Write a program to print the following pattern. Get the number of rows from the user.
/*            1
            2  1
           3  2  1
         4  3  2  1
       5  4  3  2  1  */
#include<stdio.h>
void main()
{
	int r,i,j,k;
	printf("Number of Rows:");
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r-i;j++)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf("%d ",k);
		}
		printf("\n");
	}

getch();
}

