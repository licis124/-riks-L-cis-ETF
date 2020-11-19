// KODS, DEG 1 DIODE

#include <msp430.h>
void delay(void);
int main(void)
{
// 2 LED, 1. uz P1.0 ; 2. uz P1.6
  WDTCTL = WDTPW + WDTHOLD; // Stop watch dog time
  P1DIR |= 0x41; // var rakstit arī 0b00000001
  for(;;){
  P1OUT |= 0X01;// lai iedegas diode
  delay();
  P1OUT &= ~0X01;// izslēgt
  delay();
}
}
void delay()
{
volatile unsigned int n;
  for(n=0;m<60000;n++){
    ;
  }
  }
  
  //Kā var izmantot labāk 
  // KODS, DEG 1 DIODE un 2

#include <msp430.h>
void delay(void);
int main(void)
{
// 2 LED, 1. uz P1.0 ; 2. uz P1.6
  WDTCTL = WDTPW + WDTHOLD; // Stop watch dog time
  P1DIR |= 0x41; // var rakstit arī 0b00000001
  for(;;){
  P1OUT ^= 0X41;
}
}
void delay()
{
volatile unsigned int n;
  for(n=0;m<60000;n++){
    ;
  }
  }
