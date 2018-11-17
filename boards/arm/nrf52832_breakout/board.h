/*
 * Copyright (c) 2016-2018 Nordic Semiconductor ASA.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

#include <soc.h>

/* Push button switch 0 */
#define SW0_GPIO_PIN     13
#define SW0_GPIO_NAME    CONFIG_GPIO_P0_DEV_NAME
#define SW0_GPIO_PIN_PUD GPIO_PUD_PULL_UP

/* Push button switch 1 */
#define SW1_GPIO_PIN     14
#define SW1_GPIO_NAME    CONFIG_GPIO_P0_DEV_NAME
#define SW1_GPIO_PIN_PUD GPIO_PUD_PULL_UP

/* Onboard RED LED 0 */
#define LED0_GPIO_PIN  17
#define LED0_GPIO_PORT CONFIG_GPIO_P0_DEV_NAME

/* Onboard RED LED 1 */
#define LED1_GPIO_PIN  18
#define LED1_GPIO_PORT CONFIG_GPIO_P0_DEV_NAME

#endif /* __INC_BOARD_H */
