/*
 * File:   switching with pull-up.c
 * Author: Miracol Obiano
 *
 * Created on July 31, 2017, 3:11 PM
 */


#include <xc.h>
#define _XTAL_FREQ 20000000

void main(void) {
    TRISB=1;
    RC2=0;
    TRISCbits.TRISC2=0;
    OPTION_REGbits.nRBPU=1;
    while(1){
        if(RB3==1)
            RC2=0;
        if(RB3==0)
            RC2=1;
    }
}
