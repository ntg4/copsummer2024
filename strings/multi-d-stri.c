#include <stdio.h>

int main(){
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    for (int i=0; i<8; i++){
        printf("%s \n", planets[i]);
    }

    printf("%s", planets[3]);
    printf("%c", planets[2][2]);

    return 0;
}