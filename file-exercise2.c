#include <stdio.h>

int main(){
    FILE* pFile;
    char courseid[20], status[20];
    int studentid;

    pFile = fopen("testexer.txt","r");
    if (pFile == NULL){
        printf("There was a problem in reading the file.\n");
        return 1;
    }

    while (!feof(pFile) && !ferror(pFile)){
        if (fscanf(pFile, "%s %d %s", courseid, &studentid, status) == 3){
            printf("%s %d %s \n", courseid, studentid, status);
        }
    }

    fclose(pFile);
    return 0;
}