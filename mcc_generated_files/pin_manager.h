/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F45K80
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB0 procedures
#define RB0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define RB0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define RB0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define RB0_GetValue()              PORTBbits.RB0
#define RB0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define RB0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define RB0_SetPullup()             do { WPUBbits.WPUB0 = 1; } while(0)
#define RB0_ResetPullup()           do { WPUBbits.WPUB0 = 0; } while(0)
#define RB0_SetAnalogMode()         do { ANCON1bits.ANSEL10 = 1; } while(0)
#define RB0_SetDigitalMode()        do { ANCON1bits.ANSEL10 = 0; } while(0)

// get/set RB1 procedures
#define RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define RB1_GetValue()              PORTBbits.RB1
#define RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define RB1_SetPullup()             do { WPUBbits.WPUB1 = 1; } while(0)
#define RB1_ResetPullup()           do { WPUBbits.WPUB1 = 0; } while(0)
#define RB1_SetAnalogMode()         do { ANCON1bits.ANSEL8 = 1; } while(0)
#define RB1_SetDigitalMode()        do { ANCON1bits.ANSEL8 = 0; } while(0)

// get/set RB2 procedures
#define RB2_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define RB2_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define RB2_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define RB2_GetValue()              PORTBbits.RB2
#define RB2_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define RB2_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define RB2_SetPullup()             do { WPUBbits.WPUB2 = 1; } while(0)
#define RB2_ResetPullup()           do { WPUBbits.WPUB2 = 0; } while(0)

// get/set RB3 procedures
#define RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()              PORTBbits.RB3
#define RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()             do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()           do { WPUBbits.WPUB3 = 0; } while(0)

// get/set LED_INT0 aliases
#define LED_INT0_TRIS                 TRISDbits.TRISD0
#define LED_INT0_LAT                  LATDbits.LATD0
#define LED_INT0_PORT                 PORTDbits.RD0
#define LED_INT0_ANS                  ANCON1bits.ANSEL11
#define LED_INT0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define LED_INT0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define LED_INT0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define LED_INT0_GetValue()           PORTDbits.RD0
#define LED_INT0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define LED_INT0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define LED_INT0_SetAnalogMode()      do { ANCON1bits.ANSEL11 = 1; } while(0)
#define LED_INT0_SetDigitalMode()     do { ANCON1bits.ANSEL11 = 0; } while(0)

// get/set LED_INT1 aliases
#define LED_INT1_TRIS                 TRISDbits.TRISD1
#define LED_INT1_LAT                  LATDbits.LATD1
#define LED_INT1_PORT                 PORTDbits.RD1
#define LED_INT1_ANS                  ANCON1bits.ANSEL12
#define LED_INT1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define LED_INT1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define LED_INT1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define LED_INT1_GetValue()           PORTDbits.RD1
#define LED_INT1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define LED_INT1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define LED_INT1_SetAnalogMode()      do { ANCON1bits.ANSEL12 = 1; } while(0)
#define LED_INT1_SetDigitalMode()     do { ANCON1bits.ANSEL12 = 0; } while(0)

// get/set LED_INT2 aliases
#define LED_INT2_TRIS                 TRISDbits.TRISD2
#define LED_INT2_LAT                  LATDbits.LATD2
#define LED_INT2_PORT                 PORTDbits.RD2
#define LED_INT2_ANS                  ANCON1bits.ANSEL13
#define LED_INT2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define LED_INT2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define LED_INT2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define LED_INT2_GetValue()           PORTDbits.RD2
#define LED_INT2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define LED_INT2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define LED_INT2_SetAnalogMode()      do { ANCON1bits.ANSEL13 = 1; } while(0)
#define LED_INT2_SetDigitalMode()     do { ANCON1bits.ANSEL13 = 0; } while(0)

// get/set LED_INT3 aliases
#define LED_INT3_TRIS                 TRISDbits.TRISD3
#define LED_INT3_LAT                  LATDbits.LATD3
#define LED_INT3_PORT                 PORTDbits.RD3
#define LED_INT3_ANS                  ANCON1bits.ANSEL14
#define LED_INT3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define LED_INT3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define LED_INT3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define LED_INT3_GetValue()           PORTDbits.RD3
#define LED_INT3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define LED_INT3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define LED_INT3_SetAnalogMode()      do { ANCON1bits.ANSEL14 = 1; } while(0)
#define LED_INT3_SetDigitalMode()     do { ANCON1bits.ANSEL14 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISDbits.TRISD7
#define LED_LAT                  LATDbits.LATD7
#define LED_PORT                 PORTDbits.RD7
#define LED_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define LED_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define LED_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define LED_GetValue()           PORTDbits.RD7
#define LED_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/