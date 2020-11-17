//#include "stdlib.h"
#include "system.h"
#include "periphs.h"
#include "iob-uart.h"

int main()
{
  unsigned int n1=1, n2=1, n3, i;
  //init uart 
  uart_init(UART_BASE,FREQ/BAUD);   
  uart_printf("\n1:1 \n 2:1 \n");
  for(i=3;i<101;++i)//loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  uart_printf("%d: %d\n", i, n3);    
  n1=n2;    
  n2=n3;    
 }  
}
