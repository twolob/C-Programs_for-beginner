#include <stdio.h>
int main(void)
{
    /*5. Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.*/
    int age;
    printf("please cheack your age for voting: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        /* code */
        printf("Congratulation! You are eligible for casting your vote");
    }
    else
    {
        /* code */
        printf("I am sorry! You are not eligible for casting your vote");
        return 0;
    }
}