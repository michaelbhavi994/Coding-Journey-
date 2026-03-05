#include <stdio.h>

int main()
{
    float num1, num2;
    char operator;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Using switch case to perform operations
    switch(operator)
    {
        case '+':
            printf("Result = %.2f", num1 + num2);
            break;

        case '-':
            printf("Result = %.2f", num1 - num2);
            break;

        case '*':
            printf("Result = %.2f", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.");
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}