#include "led.h"


#ifdef _USE_HW_LED



typedef struct  
{
  uint8_t  *dir_port;
  uint8_t  *out_port;
  uint8_t  pin_num;
  uint8_t  on_state;
} led_pin_t;

static const led_pin_t pin_tbl[LED_MAX_CH] = 
{
  {&PE_DDR, &PE_ODR, 5, _DEF_LOW}
};

static const uint32_t test[1024];


bool ledInit(void)
{
  PE_DDR |= (1 << 5);    
  PE_CR1 |= (1 << 5);


  for (int i=0; i<LED_MAX_CH; i++)
  {

  }

  return true;
}

void ledOn(uint8_t ch)
{
  if (pin_tbl[ch].on_state == _DEF_HIGH)
  {
    PE_ODR |= (1<<5);
  }
  else
  {    
    PE_ODR &= ~(1<<5);
  }
}

void ledOff(uint8_t ch)
{
  if (pin_tbl[ch].on_state == _DEF_HIGH)
  {
    PE_ODR &= ~(1<<5);
  }
  else
  {    
    PE_ODR |= (1<<5);
  }
}

void ledToggle(uint8_t ch)
{
  //PE_ODR ^= (1<<5);
  sfr_PORTE.ODR.byte ^= (1<<5);
}

#endif