#include "ppm.h"
#include <stdio.h>

rgb_t rgb(uint8_t r, uint8_t g, uint8_t b) {
    rgb_t c = {r, g, b};
    return c;
}

void ppm(FILE *file, rgb_t *pixels, int width, int height) {
    long len = width * (long) height;
    fprintf(file, "P3\n%d %d\n255\n", width, height);
    for (long i = 0; i < len; i++)
        fprintf(file, "%d %d %d\n", pixels[i].r, pixels[i].g, pixels[i].b);
}

void rgb_print(rgb_t c) {
    printf("rgb(%d, %d, %d)\n", c.r, c.g, c.b);
}
