#include <stdio.h>
int main(void)
{
    /*4. Write a C program to find whether a given year is a leap yeap or not*/
    int year;
    printf("Please enter a year if you want to know whether the year is leap or not: ");
    scanf("%d", &year);
    if (((year % 4 == 0) || (year % 400 == 0)) || (year % 100 == 0))
    {
        /* code */
        printf("%d is a leap year\n", year);
    }
    else
    {
        /* code */
        printf("%d is not a leap year", year);
    }
    return 0;
}