#include <stdio.h>

int main()
{
    int arr[100], n, i, key;
    int found = 0;

    // ask how many elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // input array
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // number to search
    printf("Enter the number to search: ");
    scanf("%d", &key);

    // searching element
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Element found in the array.YAY !\n");
    else
        printf("Element not found in the array. Sorry :( \n");

    return 0;
}