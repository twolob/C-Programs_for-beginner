#include <stdio.h>
int main(void)
{
    int num;
    /*Write a C program to check whether a given number is even or odd number*/
    printf("---Please enter an even or odd number---\n");
    printf("Please enter an even or odd number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        /* code */
        printf("%d is an even integer", num);
    }
    else
    {
        /* code */
        printf("%d is an odd integer", num);
    }
    return 0;
}