#include <stdio.h>

int main()
{
    char name[100];   // create a character array to store name
    
    printf("What's your good name? :) ");
    scanf("%s", name);   // takes input
    
    printf("Hello, %s!\n", name);

    return 0;
}