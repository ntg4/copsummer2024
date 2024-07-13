#include <stdio.h>

int main(){
    FILE* pf;

    int num[] = {7, 85, 35, 306, 93, 692, 9, 29, 60, 23};

    pf = fopen("numbers.txt", "w");
    if (pf == NULL){
        printf("there has been an error in opening the file.\n");
        return 1;
    }

    printf("Writing nums in the file bitches!\n");

    int i;
    for (i=0; i<10; i++){
        fscanf(pf, "%d\n", i);
    }

    fprintf(pf, "%d", i);

    fclose(pf);
    printf("done stuff hai, check the file!\n");
    return 0;
}