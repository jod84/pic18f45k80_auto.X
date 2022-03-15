#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
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


    while (1)
    {
        LED_Toggle();
        __delay_ms(500);
    }
}
/**
 End of File
*/