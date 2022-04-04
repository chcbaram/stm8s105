#include "hw.h"






bool hwInit(void)
{
  bspInit();
  
  cliInit();
  ledInit();
  uartInit();
  uartOpen(_DEF_UART1, 57600);


  logPrintf("\n");
  logPrintf("[ Firmware Begin... ]\r\n");
  logPrintf("Booting..Name \t\t: %s\r\n", _DEF_BOARD_NAME);
  logPrintf("Booting..Ver  \t\t: %s\r\n", _DEF_FIRMWATRE_VERSION);
  return true;
}

