/* compiled with: gcc -o example example.c ppm.c */
#include <stdio.h>
#include "ppm.h"

#define WIDTH 40
#define HEIGHT 30

int main(void) {
    rgb_t buf[WIDTH * HEIGHT]; /* buffer */

    /* populate the buffer */
    for (int i = 0; i < WIDTH * HEIGHT; i++) {
        int w = i % 256;
        buf[i] = rgb(w, w, w);
    }

    /* write */
    FILE *fp = fopen("out.ppm", "w");
    ppm(fp, buf, WIDTH, HEIGHT);
    fclose(fp);

    return 0;
}
