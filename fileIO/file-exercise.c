#include <stdio.h>
#define LEN 100

int main(){
    FILE* inputfile;
    FILE* outputfile;
    
    inputfile = fopen("test.txt","r");
    if (inputfile == NULL){
        printf("There is a problem opening the file.\n");
        return 1;
    }

    outputfile = fopen("test2.txt", "w");
    if (outputfile == NULL){
        printf("there is an error opening the file.\n");
        fclose(inputfile);
        return 1;
    }

    char sentence[LEN + 1];
    while ((fgets(sentence, LEN + 1, inputfile)) != NULL){
        for (int i = 0; sentence[i] != '\0'; i++){
            if (sentence[i]=='\n'){
                sentence[i] = ' ';
            }
        }
        fputs(sentence,outputfile);
    }

    fclose(outputfile);
    fclose(inputfile);
    return 0;
}