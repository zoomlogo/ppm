/* compiled with: gcc -o example example.c ppm.c */
#include <stdio.h>
#include "ppm.h"

int main() {
    rgb_t buf[1200]; /* buffer with 1200 pixels */

    /* populate the buffer */
    for (int i = 0; i < 1200; i++) {
        int w = i % 256;
        buf[i] = rgb(w, w, w);
    }

    /* write */
    FILE *fp = fopen("out.ppm", "w");
    ppm(fp, buf, 40, 30);
    fclose(fp);

    return 0;
}
