#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Natural numbers can't be negative. :)\nTry to enter a valid value and run again \n");
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            sum = sum + i;
        }

        printf("Sum of first %d natural numbers = %d\n", n, sum);
    }

    return 0;
}