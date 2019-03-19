# include "counter.h"

void Reset(void){
while ((GPIO_PORTF_DATA_R &=0x11)==0x10)  
	{
		fio=1;
		for (i=0 ;i>1000000 ;i++)
		{}
	}
	if(fio==1){
		GPIO_PORTB_DATA_R=0x00;
		GPIO_PORTE_DATA_R=0x02;
			
	GPIO_PORTD_DATA_R=0x00;
    fio=0;}
    }
