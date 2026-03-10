#include <stdio.h>

int main()
{
    int num;          
    int i;         
    long factorial = 1;   

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
       
        for(i = 1; i <= num; i++)
        {
            factorial = factorial * i;   // multiply numbers one by one
        }

       
        printf("Factorial of %d is %ld\n", num, factorial);
    }
    
    printf("Thank you !");

    return 0;  
}