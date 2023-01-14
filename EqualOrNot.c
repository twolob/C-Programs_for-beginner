#include <stdio.h>
/*1. Write a C program to accept two integers and check weather they are equal or not.*/
// main function
int main(void)
{
    int num1, num2;
    // The input and output of the program
    printf("---- Calculate two numbers----\n");
    printf("Please eanter the first integer: ");
    scanf("%d", &num1);
    printf("Please eanter the second integer: ");
    scanf("%d", &num2);
    printf("------------------------------------\n");
    // Condition between the two integer
    if (num1 == num2)
    {
        /* code */
        printf("Number1 and Number2 are equal");
    }
    else
    {
        /* code */
        printf("Number1 and Number2 are not equal");
    }
    // End
    return 0;
}