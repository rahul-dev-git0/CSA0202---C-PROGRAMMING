#include <stdio.h>

int main(void) {
    double principal, rate, time, simple_interest, total_amount;

    printf("Enter principal amount: ");
    if (scanf("%lf", &principal) != 1 || principal < 0.0) {
        printf("Please enter a valid principal amount.\n");
        return 1;
    }

    printf("Enter annual interest rate (%%): ");
    if (scanf("%lf", &rate) != 1 || rate < 0.0) {
        printf("Please enter a valid interest rate.\n");
        return 1;
    }

    printf("Enter time in years: ");
    if (scanf("%lf", &time) != 1 || time < 0.0) {
        printf("Please enter a valid time period.\n");
        return 1;
    }

    simple_interest = (principal * rate * time) / 100.0;
    total_amount = principal + simple_interest;

    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Total Amount: %.2f\n", total_amount);

    return 0;
}
