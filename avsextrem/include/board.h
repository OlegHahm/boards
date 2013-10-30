/*
* board.h - Definitions for the AVSEXTREM board configuration.
* Copyright (C) 2013 Zakaria Kasmi <zkasmi@inf.fu-berlin.de>
*
* This source code is licensed under the LGPLv2 license,
* See the file LICENSE for more details.
*
*/


/**
 * @file
 * @brief       avsextrem board configuration
 *
 * @author      Freie Universität Berlin, Computer Systems & Telematics
 * @author      Heiko Will
 * @author      Zakaria Kasmi
 * @version     $Revision: 1127 $
 *
 * @note        $Id: board-conf.h 1127 2013-06-13 08:48:29Z kasmi$
 */


#ifndef BOARDCONF_H_
#define BOARDCONF_H_
#include <bitarithm.h>
#include "msba2-common.h"

#define FEUERWARE_CONF_BOARD_NAME	      "FU Berlin AVSEXTREM BOARD"

#define LED_PIN_RED     (BIT25)
#define LED_PIN_GREEN   (BIT26)

#define LED_PIN_0       (LED_PIN_RED)
#define LED_PIN_1       (LED_PIN_GREEN)

#define LED_ON(led_color)       (FIO3SET = LED_PIN_##led_color)
#define LED_OFF(led_color)      (FIO3CLR = LED_PIN_##led_color)
#define LED_TOGGLE(led_color)   (FIO3PIN ^= LED_PIN_##led_color)

#ifdef MODULE_CC110X
#define FEUERWARE_CONF_NUM_RADIOS	      1
#else
#define FEUERWARE_CONF_NUM_RADIOS	      0
#endif

// if FAT is enabled this board supports files
#define FEUERWARE_CONF_CORE_SUPPORTS_FILES    defined(MODULE_FAT)

#ifdef MODULE_FAT
#define CFG_CONF_MEM_SIZE		      0x7FFFFFFF
#define SYSLOG_CONF_NUM_INTERFACES	      2
#else
#define SYSLOG_CONF_NUM_INTERFACES	      1
#endif

void init_clks1(void);

typedef uint8_t radio_packet_length_t;

/** @} */
#endif /* BOARDCONF_H_ */

