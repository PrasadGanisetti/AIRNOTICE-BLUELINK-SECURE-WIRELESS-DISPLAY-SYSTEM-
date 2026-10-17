                       /* 74LS164.c */
#include "defines.h"
#include "delays.h"
#include <LPC21xx.h>
#include "74LS164.h"
//#define SIN  8     //p0.8^M
//#define CP   12     //p0.9^M

void Init_74LS164(void)
{
        IODIR1|= (1<<CP1|1<<SIN1)|(1<<CP2|1<<SIN2)|(1<<CP3|1<<SIN3)|(1<<CP4|1<<SIN4);
}
void SIPO_74LS164(unsigned int SIN,unsigned int CP,unsigned char sDat) //Serial In Parallel Out(SIPO) Operations^M
{
   unsigned char i;
   //SCLRBIT(IOCLR0,_MR);^M
   //delay_us(1);^M
   //SSETBIT(IOSET0,_MR);^M
   //delay_us(1);^M

   for(i=0;i<8;i++)
   {
                   WRITEBIT(IOPIN1,SIN,((sDat>>(7-i))&1));
                   SSETBIT(IOSET1,CP);
                   delay_us(1);
                   SCLRBIT(IOCLR1,CP);
                   delay_us(1);
   }

 }
