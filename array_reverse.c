#include <stdio.h>

int main()
{
    int arr[100], n, i;

    // ask number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // input array
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order:\n");

    // print array in reverse
    for(i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}