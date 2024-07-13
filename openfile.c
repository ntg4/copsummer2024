#include <stdio.h>
#define LEN 100

int main() {

    //opening the file
    FILE *inputfile;
    inputfile = fopen("text.txt","r");        //FILE* fopen (char* filename, char* mode)
    if (inputfile == NULL){
        printf("Error opening the file.\n");
        return 1;
    }

    //reading the file
    char sentence[LEN + 1];
    while ((fgets(sentence, LEN + 1, inputfile)) != NULL){     //char* fgets (char* buffer, int max, FILE* inputfile)
        printf("%s",sentence);
    }

    

    //writing in a file if the file is opened in the writing mode
    fputs("hello\n", inputfile);
    fputs("hello I am Naman Sehgal\n", inputfile);
    
    //close file
    fclose(inputfile);


    return 0;
}