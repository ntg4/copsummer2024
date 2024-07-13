#include <stdio.h>
#include <string.h>


void swap(char *a, char *b) {
    char tmp[4];
    strcpy(tmp, a);
    strcpy(a, b);
    strcpy(b, tmp);
}



int main(){
    char w[3][4] = {"dog", "rat", "cat"};

    swap(w[1],w[2]);
    swap(w[0],w[1]);

    for(int i=0; i < 3; i++){
        printf("%s\n", w[i]);
    }
}