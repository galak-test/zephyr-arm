/*
 * Copyright (c) 2016 Freescale Semiconductor, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

#include <soc.h>

/* Red LED */
#define RED_GPIO_NAME		CONFIG_GPIO_MCUX_PORTC_NAME
#define RED_GPIO_PIN		8

/* Green LED */
#define GREEN_GPIO_NAME		CONFIG_GPIO_MCUX_PORTD_NAME
#define GREEN_GPIO_PIN		0

/* Blue LED */
#define BLUE_GPIO_NAME		CONFIG_GPIO_MCUX_PORTC_NAME
#define BLUE_GPIO_PIN		9

/* LED0. There is no physical LED on the board with this name, so create an
 * alias to the green LED to make the basic blinky sample work.
 */
#define LED0_GPIO_PORT	GREEN_GPIO_NAME
#define LED0_GPIO_PIN	GREEN_GPIO_PIN

#endif /* __INC_BOARD_H */
