#include <stdio.h>

int main (void){
    char operator = 0;
    double num1 = 0;
    double num2 = 0;
    double result = 0;

    printf("\nEnter an operator(+ - * /): ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(operator)
    {
        case '+':
            result = num1 + num2;
            printf("result: %.2lf", result);
            break;

        case '-':
            result = num1 - num2;
            printf("result: %.2lf", result);
            break;

        case '*':
            result = num1 * num2;
            printf("result: %.2lf", result);
            break;

        case '/':
            result = num1 / num2;
            printf("result: %.2lf", result);
            break;

        default: 
            printf("%c is not a valid operator", operator);
    }
    return 0;
}