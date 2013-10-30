#ifndef __BOARD_H
#define __BOARD_H

#include "msba2_common.h"
#include "bitarithm.h"

#define LED_PIN_GREEN   (BIT25)
#define LED_PIN_RED     (BIT26)
#define LED_PIN_0       (LED_PIN_RED)
#define LED_PIN_1       (LED_PIN_GREEN)

#define LED_ON(led_color)       (FIO3SET = LED_PIN_##led_color)
#define LED_OFF(led_color)      (FIO3CLR = LED_PIN_##led_color)
#define LED_TOGGLE(led_color)   (FIO3PIN ^= LED_PIN_##led_color)

void init_clks1(void);

typedef uint8_t radio_packet_length_t;

#endif /* __BOARD_H */
