
#include <stdio.h>
//you can only use (%) remainder for the integer number
//the division of two integers will be integer but if we add (double)a/b , it will be double
int main(void) {
    double a, b;
    double sum, sub, mult, div;

    
    printf("Please enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    
    sum = a + b;
    sub = a - b;
    mult = a * b;

    
    printf("\n----- Calculator -----\n");
    printf("%-15s : %.2f\n", "Addition", sum);
    printf("%-15s : %.2f\n", "Subtraction", sub);
    printf("%-15s : %.2f\n", "Multiplication", mult);

    if (b != 0) {
        div = a / b;
        printf("%-15s : %.2f\n", "Division", div);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}
