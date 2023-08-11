//20. Write a program in C to find the largest element using Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    float *arr, max;

    printf("Input total number of elements (1 to 100): ");
    scanf("%d", &n);

    arr = (float*)malloc(n * sizeof(float));

    for (i = 0; i < n; i++)
    {
        printf("Number %d: ", i+1);
        scanf("%f", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("The largest element is: %.2f", max);

    free(arr);

    return 0;
}

