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



//LEKCIJA 19.11.2020
#include <msp430.h>

int main()

{

  WDTCTL = WDTPW + WDTHOLD;

  volatile unsigned int j=0;

  P1DIR |= 0b10010001; 

  P2DIR &= ~0b00001000;

 for( ; ; )

 {

   //P1OUT ^= 0b00010001;
   for(j=30000;j>1;j--);//aizture
   if ((P2IN&0b00001000) == 0b00001000)
   {
     P1OUT |= 0b10000000;//ieslēgt 7.led
   }
   else
   {
     P1OUT &= ~0b10000000;
   }
 }
}
