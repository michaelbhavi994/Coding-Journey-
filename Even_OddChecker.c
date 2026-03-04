#include <stdio.h>

// Function to check even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
}

int main() {
    int number;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }

    checkEvenOdd(number);

    return 0;
}