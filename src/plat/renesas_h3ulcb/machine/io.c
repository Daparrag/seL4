/*
 * Copyright 2019, Diego Guzman <daparrag@correo.udistrital.edu.co>
 * implemented for renesas rcar-H3 ULCB starter kit. 
 *
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_GPL)
 */



#include <config.h>
#include <stdint.h>
#include <util.h>
#include <machine/io.h>
#include <plat/machine/devices_gen.h>


#define SCSMR	0x00	/*serial mode register*/
#define SCBRR	0x04	/*bitrate register */
#define SCSCR	0x08	/*serial control register*/
#define SCFTDR	0x0C	/*Trasmit FIFO data register*/
#define SCFSR	0x10	/*serial status register*/
#define SCFRDR	0x14	/*Receive FIFO data register*/
#define SCFCR	0x18	/*FIFO control register*/
#define SCFDR	0x1C	/*FIFO data count register*/
#define SCSPTR	0x20	/*serial port register*/  
#define SCLSR	0x24	/*Line status register*/  
#define DL		0x30	/*Frecuency division register*/  
#define CKS		0x34	/*Clock Select Register*/  

#define UART_REG(x) ((volatile uint32_t *)(UART_PPTR + (x)))
#define UART_CHANNEL_STS_TXEMPTY	 (1U << 5) //Transmit FIFO Data empty Flag

#if defined(CONFIG_DEBUG_BUILD) || defined(CONFIG_PRINTING)
void
putDebugChar(unsigned char c)
{
	/* Wait to be able to transmit. */
	while (!(*UART_REG(SCFSR) & UART_CHANNEL_STS_TXEMPTY));

    /* Transmit. */
    *UART_REG(SCFTDR) = c;

}
#endif



#ifdef CONFIG_DEBUG_BUILD
unsigned char
getDebugChar(void)
{
	return 0;
}

#endif /* CONFIG_DEBUG_BUILD */