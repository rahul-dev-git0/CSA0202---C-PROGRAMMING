#include <stdio.h>

int main(void) {
    char name[100];
    int age;
    char department[100];

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Error reading name.\n");
        return 1;
    }

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1 || age < 0) {
        printf("Please enter a valid age.\n");
        return 1;
    }

    getchar(); // Consume the newline left by scanf.

    printf("Enter your department: ");
    if (fgets(department, sizeof(department), stdin) == NULL) {
        printf("Error reading department.\n");
        return 1;
    }

    printf("\n--- Personal Information ---\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Department: %s", department);

    return 0;
}
