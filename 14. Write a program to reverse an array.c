//14. Write a program to reverse an array
#include <stdio.h>
void reverse_array(int arr[], int size) {
	int i;
    for (i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
int main() {
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    reverse_array(arr, size);
    printf("Reverse array elements = {");
    for (i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf("}\n");
    return 0;
}

