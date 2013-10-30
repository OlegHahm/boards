/**
  * board.h - wsn430-v1_3b Board.
  * Copyright (C) 2013 Milan Babel <babel@inf.fu-berlin.de>
  *
  * This source code is licensed under the GNU Lesser General Public License,
  * Version 2.  See the file LICENSE for more details.
  */

#ifndef _WSN_BOARD_H
#define _WSN_BOARD_H

/**
 * @defgroup	wsn430-v1_3b		Senslab WSN430 v1.3b
 * @ingroup		wsn430
 *
<h2>Compontents</h2>
\li MSP430
\li CC1100

* @{
*/

/**
 * @file
 * @brief		wsn430-v1_3b Board
 *
 * @author      Freie Universität Berlin, Computer Systems & Telematics, FeuerWhere project
 * @author      Milan Babel <babel@inf.fu-berlin.de>
 * @version     $Revision$
 *
 * @note		$Id$
 */

#include "board-conf.h"

//MSB430 core
#define MSP430_INITIAL_CPU_SPEED    800000uL
#define MSP430_HAS_DCOR             0
#define MSP430_HAS_EXTERNAL_CRYSTAL 1

/* LEDs ports MSB430 */
#define LEDS_PxDIR P5DIR
#define LEDS_PxOUT P5OUT
#define LEDS_CONF_RED		(0x04)
#define LEDS_CONF_GREEN		(0x05)
#define LEDS_CONF_BLUE	    (0x06)
#define LEDS_CONF_0         (LEDS_CONF_RED)
#define LEDS_CONF_1         (LEDS_CONF_GREEN)
#define LEDS_CONF_2         (LEDS_CONF_BLUE)

#define LED_ON(led_color)       (LEDS_PxOUT &= ~LEDS_CONF_##led_color)
#define LED_OFF(led_color)      (LEDS_PxOUT |= LEDS_CONF_##led_color)
#define LED_TOGGLE(led_color)   (LEDS_PxOUT ^= LEDS_CONF_##led_color)

#include <msp430x16x.h>

typedef uint8_t radio_packet_length_t;

/** @} */
#endif // _WSN_BOARD_H
