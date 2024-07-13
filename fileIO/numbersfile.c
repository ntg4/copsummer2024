#include <stdio.h>

void selection_sort(int arr[], int n) {
    int i, j, *ptr = arr;
    for (i = 0; i < n; i++) {
        int min = i;
        for (j = i + 1; j < n; j++) {
            if (*(ptr + min) > *(ptr + j))
                min = j;
        }
        if (min != i) {
            // swap the integers
            int temp;
            temp = *(ptr + min);
            *(ptr + min) = *(ptr + i);
            *(ptr + i) = temp;
        }
    }
}

int main(){
    FILE* pf;

    int num[] = {7, 85, 35, 306, 93, 692, 9, 29, 60, 23};

    pf = fopen("sorted_numbers.txt", "w");
    if (pf == NULL){
        printf("there has been an error in opening the file.\n");
        return 1;
    }

    printf("Writing nums in the file bitches!\n");

    selection_sort(num,10);

    int i;
    for (i=0; i<10; i++){
        fprintf(pf, "%d\n", num[i]);
    }

    fclose(pf);
    printf("done stuff hai, check the file!\n");
    return 0;
}