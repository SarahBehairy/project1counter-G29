#include"counter.h"
int main{
     Port_Init(0);
      Port_Init(1);
       Port_Init(4);
        Port_Init(3);
        Port_Init(5);
	Port_SetPinDirection(0,6,PORT_PIN_IN); //pin
  Port_SetPinPullUp(0,6,1);	
	Port_SetPinDirection(1,0,PORT_PIN_OUT); //pin
	Port_SetPinDirection(1,1,PORT_PIN_OUT); //pin
	Port_SetPinDirection(1,2,PORT_PIN_OUT); //pin
	Port_SetPinDirection(1,3,PORT_PIN_OUT); //pin
	Port_SetPinDirection(3,0,PORT_PIN_OUT); //pin
	Port_SetPinDirection(3,1,PORT_PIN_OUT); //pin
	Port_SetPinDirection(3,2,PORT_PIN_OUT); //pin
	Port_SetPinDirection(3,3,PORT_PIN_OUT); //pin
	Port_SetPinDirection(5,4,PORT_PIN_IN); //pin
	Port_SetPinDirection(5,1,PORT_PIN_IN); //pin2
	Port_SetPinDirection(4,0,PORT_PIN_OUT); //pin
	Port_SetPinDirection(4,1,PORT_PIN_OUT); //pin
	Port_SetPinDirection(4,2,PORT_PIN_OUT); //pin
	Port_SetPinDirection(4,3,PORT_PIN_OUT); //pin
	
	Port_SetPinPullUp(5,4,1);Port_SetPinPullUp(5,0,1);
	while(1){
void Increment(void);
void Decrement(void);
void Reset(void);


}}
