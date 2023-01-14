#include <stdio.h>
#include <conio.h>
#define MAX 50

int main(void)
{
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolums, brows, bcolums;
    int i, j, k;
    int sum = 0;

    printf("Enter the rows and colums of matrix a: ");
    scanf("%d %d", &arows, &acolums);

    printf("Please enter matrix a: \n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < acolums; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and colums of matrix b: \n");
    scanf("%d %d", &brows, &bcolums);

    if (acolums != brows)
    {
        printf("I am sorry! The matrix is not applicable.");
    }
    else
    {
        printf("Please enter matrix b: \n");
        for (i = 0; i < brows; i++)
        {
            for (j = 0; j < bcolums; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
    }

    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolums; j++)
        {
            for (k = 0; k < brows; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    printf("Result of the a and b matrix \n");
    for (i = 0; i < arows; i++)
    {
        for (j = 0; j < bcolums; j++)
        {
            printf("%d", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}