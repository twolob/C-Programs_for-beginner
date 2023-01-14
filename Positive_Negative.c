#include <stdio.h>
int main(void)
{
    /*3. Write a C program to check whether a given number is positive negative.*/
    int num;
    printf("Type a positive or negative number: ");
    scanf("%d", &num);
    if (num >= 0)
    {
        /* code */
        printf("%d is an positive number", num);
    }
    else
    {
        /* code */
        printf("%d is a negative number", num);
    }
}