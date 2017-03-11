/*
 * phi_conf.h
 *
 *  Created on: Nov 4, 2016
 *      Author: eran
 */

#ifndef PHI_CONF_H_
#define PHI_CONF_H_

#include "phi_lib/phi_lib.h"
#include "phi_lib/phi_can.h"


/******************************************************************************
 * CENX4 Specific stuff
 *****************************************************************************/

#define CENX4_HW_SW_VER 0x8121
#define CENX4_DEV_ID     PHI_DEV_ID('C', 'N', 'X', '4')


#ifndef CENX4_IS_SLAVE
#define CENX4_IS_SLAVE 0
#endif


/******************************************************************************
 * Bootloader
 *****************************************************************************/

#define CENX4_BL_USER_ADDR        0x08010000
#define CENX4_BL_FLASH_PAGE_SIZE  (2 * 1024)

#include "phi_lib/st/stm32f3xx_hal_flash_ex.h"
#if FLASH_PAGE_SIZE != CENX4_BL_FLASH_PAGE_SIZE
#error WTF
#endif


#endif /* PHI_CONF_H_ */
