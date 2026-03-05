#include <stdio.h>

int main() {

    // Declare three variables
    int num1, num2, num3;

    // Take input from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check which number is the largest
    if (num1 >= num2 && num1 >= num3) {
        printf("%d is the largest number.\n", num1);
    }

    else if (num2 >= num1 && num2 >= num3) {
        printf("%d is the largest number.\n", num2);
    }

    else {
        printf("%d is the largest number.\n", num3);
    }

    return 0;
}