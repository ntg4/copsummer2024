#include <stdio.h>

int main(){
    FILE* pf;
    int dum;
    int sum = 0;
    char color[20], num[20];

    pf = fopen("dumbbells.txt", "r");
    if (pf == NULL){
        printf("there is a problem opening this file. \n");
        return 1;
    }

    while (fscanf(pf, "%d %s %s", &dum, color, num) == 3){
            sum += dum; //The while loop on fscanf takes line by line from the text file; you dont need to make a for loop for this just make an operation under the while loop which needs to be fulfilled/done/operated line by line.
    }


    fclose(pf);
    printf("%d \n", sum);
    return 0;
}