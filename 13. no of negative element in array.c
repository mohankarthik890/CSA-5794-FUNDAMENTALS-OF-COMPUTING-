#include <stdio.h>
int count_negative_numbers(double arr[], int size) {
    int count = 0,i;
    for (i = 0; i < size; i++) {
        if ((int) arr[i] < 0) {
            count++;
        }
    }
    return count;
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    double arr[size];
    int i;
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++) {
        scanf("%lf", &arr[i]);
    }
    int num_negatives = count_negative_numbers(arr, size);
    printf("Number of negative numbers in array elements = %d\n", num_negatives);
    return 0;
}

