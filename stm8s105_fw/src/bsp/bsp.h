#ifndef SRC_BSP_BSP_H_
#define SRC_BSP_BSP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "def.h"
#include "device/include/STM8S105K4.h"
//#include "stm8s.h"

/* GPIO */
#define PA_ODR *(volatile unsigned char *)0x5000
#define PA_IDR *(volatile unsigned char *)0x5001
#define PA_DDR *(volatile unsigned char *)0x5002
#define PA_CR1 *(volatile unsigned char *)0x5003
#define PA_CR2 *(volatile unsigned char *)0x5004

#define PB_ODR *(volatile unsigned char *)0x5005
#define PB_IDR *(volatile unsigned char *)0x5006
#define PB_DDR *(volatile unsigned char *)0x5007
#define PB_CR1 *(volatile unsigned char *)0x5008
#define PB_CR2 *(volatile unsigned char *)0x5009

#define PC_ODR *(volatile unsigned char *)0x500A
#define PC_IDR *(volatile unsigned char *)0x500B
#define PC_DDR *(volatile unsigned char *)0x500C
#define PC_CR1 *(volatile unsigned char *)0x500D
#define PC_CR2 *(volatile unsigned char *)0x500E

#define PD_ODR *(volatile unsigned char *)0x500F
#define PD_IDR *(volatile unsigned char *)0x5010
#define PD_DDR *(volatile unsigned char *)0x5011
#define PD_CR1 *(volatile unsigned char *)0x5012
#define PD_CR2 *(volatile unsigned char *)0x5013

#define PE_ODR *(volatile unsigned char *)0x5014
#define PE_IDR *(volatile unsigned char *)0x5015
#define PE_DDR *(volatile unsigned char *)0x5016
#define PE_CR1 *(volatile unsigned char *)0x5017
#define PE_CR2 *(volatile unsigned char *)0x5018

/* Interrupt commands */
#define enableInterrupts()    {__asm__("rim\n");}  /* enable interrupts */
#define disableInterrupts()   {__asm__("sim\n");}  /* disable interrupts */
#define rim()                 {__asm__("rim\n");}  /* enable interrupts */
#define sim()                 {__asm__("sim\n");}  /* disable interrupts */
#define nop()                 {__asm__("nop\n");}  /* No Operation */
#define trap()                {__asm__("trap\n");} /* Trap (soft IT) */
#define wfi()                 {__asm__("wfi\n");}  /* Wait For Interrupt */
#define halt()                {__asm__("halt\n");} /* Halt */




bool bspInit(void);
bool bspDeInit(void);

void delay(uint32_t time_ms);
uint32_t millis(void);


void logPrintf(const char *fmt, ...);



#ifdef __cplusplus
}
#endif

#endif