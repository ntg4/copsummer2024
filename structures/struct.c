#include <stdio.h>
#include <string.h>
#define NAME_LEN 100

struct part { //"part" is the "tag name" of this structure
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};

void print_part(struct part p){
    printf("Part Number: %d\n", p.number);
    printf("Part Name: %s\n", p.name);
    printf("Quantity (on hand): %d\n", p.on_hand);
}

struct part build_part(int number, char* name, int on_hand){
    struct part p;

    p.number = number;
    strcpy(p.name, name);
    p.on_hand = on_hand;

    return p;
}

int main(){
    struct part part1 = {528, "Disk Drive", 10}; //the members of this struct are 528 in decimal form, "Disk Drive" in string array form, and 10 in decimal form.
    struct part part2 = {696, "CPU", 23};

    struct part part3 = build_part(234, "GPU", 34);

    print_part(part3);
    return 0;
}