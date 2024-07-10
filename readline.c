#include <stdio.h>
#define STR_LEN 10

int read_line(char str[], int n){
    int i = 0;
    char ch;

    while (i < n - 1 && (ch = getchar()) != '\n'){ //this loop will input the values into the str[] array that the user gives while the number of values remain less than the length of the str[] array.
        str[i++] = ch;
    }
    
    str[i] = '\0';

    while (ch != '\n'){ //This loop will take all the values of the input that does not go into the first loop. It takes the values and stores them into an imaginary world of minions.
        ch = getchar(); 
    }

    return i;
}

int main()
{
    int num_chars;
    char sen[STR_LEN + 1];
    
    printf("Enter a sentence: ");
    num_chars = read_line(sen, STR_LEN);
    
    printf("You entered: %s, it has %d characters\n", sen, num_chars);
    
    return 0;
}