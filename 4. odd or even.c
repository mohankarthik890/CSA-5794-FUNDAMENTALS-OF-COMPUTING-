//4. Write a program to print the all Odd numbers and number of even numbers in between M and N?
#include <stdio.h>

int main() {
    int M, N,i, count = 0;
    printf("Enter M and N: ");
    scanf("%d %d", &M, &N);

    printf("All Odd Numbers: ");
    for(i=M+1; i<N; i++){
        if(i%2 == 1){
            printf("%d ", i);
        } else {
            count++;
        }
    }
    printf("\nAll Even Numbers: ");
    for(i=M+1; i<N; i++){
        if(i%2 == 0){
            printf("%d ", i);
        }
    }
    printf("\nCount of Even Numbers: %d\n", count);

    return 0;
}

