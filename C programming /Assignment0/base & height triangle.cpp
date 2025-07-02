#include <stdio.h>

int main(void) {
    float base, height, area;

    printf("Enter the base of the triangle: ");
    if (scanf("%f", &base) != 1) {
        printf("Invalid input for base.\n");
        return 1;
    }

    printf("Enter the height of the triangle: ");
    if (scanf("%f", &height) != 1) {
        printf("Invalid input for height.\n");
        return 1;
    }

    area = (base * height) / 2.0f;

    printf("\nTriangle dimensions:\n");
    printf("  Base   = %.2f units\n", base);
    printf("  Height = %.2f units\n", height);
    printf("Calculated area = %.2f square units\n", area);

    return 0;
}
