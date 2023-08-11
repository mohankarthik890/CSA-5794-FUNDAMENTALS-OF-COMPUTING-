#include <stdio.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *number, int start, int end) {
    if (start == end) {
        printf("%s\n", number);
    } else {
    	int i;
        for (i = start; i <= end; i++) {
            if (i != start && number[i] == number[start]) {
                continue;
            }
            swap(number + start, number + i);
            permute(number, start + 1, end);
            swap(number + start, number + i);
        }
    }
}

int main() {
    char number[10];
    printf("Enter a number: ");
    scanf("%s", number);
    printf("Permutations are:\n");
    permute(number, 0, strlen(number) - 1);
    return 0;
}

