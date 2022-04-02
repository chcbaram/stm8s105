#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "def.h"
#include "device/include/STM8S105K4.h"




bool bspInit(void);
bool bspDeInit(void);

void delay(uint32_t time_ms);
uint32_t millis(void);


void logPrintf(const char *fmt, ...);



#ifdef __cplusplus
}
#endif

#endif