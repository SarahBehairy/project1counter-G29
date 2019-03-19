#include"counter.h"
void Port_Init (uint8_t port_index )
	{ volatile unsigned long delay;
   if (port_index ==0 )
	 {
  SYSCTL_RCGC2_R |= 0x00000001;     // 1) B clock

	delay = 0x00000020;           // reading register adds a delay   

  GPIO_PORTA_PCTL_R = 0x00000000;   // 4) GPIO clear bit PCTL  

  GPIO_PORTA_DIR_R = 0x00;          // 5) PB6-PB0 output   

 // GPIO_PORTB_AFSEL_R = 0x00;        // 6) no alternate function

  GPIO_PORTA_PUR_R = 0x00;          // enable pullup resistors on PF4,PF0       

  GPIO_PORTA_DEN_R |= 0x60;          // 7) enable digital pins PF4-PF0 

  GPIO_PORTA_DATA_R=0x00;

}

 if (port_index ==1 ){
 

  SYSCTL_RCGC2_R |= 0x00000002;     // 1) B clock

	delay = 0x00000020;           // reading register adds a delay   
     

  GPIO_PORTB_AMSEL_R = 0x00;        // 3) disable analog function

  GPIO_PORTB_PCTL_R = 0x00000000;   // 4) GPIO clear bit PCTL  

 
  GPIO_PORTB_PUR_R |= 0x00;          // enable pullup resistors on PF4,PF0       

  GPIO_PORTB_DEN_R = 0xFF;          // 7) enable digital pins PF4-PF0 

  GPIO_PORTB_DATA_R=0x00;

}

if (port_index ==3 ){

 

  SYSCTL_RCGC2_R |= 0x00000008;     // 1) B clock

	delay = 0x00000020;           // reading register adds a delay   


  GPIO_PORTD_AMSEL_R = 0x00;        // 3) disable analog function

  GPIO_PORTD_PCTL_R = 0x00000000;   // 4) GPIO clear bit PCTL  

  GPIO_PORTD_DIR_R |= 0x00;          // 5) PB6-PB0 output   

 // GPIO_PORTB_AFSEL_R = 0x00;        // 6) no alternate function

  GPIO_PORTD_PUR_R = 0x00;          // enable pullup resistors on PF4,PF0       

  GPIO_PORTD_DEN_R = 0xFF;          // 7) enable digital pins PF4-PF0 

  GPIO_PORTD_DATA_R=0x00;

}

if (port_index ==4 ){ 


  SYSCTL_RCGC2_R |= 0x00000010;     // 1) B clock

	delay = 0x00000020;           // reading register adds a delay   


  GPIO_PORTE_AMSEL_R = 0x00;        // 3) disable analog function

  GPIO_PORTE_PCTL_R = 0x00000000;   // 4) GPIO clear bit PCTL  

 
  GPIO_PORTE_PUR_R = 0x00;          // enable pullup resistors on PF4,PF0       

  GPIO_PORTE_DEN_R = 0xFF;          // 7) enable digital pins PF4-PF0 

  GPIO_PORTE_DATA_R=0x00;

}
if (port_index ==5 ){ 

  

SYSCTL_RCGCGPIO_R |=0x20;
delay=1;
GPIO_PORTF_LOCK_R=0x4C4F434B; 
GPIO_PORTF_CR_R=0x1F; 
GPIO_PORTF_DEN_R |=0x1F;
GPIO_PORTF_PCTL_R |=0x00;
GPIO_PORTF_PUR_R |=0x00;
} }