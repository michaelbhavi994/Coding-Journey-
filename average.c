#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int sum = 0;
    float average;

    // ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // input array values
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];   // add numbers to sum
    }

    // calculate average
    average = (float)sum / n;

    // print result
    printf("Average = %.2f\n", average);

    return 0;
}