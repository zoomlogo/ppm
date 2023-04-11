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

rgb_t rgb(uint8_t, uint8_t, uint8_t);
void  ppm(FILE *, rgb_t *, int, int);
void  rgb_print(rgb_t);

#ifdef __cplusplus
}
#endif
#endif
