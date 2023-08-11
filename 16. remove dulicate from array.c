//16. Program to remove duplicates from the sorted array
#include <stdio.h>

int main() {
    int arr[100], unique_arr[100], n, i, j, k, is_duplicate;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    k = 0;
    for (i = 0; i < n; i++) {
        is_duplicate = 0;
        for (j = 0; j < k; j++) {
            if (arr[i] == unique_arr[j]) {
                is_duplicate = 1;
                break;
            }
        }
        if (!is_duplicate) {
            unique_arr[k] = arr[i];
            k++;
        }
}
    printf("Array with duplicates removed: ");
    for (i = 0; i < k; i++) {
        printf("%d ", unique_arr[i]);
    }
    printf("\n");
    return 0;
}

