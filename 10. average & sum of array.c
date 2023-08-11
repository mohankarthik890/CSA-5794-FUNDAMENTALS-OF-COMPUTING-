#include <stdio.h>
int main() {
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float average = (float) sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}

