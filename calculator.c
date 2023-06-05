#include <stdio.h>
int main () {
    int num1, num2;
    char op;
    printf ("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf ("%d", &num2);
    printf ("Enter an operator: ");
    scanf (" %c", &op);
    int ans = 0;
    switch(op) {
        case '+': ans = num1 + num2;
        printf("Sum of numbers is: %d\n", ans);
        break;

        case '-': ans = num1 - num2;
        printf("Difference of numbers is %d\n", ans);
        break;

        case '*': ans = num1 * num2;
        printf("Product of numbers is: %d\n", ans);
        break;

        case '/': ans = num1 / num2;
        printf("Quotient of %d and %d is: %d\n", num1, num2, ans);
        break;

        default: printf("Not a valid input!");
    }
    return 0;
}