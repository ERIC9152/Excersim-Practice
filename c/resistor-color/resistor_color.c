#include "resistor_color.h"

int color_code(resistor_band_t color) {
    return color;
}

const resistor_band_t* colors(void){
    static const resistor_band_t ALL_COLORS[]={BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
    return ALL_COLORS;
}

