#include "counter.h"
void Increment(void){
if((GPIO_PORTA_DATA_R &=0x20  ) == 0x00)
if(  ( (GPIO_PORTA_DATA_R >>=6 )==0x00) ){ //pin 6
flag=0;
}
else{flag=1;}
//else {flag=1;}
if(flag==0){
for(i=0;i<10;i++){
  if(num[i]==GPIO_PORTD_DATA_R){
    if(i<9){
    GPIO_PORTD_DATA_R=num[i+1];
          Delay();
      flag=1;
      if(flag ==1 ){break;}

    }else{
      GPIO_PORTD_DATA_R=num[0];}
      Delay();
      for(j=0;j<10;j++){if(GPIO_PORTB_DATA_R==num[j])break;}
      if(j<9){GPIO_PORTB_DATA_R=num[j+1]; }else{GPIO_PORTB_DATA_R=num[0];for(k=0;k<10;k++){if(GPIO_PORTE_DATA_R==num[k])break;}if(k<9){GPIO_PORTE_DATA_R=num[k+1];}else{GPIO_PORTE_DATA_R=num[0];}}

    }

  }
}

}
