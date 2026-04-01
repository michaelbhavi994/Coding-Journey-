#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    // Take full line input (including spaces)
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Traverse each character until null character '\0'
    while(str[i] != '\0') {

        // Check for vowels (both uppercase and lowercase)
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
           str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
           str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }

        // Check for consonants (alphabet but not vowel)
        else if((str[i] >= 'a' && str[i] <= 'z') || 
                (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }

        // Check for digits (0–9)
        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }

        // Check for spaces
        else if(str[i] == ' ') {
            spaces++;
        }

        // Move to next character
        i++;
    }

    // Display results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);

    return 0;
}