#include "bsp.h"






bool bspInit(void)
{
  return true;
}

#if 1
void delay(uint32_t ms)
{
  while (ms--)
      NOP();
}
#else
void delay(uint32_t ms)
{
  uint32_t pre_time = millis();

  while(millis()-pre_time < ms)
  {    
  }
}
#endif

uint32_t millis(void)
{
  uint32_t ret;

  return ret;
}

#if 0
void logPrintf(const char *fmt, ...)
{
  va_list arg;
  va_start (arg, fmt);
  int32_t len;
  char print_buffer[128];


  len = vsnprintf(print_buffer, 128, fmt, arg);
  va_end (arg);

  uartWrite(_DEF_UART1, (uint8_t *)print_buffer, len);
}
#endif

void assert_failed(uint8_t* file, uint32_t line)
{
  (void)file;
  (void)line;
}