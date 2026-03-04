#include <stdio.h>

// Pointer swap function
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Using Temp\n2. Without Temp\n3. Using Pointer\nEnter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1: {   // Using temp
            int temp = a;
            a = b;
            b = temp;
            break;
        }

        case 2:     // Without temp
            a = a + b;
            b = a - b;
            a = a - b;
            break;

        case 3:     // Using pointer
            swap(&a, &b);
            break;

        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("After Swapping: a = %d, b = %d\n", a, b);

    return 0;
}