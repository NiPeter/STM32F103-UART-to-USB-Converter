/*
 * circ.h
 *
 *  Created on: 30.10.2017
 *      Author: piotn
 */

#ifndef CIRC_H_
#define CIRC_H_

#include "main.h"
#include "gpio.h"

#define CIRCBUF_DEF(x,y)          \
    uint8_t x##_dataSpace[y];     \
    circBuf_t x = {               \
        .buffer = x##_dataSpace,      \
        .head = 0,                \
        .tail = 0,                \
        .maxLen = y               \
    }

typedef struct {
    uint8_t * const buffer;
    int head;
    int tail;
    const int maxLen;
} circBuf_t;


int circBufPush(circBuf_t *c, uint8_t data);

int circBufPop(circBuf_t *c, uint8_t *data);





#endif /* CIRC_H_ */
