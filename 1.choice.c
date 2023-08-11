#include<stdio.h>
#include<conio.h>
void main()
{
	int x,n,choice,r;
	printf("Enter X value:");
	scanf("%d",&x);
	printf("Enter N value:");
	scanf("%d",&n);
	printf("1.Pow(x,n)\n2.Add(x,n)\n3.Sub(x,n)\n4.Mul(x,n)\n5.Div(x,n)\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		r=pow(x,n);
		printf("Pow(x,n)= %d",r);
		break;
		case 2:
		printf("Add(x,n)=%d",x+n);
		break;
		case 3:
		printf("Sub(x,n)=%d",x-n);
		break;
		case 4:
		printf("Mul(x,n)=%d",x*n);
		break;
		case 5:
		printf("Div(x,n)=%d",x/n);
		break;
		default:
		printf("Entered a Invalid choice");		
	}	
}
