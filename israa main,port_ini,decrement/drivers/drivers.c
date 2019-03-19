#include "teme.h"
#include "stdint.h"
/////
//user i/p 
#define PORT_PIN_IN 0
#define PORT_PIN_OUT 1 
#define pins mask 0 ,1,2,3,4,5,6,7 
#define port_index 0,1,2,3,4,5
#define eanble 0,1
/////MACL DRIVERS
enum PORT_PIN 
	{ 
	 PORT_PIN_IN //=0 
	,PORT_PIN_OUT //=1
	};
	
enum Dio_LevelType	
	{
	STD_LOW 
 ,STD_HIGH
	};
	
void Port_Init (uint8_t port_index )
{ 
	int32_t delay ;
if (port_index ==0 )// A
{		 
SYSCTL_RCGCGPIO_R |=0x01;
delay=1;
//GPIO_PORTA_LOCK_R=0x4C4F434B;  No Need to use 'em
//GPIO_PORTA_CR_R=0xFF; 	 
GPIO_PORTA_DEN_R=0xFF;
GPIO_PORTA_AFSEL_R=0x00;
GPIO_PORTA_AMSEL_R =0;
GPIO_PORTA_PCTL_R =0; 
GPIO_PORTA_PUR_R =0x00;
GPIO_PORTA_PDR_R =0x00;	
}
else if (port_index ==1 ) //B
{
SYSCTL_RCGCGPIO_R |=0x02; 
delay=1;
//GPIO_PORTB_LOCK_R=0x4C4F434B; 
//GPIO_PORTB_CR_R =0xF3; 
GPIO_PORTB_DEN_R=0xFF;
GPIO_PORTB_AFSEL_R=0x00;
GPIO_PORTB_AMSEL_R =0x00;
GPIO_PORTB_PCTL_R =0x00; 
GPIO_PORTB_PUR_R =0x00; 
GPIO_PORTB_PDR_R =0x00;	
}
else if (port_index == 2 ) //c
	{
SYSCTL_RCGCGPIO_R |=0x4; //0100
delay=1;
GPIO_PORTC_LOCK_R=0x4C4F434B; 
GPIO_PORTC_CR_R =0xF3; 
GPIO_PORTC_DEN_R |=0xF0;
GPIO_PORTC_AMSEL_R |=0xF0;
GPIO_PORTC_PCTL_R |=0xF0;  // first 4 pins 
GPIO_PORTC_PUR_R |=0xF0;	
GPIO_PORTC_PDR_R =0x00;			
}
else if (port_index == 3 ) //d
	{
SYSCTL_RCGCGPIO_R |=0x08; //1000
delay=1;
//GPIO_PORTD_LOCK_R=0x4C4F434B;
//GPIO_PORTD_CR_R=0xFF; 
GPIO_PORTD_DEN_R =0xFF;
GPIO_PORTD_AMSEL_R =0x00;
GPIO_PORTD_PCTL_R =0x00;  // first 4 pins 
GPIO_PORTD_PUR_R =0x00;
GPIO_PORTD_PDR_R =0x00;	
}
		
else if (port_index == 4 ) //E 5 
{
SYSCTL_RCGCGPIO_R |=0x10;
delay=1;
 
//GPIO_PORTF_LOCK_R=0x4C4F434B; 
//GPIO_PORTE_CR_R=0x2F;
GPIO_PORTE_DEN_R |=0x2F;
GPIO_PORTE_AMSEL_R |=0x00;
GPIO_PORTE_PCTL_R |=0x00;  // first 4 pins 
GPIO_PORTE_PUR_R |=0x00;
GPIO_PORTE_PDR_R =0x00;	
}	
 if (port_index == 5)	 //F
{ 
SYSCTL_RCGCGPIO_R |=0x20;
delay=1;
GPIO_PORTF_LOCK_R=0x4C4F434B; 
GPIO_PORTF_CR_R=0x1F; 
GPIO_PORTF_DEN_R |=0x1F;
GPIO_PORTF_PCTL_R |=0x00;
GPIO_PORTF_PUR_R |=0x00;
GPIO_PORTF_PDR_R =0x00;
GPIO_PORTF_DATA_R =0x00;	
}

}
void Port_SetPinDirection (uint8_t port_index ,uint8_t pins_mask , enum PORT_PIN pins_direction )	//set spesific pin
{
if (port_index == 0)
{
GPIO_PORTA_DIR_R |=( pins_direction<< pins_mask);
}
if (port_index == 1)
{
GPIO_PORTB_DIR_R |=( pins_direction<< pins_mask);  
}
if (port_index == 2)
{
GPIO_PORTC_DIR_R |=( pins_direction<< pins_mask);  
}	

if (port_index == 3)
{
GPIO_PORTD_DIR_R &=( pins_direction<< pins_mask);  
}
if (port_index == 4)
{
GPIO_PORTE_DIR_R &=( pins_direction<< pins_mask);  
}
if (port_index == 5)
{
GPIO_PORTF_DIR_R |=( pins_direction<< pins_mask);  
}
}

