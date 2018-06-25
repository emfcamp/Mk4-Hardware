//*****************************************************************************
//
// Configure the device pins for different signals
//
// Copyright (C) 2014 Texas Instruments Incorporated - http://www.ti.com/ 
// 
// 
//  Redistribution and use in source and binary forms, with or without 
//  modification, are permitted provided that the following conditions 
//  are met:
//
//    Redistributions of source code must retain the above copyright 
//    notice, this list of conditions and the following disclaimer.
//
//    Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the 
//    documentation and/or other materials provided with the   
//    distribution.
//
//    Neither the name of Texas Instruments Incorporated nor the names of
//    its contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
//  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
//  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
//  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
//  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
//  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
//  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
//  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
//  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
//  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//*****************************************************************************

// This file was automatically generated on 10/06/2018 at 21:30:05
// by TI PinMux version 4.0.1519 
//
//*****************************************************************************

#include <ti/devices/msp432e4/driverlib/driverlib.h>

#include <stdint.h>
#include <stdbool.h>

#include "pinout.h"

//*****************************************************************************
//
//! \addtogroup pinout_api
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! Configures the device pins for the customer specific usage.
//!
//! \return None.
//
//*****************************************************************************
void
PinoutSet(void)
{
    //
    // Enable Peripheral Clocks 
    //
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOC);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOH);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOJ);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOK);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOL);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOM);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPION);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOP);
	MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOQ);

    //
    // Configure the GPIO Pin Mux for PE3
	// for AIN0
    //
	MAP_GPIOPinTypeADC(GPIO_PORTE_BASE, GPIO_PIN_3);

	//
	// Unlock the Port Pin and Set the Commit Bit
	//
	GPIOD->GPIO_O_LOCK = GPIO_LOCK_KEY;
	GPIOD->GPIO_O_CR   |= GPIO_PIN_7;
	GPIOD->GPIO_O_LOCK = 0x0;
	
    //
    // Configure the GPIO Pin Mux for PD7
	// for AIN4
    //
	MAP_GPIOPinTypeADC(GPIO_PORTD_BASE, GPIO_PIN_7);

    //
    // Configure the GPIO Pin Mux for PE2
	// for AIN1
    //
	MAP_GPIOPinTypeADC(GPIO_PORTE_BASE, GPIO_PIN_2);

    //
    // Configure the GPIO Pin Mux for PD6
	// for AIN5
    //
	MAP_GPIOPinTypeADC(GPIO_PORTD_BASE, GPIO_PIN_6);

    //
    // Configure the GPIO Pin Mux for PL0
	// for EPI0S16
    //
	MAP_GPIOPinConfigure(GPIO_PL0_EPI0S16);
	GPIOPinTypeEPI(GPIO_PORTL_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PG0
	// for EPI0S11
    //
	MAP_GPIOPinConfigure(GPIO_PG0_EPI0S11);
	GPIOPinTypeEPI(GPIO_PORTG_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PA6
	// for EPI0S8
    //
	MAP_GPIOPinConfigure(GPIO_PA6_EPI0S8);
	GPIOPinTypeEPI(GPIO_PORTA_BASE, GPIO_PIN_6);

    //
    // Configure the GPIO Pin Mux for PH1
	// for EPI0S1
    //
	MAP_GPIOPinConfigure(GPIO_PH1_EPI0S1);
	GPIOPinTypeEPI(GPIO_PORTH_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PP3
	// for EPI0S30
    //
	MAP_GPIOPinConfigure(GPIO_PP3_EPI0S30);
	GPIOPinTypeEPI(GPIO_PORTP_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PL3
	// for EPI0S19
    //
	MAP_GPIOPinConfigure(GPIO_PL3_EPI0S19);
	GPIOPinTypeEPI(GPIO_PORTL_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PM0
	// for EPI0S15
    //
	MAP_GPIOPinConfigure(GPIO_PM0_EPI0S15);
	GPIOPinTypeEPI(GPIO_PORTM_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PM2
	// for EPI0S13
    //
	MAP_GPIOPinConfigure(GPIO_PM2_EPI0S13);
	GPIOPinTypeEPI(GPIO_PORTM_BASE, GPIO_PIN_2);

    //
    // Configure the GPIO Pin Mux for PB3
	// for EPI0S28
    //
	MAP_GPIOPinConfigure(GPIO_PB3_EPI0S28);
	GPIOPinTypeEPI(GPIO_PORTB_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PG1
	// for EPI0S10
    //
	MAP_GPIOPinConfigure(GPIO_PG1_EPI0S10);
	GPIOPinTypeEPI(GPIO_PORTG_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PK5
	// for EPI0S31
    //
	MAP_GPIOPinConfigure(GPIO_PK5_EPI0S31);
	GPIOPinTypeEPI(GPIO_PORTK_BASE, GPIO_PIN_5);

    //
    // Configure the GPIO Pin Mux for PP2
	// for EPI0S29
    //
	MAP_GPIOPinConfigure(GPIO_PP2_EPI0S29);
	GPIOPinTypeEPI(GPIO_PORTP_BASE, GPIO_PIN_2);

    //
    // Configure the GPIO Pin Mux for PH3
	// for EPI0S3
    //
	MAP_GPIOPinConfigure(GPIO_PH3_EPI0S3);
	GPIOPinTypeEPI(GPIO_PORTH_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PC5
	// for EPI0S6
    //
	MAP_GPIOPinConfigure(GPIO_PC5_EPI0S6);
	GPIOPinTypeEPI(GPIO_PORTC_BASE, GPIO_PIN_5);

    //
    // Configure the GPIO Pin Mux for PA7
	// for EPI0S9
    //
	MAP_GPIOPinConfigure(GPIO_PA7_EPI0S9);
	GPIOPinTypeEPI(GPIO_PORTA_BASE, GPIO_PIN_7);

    //
    // Configure the GPIO Pin Mux for PH0
	// for EPI0S0
    //
	MAP_GPIOPinConfigure(GPIO_PH0_EPI0S0);
	GPIOPinTypeEPI(GPIO_PORTH_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PC4
	// for EPI0S7
    //
	MAP_GPIOPinConfigure(GPIO_PC4_EPI0S7);
	GPIOPinTypeEPI(GPIO_PORTC_BASE, GPIO_PIN_4);

    //
    // Configure the GPIO Pin Mux for PL1
	// for EPI0S17
    //
	MAP_GPIOPinConfigure(GPIO_PL1_EPI0S17);
	GPIOPinTypeEPI(GPIO_PORTL_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PM1
	// for EPI0S14
    //
	MAP_GPIOPinConfigure(GPIO_PM1_EPI0S14);
	GPIOPinTypeEPI(GPIO_PORTM_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PC7
	// for EPI0S4
    //
	MAP_GPIOPinConfigure(GPIO_PC7_EPI0S4);
	GPIOPinTypeEPI(GPIO_PORTC_BASE, GPIO_PIN_7);

    //
    // Configure the GPIO Pin Mux for PL2
	// for EPI0S18
    //
	MAP_GPIOPinConfigure(GPIO_PL2_EPI0S18);
	GPIOPinTypeEPI(GPIO_PORTL_BASE, GPIO_PIN_2);

    //
    // Configure the GPIO Pin Mux for PM3
	// for EPI0S12
    //
	MAP_GPIOPinConfigure(GPIO_PM3_EPI0S12);
	GPIOPinTypeEPI(GPIO_PORTM_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PC6
	// for EPI0S5
    //
	MAP_GPIOPinConfigure(GPIO_PC6_EPI0S5);
	GPIOPinTypeEPI(GPIO_PORTC_BASE, GPIO_PIN_6);

    //
    // Configure the GPIO Pin Mux for PH2
	// for EPI0S2
    //
	MAP_GPIOPinConfigure(GPIO_PH2_EPI0S2);
	GPIOPinTypeEPI(GPIO_PORTH_BASE, GPIO_PIN_2);

    //
    // Configure the GPIO Pin Mux for PK4
	// for EN0LED0
    //
	MAP_GPIOPinConfigure(GPIO_PK4_EN0LED0);
	GPIOPinTypeEthernetLED(GPIO_PORTK_BASE, GPIO_PIN_4);

    //
    // Configure the GPIO Pin Mux for PK6
	// for EN0LED1
    //
	MAP_GPIOPinConfigure(GPIO_PK6_EN0LED1);
	GPIOPinTypeEthernetLED(GPIO_PORTK_BASE, GPIO_PIN_6);

    //
    // Configure the GPIO Pin Mux for PE5
	// for GPIO_PE5
    //
	MAP_GPIOPinTypeGPIOOutput(GPIO_PORTE_BASE, GPIO_PIN_5);

    //
    // Configure the GPIO Pin Mux for PE4
	// for GPIO_PE4
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTE_BASE, GPIO_PIN_4);

    //
    // Configure the GPIO Pin Mux for PP0
	// for GPIO_PP0
    //
	MAP_GPIOPinTypeGPIOOutput(GPIO_PORTP_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PE1
	// for GPIO_PE1
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTE_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PE0
	// for GPIO_PE0
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTE_BASE, GPIO_PIN_0);

	//
	// Unlock the Port Pin and Set the Commit Bit
	//
	GPIOC->GPIO_O_LOCK = GPIO_LOCK_KEY;
	GPIOC->GPIO_O_CR   |= GPIO_PIN_0;
	GPIOC->GPIO_O_LOCK = 0x0;
	
    //
    // Configure the GPIO Pin Mux for PC0
	// for GPIO_PC0
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, GPIO_PIN_0);

	//
	// Unlock the Port Pin and Set the Commit Bit
	//
	GPIOC->GPIO_O_LOCK = GPIO_LOCK_KEY;
	GPIOC->GPIO_O_CR   |= GPIO_PIN_1;
	GPIOC->GPIO_O_LOCK = 0x0;
	
    //
    // Configure the GPIO Pin Mux for PC1
	// for GPIO_PC1
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, GPIO_PIN_1);

	//
	// Unlock the Port Pin and Set the Commit Bit
	//
	GPIOC->GPIO_O_LOCK = GPIO_LOCK_KEY;
	GPIOC->GPIO_O_CR   |= GPIO_PIN_2;
	GPIOC->GPIO_O_LOCK = 0x0;
	
    //
    // Configure the GPIO Pin Mux for PC2
	// for GPIO_PC2
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTC_BASE, GPIO_PIN_2);

	//
	// Unlock the Port Pin and Set the Commit Bit
	//
	GPIOC->GPIO_O_LOCK = GPIO_LOCK_KEY;
	GPIOC->GPIO_O_CR   |= GPIO_PIN_3;
	GPIOC->GPIO_O_LOCK = 0x0;
	
    //
    // Configure the GPIO Pin Mux for PC3
	// for GPIO_PC3
    //
	MAP_GPIOPinTypeGPIOOutput(GPIO_PORTC_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PL5
	// for GPIO_PL5
    //
	MAP_GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_5);

    //
    // Configure the GPIO Pin Mux for PL4
	// for GPIO_PL4
    //
	MAP_GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_4);

    //
    // Configure the GPIO Pin Mux for PK3
	// for GPIO_PK3
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTK_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PK2
	// for GPIO_PK2
    //
	MAP_GPIOPinTypeGPIOOutput(GPIO_PORTK_BASE, GPIO_PIN_2);

    //
    // Configure the GPIO Pin Mux for PN4
	// for GPIO_PN4
    //
	MAP_GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_4);

    //
    // Configure the GPIO Pin Mux for PN1
	// for GPIO_PN1
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTN_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PN2
	// for GPIO_PN2
    //
	MAP_GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_2);

    //
    // Configure the GPIO Pin Mux for PN0
	// for GPIO_PN0
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTN_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PP4
	// for GPIO_PP4
    //
	MAP_GPIOPinTypeGPIOOutput(GPIO_PORTP_BASE, GPIO_PIN_4);

    //
    // Configure the GPIO Pin Mux for PP5
	// for GPIO_PP5
    //
	MAP_GPIOPinTypeGPIOOutput(GPIO_PORTP_BASE, GPIO_PIN_5);

    //
    // Configure the GPIO Pin Mux for PK7
	// for GPIO_PK7
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTK_BASE, GPIO_PIN_7);
	MAP_GPIOPadConfigSet(GPIO_PORTK_BASE, GPIO_PIN_7, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);

    //
    // Configure the GPIO Pin Mux for PF1
	// for GPIO_PF1
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PF2
	// for GPIO_PF2
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTF_BASE, GPIO_PIN_2);

    //
    // Configure the GPIO Pin Mux for PN3
	// for GPIO_PN3
    //
	MAP_GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PD5
	// for GPIO_PD5
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTD_BASE, GPIO_PIN_5);

    //
    // Configure the GPIO Pin Mux for PM4
	// for GPIO_PM4
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTM_BASE, GPIO_PIN_4);
	MAP_GPIOPadConfigSet(GPIO_PORTM_BASE, GPIO_PIN_4, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPD);

    //
    // Configure the GPIO Pin Mux for PM7
	// for GPIO_PM7
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTM_BASE, GPIO_PIN_7);
	MAP_GPIOPadConfigSet(GPIO_PORTM_BASE, GPIO_PIN_7, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPD);

    //
    // Configure the GPIO Pin Mux for PM5
	// for GPIO_PM5
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTM_BASE, GPIO_PIN_5);
	MAP_GPIOPadConfigSet(GPIO_PORTM_BASE, GPIO_PIN_5, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPD);

    //
    // Configure the GPIO Pin Mux for PB2
	// for GPIO_PB2
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTB_BASE, GPIO_PIN_2);
	MAP_GPIOPadConfigSet(GPIO_PORTB_BASE, GPIO_PIN_2, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPD);

    //
    // Configure the GPIO Pin Mux for PM6
	// for GPIO_PM6
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTM_BASE, GPIO_PIN_6);
	MAP_GPIOPadConfigSet(GPIO_PORTM_BASE, GPIO_PIN_6, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPD);

    //
    // Configure the GPIO Pin Mux for PQ4
	// for GPIO_PQ4
    //
	MAP_GPIOPinTypeGPIOInput(GPIO_PORTQ_BASE, GPIO_PIN_4);

    //
    // Configure the GPIO Pin Mux for PB4
	// for I2C5SCL
    //
	MAP_GPIOPinConfigure(GPIO_PB4_I2C5SCL);
	MAP_GPIOPinTypeI2CSCL(GPIO_PORTB_BASE, GPIO_PIN_4);

    //
    // Configure the GPIO Pin Mux for PB5
	// for I2C5SDA
    //
	MAP_GPIOPinConfigure(GPIO_PB5_I2C5SDA);
	MAP_GPIOPinTypeI2C(GPIO_PORTB_BASE, GPIO_PIN_5);

    //
    // Configure the GPIO Pin Mux for PA0
	// for I2C9SCL
    //
	MAP_GPIOPinConfigure(GPIO_PA0_I2C9SCL);
	MAP_GPIOPinTypeI2CSCL(GPIO_PORTA_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PA1
	// for I2C9SDA
    //
	MAP_GPIOPinConfigure(GPIO_PA1_I2C9SDA);
	MAP_GPIOPinTypeI2C(GPIO_PORTA_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PF0
	// for M0PWM0
    //
	MAP_GPIOPinConfigure(GPIO_PF0_M0PWM0);
	MAP_GPIOPinTypePWM(GPIO_PORTF_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PF3
	// for M0PWM3
    //
	MAP_GPIOPinConfigure(GPIO_PF3_M0PWM3);
	MAP_GPIOPinTypePWM(GPIO_PORTF_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PQ2
	// for SSI3XDAT0
    //
	MAP_GPIOPinConfigure(GPIO_PQ2_SSI3XDAT0);
	MAP_GPIOPinTypeSSI(GPIO_PORTQ_BASE, GPIO_PIN_2);

    //
    // Configure the GPIO Pin Mux for PP1
	// for SSI3XDAT3
    //
	MAP_GPIOPinConfigure(GPIO_PP1_SSI3XDAT3);
	MAP_GPIOPinTypeSSI(GPIO_PORTP_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PQ3
	// for SSI3XDAT1
    //
	MAP_GPIOPinConfigure(GPIO_PQ3_SSI3XDAT1);
	MAP_GPIOPinTypeSSI(GPIO_PORTQ_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PQ1
	// for SSI3FSS
    //
	MAP_GPIOPinConfigure(GPIO_PQ1_SSI3FSS);
	MAP_GPIOPinTypeSSI(GPIO_PORTQ_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PF4
	// for SSI3XDAT2
    //
	MAP_GPIOPinConfigure(GPIO_PF4_SSI3XDAT2);
	MAP_GPIOPinTypeSSI(GPIO_PORTF_BASE, GPIO_PIN_4);

    //
    // Configure the GPIO Pin Mux for PQ0
	// for SSI3CLK
    //
	MAP_GPIOPinConfigure(GPIO_PQ0_SSI3CLK);
	MAP_GPIOPinTypeSSI(GPIO_PORTQ_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PD1
	// for SSI2XDAT0
    //
	MAP_GPIOPinConfigure(GPIO_PD1_SSI2XDAT0);
	MAP_GPIOPinTypeSSI(GPIO_PORTD_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PD0
	// for SSI2XDAT1
    //
	MAP_GPIOPinConfigure(GPIO_PD0_SSI2XDAT1);
	MAP_GPIOPinTypeSSI(GPIO_PORTD_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PD2
	// for SSI2FSS
    //
	MAP_GPIOPinConfigure(GPIO_PD2_SSI2FSS);
	MAP_GPIOPinTypeSSI(GPIO_PORTD_BASE, GPIO_PIN_2);

    //
    // Configure the GPIO Pin Mux for PD3
	// for SSI2CLK
    //
	MAP_GPIOPinConfigure(GPIO_PD3_SSI2CLK);
	MAP_GPIOPinTypeSSI(GPIO_PORTD_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PA4
	// for SSI0XDAT0
    //
	MAP_GPIOPinConfigure(GPIO_PA4_SSI0XDAT0);
	MAP_GPIOPinTypeSSI(GPIO_PORTA_BASE, GPIO_PIN_4);

    //
    // Configure the GPIO Pin Mux for PA5
	// for SSI0XDAT1
    //
	MAP_GPIOPinConfigure(GPIO_PA5_SSI0XDAT1);
	MAP_GPIOPinTypeSSI(GPIO_PORTA_BASE, GPIO_PIN_5);

    //
    // Configure the GPIO Pin Mux for PA3
	// for SSI0FSS
    //
	MAP_GPIOPinConfigure(GPIO_PA3_SSI0FSS);
	MAP_GPIOPinTypeSSI(GPIO_PORTA_BASE, GPIO_PIN_3);

    //
    // Configure the GPIO Pin Mux for PA2
	// for SSI0CLK
    //
	MAP_GPIOPinConfigure(GPIO_PA2_SSI0CLK);
	MAP_GPIOPinTypeSSI(GPIO_PORTA_BASE, GPIO_PIN_2);

    //
    // Configure the GPIO Pin Mux for PD4
	// for T3CCP0
    //
	MAP_GPIOPinConfigure(GPIO_PD4_T3CCP0);
	MAP_GPIOPinTypeTimer(GPIO_PORTD_BASE, GPIO_PIN_4);

    //
    // Configure the GPIO Pin Mux for PJ0
	// for U3RX
    //
	MAP_GPIOPinConfigure(GPIO_PJ0_U3RX);
	MAP_GPIOPinTypeUART(GPIO_PORTJ_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PJ1
	// for U3TX
    //
	MAP_GPIOPinConfigure(GPIO_PJ1_U3TX);
	MAP_GPIOPinTypeUART(GPIO_PORTJ_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PB0
	// for U1RX
    //
	MAP_GPIOPinConfigure(GPIO_PB0_U1RX);
	MAP_GPIOPinTypeUART(GPIO_PORTB_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PB1
	// for U1TX
    //
	MAP_GPIOPinConfigure(GPIO_PB1_U1TX);
	MAP_GPIOPinTypeUART(GPIO_PORTB_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PN5
	// for U1RI
    //
	MAP_GPIOPinConfigure(GPIO_PN5_U1RI);
	MAP_GPIOPinTypeUART(GPIO_PORTN_BASE, GPIO_PIN_5);

    //
    // Configure the GPIO Pin Mux for PK0
	// for U4RX
    //
	MAP_GPIOPinConfigure(GPIO_PK0_U4RX);
	MAP_GPIOPinTypeUART(GPIO_PORTK_BASE, GPIO_PIN_0);

    //
    // Configure the GPIO Pin Mux for PK1
	// for U4TX
    //
	MAP_GPIOPinConfigure(GPIO_PK1_U4TX);
	MAP_GPIOPinTypeUART(GPIO_PORTK_BASE, GPIO_PIN_1);

    //
    // Configure the GPIO Pin Mux for PL6
	// for USB0DP
    //
	MAP_GPIOPinTypeUSBAnalog(GPIO_PORTL_BASE, GPIO_PIN_6);

    //
    // Configure the GPIO Pin Mux for PL7
	// for USB0DM
    //
	MAP_GPIOPinTypeUSBAnalog(GPIO_PORTL_BASE, GPIO_PIN_7);

}

//*****************************************************************************
//
// Close the Doxygen group.
//! @}
//
//*****************************************************************************

