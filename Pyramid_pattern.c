#include <stdio.h>

int main()
{
    int height;

    // Take input between 1 and 8
    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i++)
    {
        // left spaces
        for (int j = 0; j < height - i; j++)
            printf(" ");

        // left hashes
        for (int j = 0; j < i; j++)
            printf("#");

        // middle gap
        printf("  ");

        // right hashes
        for (int j = 0; j < i; j++)
            printf("#");

        printf("\n");
    }

    return 0;
}