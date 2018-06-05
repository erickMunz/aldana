#include <xc.h>
#pragma config FOSC = INTRC_CLKOUT
#pragma config WDTE = OFF
#pragma config IESO = OFF
#pragma config FCMEN = OFF
void main(void) {
    //unsigned char cadena[] = "Hola Mundo";
    unsigned char n;
    TXSTAbits.TXEN = 1;
    TXSTAbits.BRGH = 1;
    RCSTAbits.SPEN = 1;
    RCSTAbits.CREN = 1;
    SPBRG = 25;
    while(1) {
        /*for(n = 0; n < 10; n++) {
            while(PIR1bits.TXIF != 1)
                ;
            TXREG = cadena[n];
        }
        while(PIR1bits.TXIF != 1)
            ;
        TXREG = 10;*/
        while(PIR1bits.TXIF != 1)
            
        TXREG = 'U';
    }    
}
