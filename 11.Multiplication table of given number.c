//11.Multiplication table of given number upto n.
#include<stdio.h>
void main()
{
	int m,n,i;
	printf("M=");
	scanf("%d",&m);
	printf("N=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d x %d=%d\n",i,m,m*i);
	}
getch();
}
