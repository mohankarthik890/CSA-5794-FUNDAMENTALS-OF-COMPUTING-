#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2, num3;
    
    printf("Input the value of 1st element : ");
    scanf("%d", &num1);
    printf("Input the value of 2nd element : ");
    scanf("%d", &num2);
    printf("Input the value of 3rd element : ");
    scanf("%d", &num3);
    
    printf("\nThe value before swapping are :\n");
    printf("element 1 = %d\n", num1);
    printf("element 2 = %d\n", num2);
    printf("element 3 = %d\n", num3);
    
    swap(&num1, &num3); 
    swap(&num2, &num3);
    
    
    printf("\nThe value after swapping are :\n");
    printf("element 1 = %d\n", num1);
    printf("element 2 = %d\n", num2);
    printf("element 3 = %d\n", num3);
    
    return 0;
}

