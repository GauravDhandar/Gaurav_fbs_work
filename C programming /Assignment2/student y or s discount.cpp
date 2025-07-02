#include <stdio.h>

int main() {
    float price, discount = 0.0f;
    char student;

    printf("Enter purchase amount: ");
    scanf("%f", &price);
    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);

    if (student == 'y' || student == 'Y') {
        if (price > 500)
            discount = price * 0.20f;
        else
            discount = price * 0.10f;
    } else {
        if (price > 600)
            discount = price * 0.15f;
        
    }

    printf("Original Price: %.2f\n", price);
    printf("Discount: %.2f\n", discount);
    printf("Final Price: %.2f\n", price - discount);

    return 0;
}
