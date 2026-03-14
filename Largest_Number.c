#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest;

    // ask user how many numbers they want to enter
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // take array input
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // assume first element is the largest
    largest = arr[0];

    // check remaining elements
    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // print result
    printf("Largest element = %d\n", largest);

    return 0;
}