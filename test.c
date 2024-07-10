#include <stdio.h>
#define STR_LEN 10

int read_line(char str[], int n) {
    int i = 0;
    char ch;

    // Skip leading whitespace characters
    while ((ch = getchar()) == ' ' || ch == '\t')
        ;  // Do nothing, just skip whitespace
    
    // Store the first non-whitespace character, if there is one
    if (ch != '\n' && ch != EOF) {
        str[i++] = ch;
    }

    // Read characters into str[] until newline or maximum length (n-1)
    while (i < n - 1 && (ch = getchar()) != '\n' && ch != EOF) {
        str[i++] = ch;
    }
    
    str[i] = '\0'; // Null-terminate the string
    
    // Discard extra characters in input buffer until newline is encountered
    while (ch != '\n' && ch != EOF) {
        ch = getchar();
    }

    return i; // Return the number of characters stored in str[]
}

int main() {
    int num_chars;
    char sen[STR_LEN + 1];
    
    printf("Enter a sentence: ");
    num_chars = read_line(sen, STR_LEN);
    
    printf("You entered: %s, it has %d characters\n", sen, num_chars);
    
    return 0;
}
