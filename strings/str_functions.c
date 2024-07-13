#include <stdio.h>
#include <string.h>

int main() {
    // 1. Compare Strings (strcmp)
    char str1[] = "hello";
    char str2[] = "world";
    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("strcmp: The strings are equal.\n");
    } else if (result < 0) {
        printf("strcmp: The first string is less than the second string.\n");
    } else {
        printf("strcmp: The first string is greater than the second string.\n");
    }

    // 2. Length of a String (strlen)
    size_t length = strlen(str1);
    printf("strlen: The length of the string \"%s\" is %zu.\n", str1, length);

    // 3. Copy Strings (strcpy)
    char source[] = "hello";
    char destination[20];
    strcpy(destination, source);
    printf("strcpy: The copied string is \"%s\".\n", destination);

    // 4. Concatenate Strings (strcat)
    char str3[20] = "hello";
    char str4[] = " world";
    strcat(str3, str4);
    printf("strcat: The concatenated string is \"%s\".\n", str3);

    // 5. Search a String (strstr)
    char str5[] = "hello world";
    char substr[] = "world";
    char *pos = strstr(str5, substr);

    if (pos != NULL) {
        printf("strstr: The substring \"%s\" was found at position %ld.\n", substr, pos - str5);
    } else {
        printf("strstr: The substring was not found.\n");
    }

    // 6. Tokenize a String (strtok)
    char str6[] = "hello,world,example";
    char *token = strtok(str6, ",");

    printf("strtok: Tokens:\n");
    while (token != NULL) {
        printf(" - %s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}