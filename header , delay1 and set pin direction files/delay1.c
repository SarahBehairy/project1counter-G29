# include "counter.h"
void Delay(void){unsigned long volatile time;

  time = 727240*200/91;  // 0.1sec

  while(time){

    time--;

  }

}
