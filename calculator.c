#include <stdio.h>
#include <math.h>

int main()
{
    double num1;
    double num2;
    char op;
    double result;

    printf("Enter num1: ");
    scanf("%lf", &num1);

    printf("Enter an operator: ");
    scanf(" %c", &op);

    printf("Enter num2: ");
    scanf("%lf", &num2);

    switch(op)
    {
    case '+':
        result = num1 + num2;
        printf("%lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("%lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("%lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("%lf", result);
        break;
    default:
        printf("Invalid operator");
    }

    return 0;
}