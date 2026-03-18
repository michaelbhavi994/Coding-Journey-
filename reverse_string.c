#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // find length
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("Reversed string: ");

    // print in reverse
    for(i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}