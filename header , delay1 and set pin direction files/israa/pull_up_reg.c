#include"counter.h"
void Port_SetPinPullUp (uint8_t port_index ,uint8_t pins_mask ,uint8_t enable  )	
{if ((port_index == 5) &( enable ==1) )
{
GPIO_PORTF_PUR_R  |=( enable<< pins_mask);
}
if ((port_index == 0) &( enable ==1) )
{
GPIO_PORTA_PUR_R  |=( enable<< pins_mask);
}
}