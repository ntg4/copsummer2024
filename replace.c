#include <stdio.h>

void replace(char *str, char x, char y){
    for(int i=0; str[i]!='\0'; i++){
        if (str[i] == x){
            str[i] = y;
        }
    }
}

int main() {
    char sentence[100];  // Assuming a maximum sentence length of 100 characters

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);  // Read input sentence

    char old_char, new_char;

    printf("Enter the character to replace: ");
    scanf(" %c", &old_char);  // Read character to replace

    printf("Enter the new character: ");
    scanf(" %c", &new_char);  // Read new character

    replace(sentence, old_char, new_char);  // Call replace_char function

    printf("Modified sentence: %s\n", sentence);  // Print modified sentence

    return 0;
}
