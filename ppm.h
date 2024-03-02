#ifndef _DEF_PPM_H
#define _DEF_PPM_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdio.h>
typedef struct {
    uint8_t r, g, b;
} rgb_t;

rgb_t rgb(uint8_t r, uint8_t g, uint8_t b);
void ppm(FILE *file, rgb_t *pixels, int width, int height);
void rgb_print(rgb_t c);

#ifdef __cplusplus
}
#endif
#endif
