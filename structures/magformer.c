#include <stdio.h>
#include <string.h>
#define NUM_CHARS 30

struct magformer {
    char color[NUM_CHARS + 1];
    char shape[NUM_CHARS + 1];
    int quantity;
};

int compare(struct magformer m1, struct magformer m2){
    int same = 1;

    if (strcmp(m1.color,m2.color) == 0){
        printf("SAME COLOR\n");
    } else {
        printf("COLOR IS DIFFERENT\n");
        same = 0;
    }

    if (strcmp(m1.shape,m2.shape)==0){
        printf("SAME SHAPE\n");
    } else {
        printf("SHAPE IS DIFFERENT\n");
        same = 0;
    }

    return same;
}

int main(){
    struct magformer mag1 = {"Olive Green", "Square", 69};
    struct magformer mag2 = {"Olive Green", "Square", 40};

    if (compare (mag1, mag2)){
        printf("The mags are similar.\n");
    } else {
        printf("The mags are nott similar. \n");
    }


    //printf("%s, %s, %d", mag1.color, mag2.color, mag1.quantity);
    return 0;
}