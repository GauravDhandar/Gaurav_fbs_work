#include <stdio.h>

int main() {
    int a, b;
    char op;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    if (op == '+') printf("Result = %d\n", a + b);
    else if (op == '-') printf("Result = %d\n", a - b);
    else if (op == '*') printf("Result = %d\n", a * b);
    else if (op == '/' && b != 0) printf("Result = %.2f\n", (float)a / b);
    else if (op == '%' && b != 0) printf("Result = %d\n", a % b);
    else printf("Invalid input or division by zero.\n");

    return 0;
}
