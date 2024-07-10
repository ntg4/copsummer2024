/* read_line consists primarily of a loop that calls getchar to read a
   character and then stores the character in str, provided that there’s
   room left: */
int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0'; /* terminates string */
    return i; /* number of characters stored */
}




/* read_line, pointer version */
int read_line(char *str, int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){
        if (i < n){
            *str++= ch;
            i++;
        }
    }
    *str = '\0'; /* terminates string */
    return i; /* number of characters stored */
}
