#include <stdio.h>

void concatenate(char *s1, char *s2){
    while (*s1){
        s1++; //going to the last element in the array that is /0
    }

    while (*s2){
        *s1++ = *s2++; //equating the first character in s2, like changing the null characters (\0) to the character values that are in s2 one by one
    }

    *s1 = '\0';
}

int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";

    concatenate(str1, str2);
    printf("Output: %s\n", str1);

    return 0;
}