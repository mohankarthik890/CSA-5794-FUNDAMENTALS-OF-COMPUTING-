//10. Write a program to print the below pattern.
/*
1
2  2
3   3  3
4  4  4  4
*/
#include<stdio.h>
void main()
{
	int r,i,j,k;
	printf("Number of line:");
	scanf("%d",&r);
	for(i=1;i<=r;++i){
		for(j=1;j<=i;++j){
			printf("%d ",i);
		}
		printf("\n");
	}
	
}
