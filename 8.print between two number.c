//8.Compile and Execute the C program to print numbers from P to Q but except  the digit R using continue statement. Check and display the output on the screen.
#include<stdio.h>
void main()
{
	int p,q,r,i,num=0,digit;
	printf("P=");
	scanf("%d",&p);
	printf("Q=");
	scanf("%d",&q);
	printf("R=");
	scanf("%d",&r);
	printf("Number are=");
	for(i=p;i<=q;i=i+r)
	{
		while(num>0){
			digit=num%10;
			num=num/10;
			if(digit==r){
				continue;
			}
		}
	printf("%d,",i);
	}
getch();
}
