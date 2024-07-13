#include <stdio.h>

struct color{
    int red;
    int green;
    int blue;
};

struct color make_color(int red, int green, int blue) {
    struct color color;

    if (red < 0) {
        color.red = 0;
    } else if (red > 255) {
        color.red = 255;
    } else {
        color.red = red;
    }

    if (green < 0) {
        color.green = 0;
    } else if (green > 255) {
        color.green = 255;
    } else {
        color.green = green;
    }

    if (blue < 0) {
        color.blue = 0;
    } else if (blue > 255) {
        color.blue = 255;
    } else {
        color.blue = blue;
    }

    return color;
}

struct color brighter(struct color c){
    c.red = (c.red == 0) ? (int)((c.red + 3) / 0.7) : (int)(c.red / 0.7);
    c.green = (c.green == 0) ? (int)((c.green + 3) / 0.7) : (int)(c.green / 0.7);
    c.blue = (c.blue == 0) ? (int)((c.blue + 3) / 0.7) : (int)(c.blue / 0.7);

    c.red = (c.red > 255) ? 255 : c.red;
    c.green = (c.green > 255) ? 255 : c.green;
    c.blue = (c.blue > 255) ? 255 : c.blue;
    return c;
}

int main(){
    struct color magenta = {255, 0, 255};
    //printf("%d %d %d\n", magenta.red, magenta.green, magenta.blue);

    //struct color color2;
    //scanf("%d, %d, %d", &color2.red, &color2.green, &color2.blue);
    //printf("%d, %d, %d\n", color2.red, color2.green, color2.blue);

    struct color gold = make_color (255, 215, 0);
    struct color brighter_gold = brighter (gold); 
    printf("%d, %d, %d\n", brighter_gold.red, brighter_gold.green, brighter_gold.blue);

    return 0;
}