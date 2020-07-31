/*
 * File:   switch.c
 * Author: Obiano Miracol
 *
 * Created on December 4, 2018, 8:44 PM
 */


#include <xc.h>

#define _XTAL_FREQ 20000000

void main(void) {
    
    TRISB=0x00;
    TRISD=0x01;
    PORTB=0x00;
    
    while(1){
        if(RD0==1)
            RB3=0;
        if(RD0==0)
            RB3=1;
        } 
    }