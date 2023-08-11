//22. Write a program in C to compute the sum of all elements in an array using pointers.  
#include <stdio.h>
int main()
{
    int arr[10], n, sum = 0, *ptr,i;

    printf("Input the number of elements to store in the array (max 10) : ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for (i = 0; i < n; i++)
    {
        sum += *ptr;
        ptr++;
    }

    printf("The sum of array is : %d", sum);

    return 0;
}

