#include"counter.h"
void Decrement(void){
while ((GPIO_PORTF_DATA_R &=0x11)==0x01) 
  {
		flag=2;
	}
	
		
	if (flag==2){
				
				if ((GPIO_PORTD_DATA_R!=num[0]) && (GPIO_PORTB_DATA_R |=0x10) &&( GPIO_PORTE_DATA_R|=0x10))  {
		   	for(i=1;i<10;i++)
					{
						if (GPIO_PORTD_DATA_R==num[i]) { GPIO_PORTD_DATA_R=num[i-1];
					flag=1; }
					} }
				
				else if ((GPIO_PORTE_DATA_R|=0x10) && (GPIO_PORTB_DATA_R !=num[0]) &&( GPIO_PORTD_DATA_R!=0x10))  {
		   	for(i=1;i<10;i++)
					{
						if (GPIO_PORTB_DATA_R==num[i]) { GPIO_PORTB_DATA_R=num[i-1];  sel=1;} }
					if (sel==1 )
						GPIO_PORTD_DATA_R=0x09;
					Delay2();
						for(j=1;j<10;j++)	{	
							if (GPIO_PORTD_DATA_R==num[j]) { GPIO_PORTD_DATA_R=num[j-1]; flag=1; }}}
							
				else if ((GPIO_PORTE_DATA_R!=num[0]) && (GPIO_PORTB_DATA_R !=0x10) &&( GPIO_PORTD_DATA_R!=0x10))  {
		   	for(i=1;i<10;i++)
					{
						if (GPIO_PORTE_DATA_R==num[i]) { GPIO_PORTE_DATA_R=num[i-1]; sel=2; } }
					if (sel==2 )
						GPIO_PORTB_DATA_R=0x09; GPIO_PORTD_DATA_R=0x09;
					Delay2();
						for(j=1;j<10;j++)	{	
							if (GPIO_PORTB_DATA_R==num[j]) { GPIO_PORTB_DATA_R=num[j-1]; sel=1; }
							
				
				
							
							
							
							
							
							
							
						
							
					}}
					
					
					
					
					
					
					
					else {GPIO_PORTD_DATA_R=0x00;}
					
					
				}	
				
	
	
	
	
			}
		