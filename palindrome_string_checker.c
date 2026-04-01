#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length, isPalindrome = 1; // assume it's palindrome initially

    // Input from user
    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of string
    length = strlen(str);

    // Compare characters
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            isPalindrome = 0; // not a palindrome
            break; // exit loop early
        }
    }

    // result 
    if(isPalindrome)
        printf("Palindrome string");
    else
        printf("Not a palindrome");

    return 0;
}