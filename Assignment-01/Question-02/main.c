#include <stdio.h>

int main(void) {
    double first, second;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &first, &second) != 2) {
        printf("Invalid input. Please enter two numbers.\n");
        return 1;
    }

    printf("Addition: %.2f\n", first + second);
    printf("Subtraction: %.2f\n", first - second);
    printf("Multiplication: %.2f\n", first * second);

    if (second != 0.0) {
        printf("Division: %.2f\n", first / second);
    } else {
        printf("Division: undefined (cannot divide by zero).\n");
    }

    return 0;
}
