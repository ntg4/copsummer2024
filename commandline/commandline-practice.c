#include <stdio.h>

int main(int argc, char *argv[]){
    if (argc > 3) {
        printf("argv[3] is: %s\n", argv[3]);
    } else {
        printf("Not enough arguments provided.\n");
    }
    
    return 0;
}