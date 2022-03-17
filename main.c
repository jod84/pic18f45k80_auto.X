#include "mcc_generated_files/mcc.h"
#include <stdint.h>
#include <stdbool.h>


void uart_init(uint16_t gen_reg, uint16_t sync, uint16_t brgh, uint16_t brg16) {
    TRISCbits.TRISC7 = 1;
    TRISCbits.TRISC6 = 1;
    
    SPBRGH1 = (gen_reg & 0xFF00) >> 8;
    SPBRG1 = gen_reg & 0x00FF;
    
    RCSTA1bits.CREN = 1;
    RCSTA1bits.SPEN = 1;
    BAUDCON1bits.BRG16 = brg16;
    
    TXSTA1bits.SYNC = sync;
    TXSTA1bits.BRGH = brgh;
    TXSTA1bits.TXEN = 1;
    
    IPR1bits.RC1IP = 1;
    PIE1bits.RC1IE = 1;
    
    IPR1bits.TX1IP = 0;
    PIE1bits.TX1IE = 1;
}

void main(void)
{
    SYSTEM_Initialize();
    
    TRISBbits.TRISB0 = 1;
    TRISBbits.TRISB1 = 1;
    
    
    TRISDbits.TRISD0 = 0;
    TRISDbits.TRISD1 = 0;
    TRISDbits.TRISD7 = 0;
    
    
    LATDbits.LATD0 = 0;
    LATDbits.LATD1 = 0;
    LATDbits.LATD7 = 0;
    // fdr
    RCONbits.IPEN = 1;
    
    INTCONbits.INT0E = 1;
    INTCON2bits.INTEDG0 = 1;
    
    INTCONbits.GIEH = 1;
    INTCONbits.GIEL = 1;
    
    OSCCONbits.IRCF = 0x07;
    OSCCONbits.SCS = 0x02; //0x03
    while(OSCCONbits.HFIOFS != 1);
    
    RCONbits.IPEN = 1;
    INTCONbits.GIEH = 1;
    INTCONbits.GIEL = 1;
    
    for (uint8_t i=0; i<8; i++) {
        LED_INT0_Toggle();
        __delay_ms(125);
        LED_INT1_Toggle();
        __delay_ms(125);
        LED_INT2_Toggle();
        __delay_ms(125);
        LED_INT3_Toggle();
        __delay_ms(125);
    }

    while (1)
    {
        LED_Toggle();
        __delay_ms(500);
    }
}
/**
 End of File
*/