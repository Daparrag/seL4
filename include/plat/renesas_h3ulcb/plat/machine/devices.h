/*
 * Copyright 2019, Diego Guzman
 * Copyright 2017, DornerWorks
 * Copyright 2017, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(DATA61_DORNERWORKS_GPL)
 */
/*
 * This data was produced by DornerWorks, Ltd. of Grand Rapids, MI, USA under
 * a DARPA SBIR, Contract Number D16PC00107.
 *
 * Approved for Public Release, Distribution Unlimited.
 */

#ifndef __PLAT_MODE_MACHINE_DEVICES_H
#define __PLAT_MODE_MACHINE_DEVICES_H

/* These devices are used by the seL4 kernel. */
#define RH3ULCB_SCIF0_BASE		0xe6e60000
#define RH3ULCB_SCIF1_BASE		0xe6e68000
#define RH3ULCB_SCIF2_BASE		0xe6e88000
#define RH3ULCB_SCIF3_BASE		0xe6c50000
#define RH3ULCB_SCIF4_BASE		0xe6c40000
#define RH3ULCB_SCIF5_BASE		0xe6f30000


/* use the SCIF channel 2 as UART  */
#define UART_PPTR              RH3ULCB_SCIF2_BASE




#endif

