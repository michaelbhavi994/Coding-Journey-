#include <stdio.h>

int main()
{
    int num;          
    int reversed = 0; 
    int remainder;   

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        remainder = num % 10;   // extract the last digit of the number
        reversed = reversed * 10 + remainder; // add the digit to the reversed number
        num = num / 10;     // remove the last digit from the original number
    }

    // print the reversed number
    printf("Reversed number = %d\n", reversed);

    return 0; 
}