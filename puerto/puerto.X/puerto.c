#include <xc.h>
#pragma config FOSC=INTRC_NOCLKOUT
#pragma config WDTE=OFF

void main(void) {
    unsigned char t = 0;
    TRISB = 0x00;
    ANSELH=0;
    while (1) {
        PORTB=0XF0; t=t+1; 
        PORTB=0X0F; t=t+1; 
        /*PORTD=0XF0; t=t+1; //FE
        PORTD=0X0F; t=t+1; //01*/

        
        
        /*PORTDbits.RD0 = 0; t=t+1;
        PORTDbits.RD0 = 1; t=t+1;
        
        PORTDbits.RD1 = 0; t=t+1;
        PORTDbits.RD1 = 1; t=t+1;
        
        PORTDbits.RD2 = 0; t=t+1;
        PORTDbits.RD2 = 1; t=t+1;
        
        PORTDbits.RD3 = 0; t=t+1;
        PORTDbits.RD3 = 1; t=t+1;
        
        PORTDbits.RD4 = 0; t=t+1;
        PORTDbits.RD4 = 1; t=t+1;
        
        PORTDbits.RD5 = 0; t=0;
        PORTDbits.RD5 = 1; t=0;
        
        PORTDbits.RD6 = 0; t=0;
        PORTDbits.RD6 = 1; t=0;
        
        PORTDbits.RD7 = 0; t=0;
        PORTDbits.RD7 = 1; t=0;
         */
    }
}
