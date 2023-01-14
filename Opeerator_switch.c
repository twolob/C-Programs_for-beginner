// A calculator with four(4) oporations
//(Addition, Subtraction, Multiplication and Division)
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
    int num1, num2;
    char oporater;
    float results;
    // A prompt for the user input
    printf("Please enter the first number: ");
    scanf("%d %c %d", &num1, &oporater, &num2);

    switch (oporater)
    {
    // Addition
    case '+':
        results = num1 + num2;
        printf("%.2f", results);
        break;

    // Subtraction
    case '-':
        results = num1 - num2;
        printf("%.2f", results);
        break;

    // Multiplication
    case '*':
        results = num1 * num2;
        printf("%.2f", results);
        break;

    // Division
    case '/':
        results = num1 / num2;
        printf("%.2f", results);
        break;

    default:
        printf("Unknown operator.");
        break;
    }

    return 0;
}