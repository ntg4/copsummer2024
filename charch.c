#include <stdio.h>

int main() {
    // A) Legal
    char ch_array[] = "cd";
    printf("ch_array: %s\n", ch_array);

    // B) Legal
    char *ch_ptr1 = "ab";
    printf("ch_ptr1: %s\n", ch_ptr1);

    // C) Legal
    char ch = 89;
    printf("ch: %c\n", ch);

    // D) Illegal
    // char *ch_ptr2 = 'x'; // Uncommenting this line will cause a compilation error

    // If you want to initialize a char pointer to a single character,
    // you should use a string literal or the address of a char variable:
    char single_char = 'x';
    char *ch_ptr2 = &single_char;
    printf("ch_ptr2: %c\n", *ch_ptr2);

    // Alternatively, use a string literal
    char *ch_ptr3 = "x";
    printf("ch_ptr3: %s\n", ch_ptr3);

    return 0;
}
