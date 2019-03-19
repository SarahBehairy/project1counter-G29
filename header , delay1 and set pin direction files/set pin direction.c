# include "counter.h"
void Port_SetPinDirection (uint8_t port_index ,uint8_t pins_mask , enum PORT_PIN pins_direction )	
	
{if (port_index == 5)
{
GPIO_PORTF_DIR_R |=( pins_direction<< pins_mask);  
}
if (port_index == 0)
{
GPIO_PORTA_DIR_R |=( pins_direction<< pins_mask);
}
if (port_index == 1)
{
GPIO_PORTB_DIR_R |=( pins_direction<< pins_mask);  
}
if (port_index == 4)
{
GPIO_PORTE_DIR_R |=( pins_direction<< pins_mask);  
}

if (port_index == 3)
{
GPIO_PORTD_DIR_R |=( pins_direction<< pins_mask);  
}
}
