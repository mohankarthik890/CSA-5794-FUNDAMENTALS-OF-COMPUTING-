#include <stdio.h>

float calculate_interest(float principal, int years, char senior_citizen) {
    float rate_of_interest = (senior_citizen == 'y' || senior_citizen == 'Y') ? 0.12 : 0.1;
    if (principal < 0 || years <= 0) {
        return 0;
    }
    else {
        float interest = principal * rate_of_interest * years;
        return interest;
    }
}

int main() {
    float principal;
    int years;
    char senior_citizen;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the no of years: ");
    scanf("%d", &years);
    printf("Is customer senior citizen (y/n): ");
    scanf(" %c", &senior_citizen);

    float interest = calculate_interest(principal, years, senior_citizen);

    printf("Interest: %f", interest);

    return 0;
}

