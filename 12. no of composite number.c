#include <stdio.h>

int is_composite(int n) {
    if (n <= 1) {
        return 0;
    }
    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}

void main() {
	int arr[100],i,n;
	printf("Enter number of elements in array:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=1;i<n;i++){
		scanf("%d ",&arr[i]);	
	}
   
    int count = 0;
    for (i = 0; i <n; i++) {
        if (is_composite(arr[i])) {
            ++count;
        }
    }
    printf("Number of Composite Numbers = %d\n", count);
    getch();
}