void Port_SetPinPullUp (uint8_t port_index ,uint8_t pins_mask ,uint8_t enable  )	
{
if ((port_index == 0) &( enable ==1) )
{
GPIO_PORTA_PUR_R  |=( enable<< pins_mask);
}
if ((port_index == 1) &( enable ==1) )
{
 GPIO_PORTB_PUR_R  |=( enable<< pins_mask);
}
if ((port_index == 2) &( enable ==1) )
{
 GPIO_PORTC_PUR_R  |=( enable<< pins_mask);
}	

if ((port_index == 3) &( enable ==1) )
{
  GPIO_PORTD_PUR_R  |=( enable<< pins_mask);
}
if ((port_index == 4) &( enable ==1) )
{
GPIO_PORTE_PUR_R  |=( enable<< pins_mask);
}
if ((port_index == 5) &( enable ==1) )
{
GPIO_PORTF_PUR_R  |=( enable<< pins_mask);
}
}
void Port_SetPinPullDown (uint8_t port_index ,uint8_t pins_mask ,uint8_t enable  )	
{
if ((port_index == 0) &( enable ==1) )
{
GPIO_PORTA_PDR_R  |=( enable<< pins_mask);
}
if ((port_index == 1) &( enable ==1) )
{
 GPIO_PORTB_PDR_R  |=( enable<< pins_mask);
}
if ((port_index == 2) &( enable ==1) )
{
 GPIO_PORTC_PDR_R  |=( enable<< pins_mask);
}	

if ((port_index == 3) &( enable ==1) )
{
  GPIO_PORTD_PDR_R  |=( enable<< pins_mask);
}
if ((port_index == 4) &( enable ==1) )
{
GPIO_PORTE_PDR_R  |=( enable<< pins_mask);
}
if ((port_index == 5) &( enable ==1) )
{
GPIO_PORTF_PDR_R  |=( enable<< pins_mask);
}
}

//////DIO DRIVER

uint8_t DIO_ReadPort (uint8_t port_index ,uint8_t port_mask) // shift to bin 1 then and with 1 if i bit value one if zero bit value zero
{
uint8_t op;

if (port_index == 0)
{
op=(GPIO_PORTA_DATA_R >> port_mask)&1;
return op ;
}
if (port_index == 1)
{
op=(GPIO_PORTB_DATA_R >> port_mask)&1;
return op ;
}

if (port_index == 2)
{
op=(GPIO_PORTC_DATA_R >> port_mask)&1;
return op ;}

if (port_index == 3)
{
op=(GPIO_PORTD_DATA_R >> port_mask)&1;
return op ;
}
if(port_index == 4)
	{
op=(GPIO_PORTE_DATA_R >> port_mask)&1;
return op ;
}
if(port_index == 4)
	{
op=(GPIO_PORTF_DATA_R >> port_mask)&1;
return op ;
}
}










void DioWritePort (uint8_t port_index ,uint8_t pins_mask , enum Dio_LevelType pins_level)	
{
if (port_index == 0)
{
GPIO_PORTA_DATA_R |=( pins_level<< pins_mask);
}
if (port_index == 1)
{
GPIO_PORTB_DATA_R |=( pins_level<< pins_mask);  
}
if (port_index == 2)
{
GPIO_PORTC_DATA_R |=(pins_level<< pins_mask);  
}	

if (port_index == 3)
{
GPIO_PORTD_DATA_R &=( pins_level<< pins_mask);  
}
if (port_index == 4)
{
GPIO_PORTE_DATA_R &=( pins_level<< pins_mask);  
}
if (port_index == 5)
{
GPIO_PORTF_DATA_R |=( pins_level<< pins_mask);  
}
}

void DioFlipPort (uint8_t port_index ,uint8_t pins_mask)	
{
if (port_index == 0)
{
GPIO_PORTA_DATA_R ^= (1 << pins_mask);
}
if (port_index == 1)
{
GPIO_PORTB_DATA_R ^= (1 << pins_mask) ;
}
if (port_index == 2)
{
GPIO_PORTC_DATA_R ^= (1 << pins_mask) ; 
}	

if (port_index == 3)
{
GPIO_PORTD_DATA_R ^= (1 << pins_mask) ; 
}
if (port_index == 4)
{
GPIO_PORTE_DATA_R ^= (1 << pins_mask) ;
}
if (port_index == 5)
{
GPIO_PORTF_DATA_R ^= (1 << pins_mask) ; 
}
}







void Delay(void){unsigned long volatile time;

  time = 727240*200/91;  // 0.1sec

  while(time){

    time--;

  }

}
 
	 int main()
	 {

		 
	 }
