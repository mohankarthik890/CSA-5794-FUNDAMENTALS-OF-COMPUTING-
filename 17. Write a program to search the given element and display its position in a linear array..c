//17. Write a program to search the given element and display its position in a linear array.
#include <stdio.h>
int main() {
    int n, key,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int pos = -1;
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            pos = i+1;
            break;
        }
    }
    if(pos != -1) {
        printf("Given element %d is found at %dth position", key, pos);
    } else {
        printf("Given element %d is not found in the array", key);
    }
    return 0;
}

