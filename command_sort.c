#include <stdio.h>
#include <string.h>
// REVISEEEEEEEEEEEEE
void selectionSort(char *a[], int n){
    int i, j;
    char *temp;

    for (i = 0; i < n-1; i++){ //n-1 because i will go till the second last element and j will go till the last element
        int min = i;
        for (j = i+1; j < n; j++){
            if ((strcmp(a[j], a[min]))<0 ){ //if a[j] is smaller than the a[min] or a[i]
                min = j; //finding the minimum element in the array
            }
        }

        temp = a[min]; //temp now points to the location of the minimum number
        a[min] = a[i]; //the minimum number becomes the first number in the array
        a[i] = temp; //the first number in the array goes to the place of the minimum number
    }
}

int main(int argc, char *argv[]){
    if (argc <= 1) {
        printf("Usage: %s <list of strings to sort>\n", argv[0]);
        return 1;
    }

    selectionSort(argv + 1, argc - 1);

    printf("sorted arguments: \n");

    for(int i = 1; i < argc; i++){
        printf("%s", argv[i]);
    }

    return 0;
}