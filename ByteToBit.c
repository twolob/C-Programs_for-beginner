#include <stdio.h>
#include <conio.h>
int main(void)
{
    int byte, bit = 8, answer;
    printf("Convert a byte to bit. Please enter your byte: ");
    scanf("%d", &byte);
    answer = byte * bit;
    printf("The bit of %d is %d", byte, answer);
    return 0;
}