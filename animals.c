#include <stdio.h>

int main(){
    FILE* pf;
    char name[20], animal[20], gender[20];
    int age;
    float weight;

    pf = fopen("animals.csv", "r");
    if (pf == NULL){
        printf("there has been an error in opening the file.\n");
        return 1;
    }

    while (!feof(pf) && !ferror(pf)){
        while(fscanf(pf, "%[^,] %[^,], %[^,], %d, %f", name, animal, gender, &age, &weight) == 5){
            printf("%s, %s, %s, %d, %f", name, animal, gender, age, weight);
        }
    }

    fclose(pf);
    return 0;
}