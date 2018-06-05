#include <xc.h>
#pragma config FOSC=INTRC_CLKOUT
#pragma config WDTE=OFF

void main(void) {
    unsigned char seg = 0;
    TRISD = 0x00;
    TRISB = 0xF0;
    ANSELH = 0;
    while (1) {
        switch (seg) {
            case 0:
                PORTD = 0x3F;
                break;
            case 1:
                PORTD = 0x06;
                break;
            case 2:
                PORTD = 0x5B;
                break;
            case 3:
                PORTD = 0x4F;
                break;
            case 4:
                PORTD = 0x66;
                break;
            case 5:
                PORTD = 0x6D;
                break;
            case 6:
                PORTD = 0x7D;
                break;
            case 7:
                PORTD = 0x4B;
                break;
            case 8:
                PORTD = 0xFF;
                break;
            case 9:
                PORTD = 0x6B;
                break;
        }
    }
}