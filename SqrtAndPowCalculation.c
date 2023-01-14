#include <stdio.h>
#include <math.h>
int main()
{
    // Fanding the square root of the user input
    int square;
    printf("Please enter a nume: ");
    scanf("%i", &square);

    double result = sqrt(square);
    printf("The square Root of %i is: %.2lf  \n", square, result);

    // The power of the square root theat was calculated
    int num = 5;
    double power = pow(num, result);
    printf("The power of the square root is: %.2lf  \n", power);

    return 0;
}