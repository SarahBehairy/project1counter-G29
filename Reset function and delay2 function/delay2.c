#include "counter.h"

void Delay2(void){
unsigned long volatile time;

  time = 999900*500/91;  // 0.5sec

  while(time){

    time--;

  } 

}
