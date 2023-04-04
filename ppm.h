#ifndef _DEF_PPM_H
#define _DEF_PPM_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdio.h>

typedef uint8_t rgb_t __attribute__((vector_size (3)));

rgb_t rgb(uint8_t, uint8_t, uint8_t);
void  ppm(FILE *, rgb_t *, int, int);
void  rgb_pr(rgb_t);

#ifdef __cplusplus
}
#endif
#endif
