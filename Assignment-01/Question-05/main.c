#include <stdio.h>

int main(void) {
    double first, second, temporary;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &first, &second) != 2) {
        printf("Invalid input. Please enter two numbers.\n");
        return 1;
    }

    printf("Before swapping: first = %.2f, second = %.2f\n", first, second);

    temporary = first;
    first = second;
    second = temporary;

    printf("After swapping:  first = %.2f, second = %.2f\n", first, second);

    return 0;
}
