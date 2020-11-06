#include "coloring.h"

void get_random_color(rgb_t color){
    color.red = (uint8_t)rand()%255;
    color.green = (uint8_t)rand()%255;
    color.blue = (uint8_t)rand()%255;
}

