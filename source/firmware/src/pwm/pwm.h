/*
 * Open-BLDC - Open BrushLess DC Motor Controller
 * Copyright (C) 2009 by Piotr Esden-Tempski <piotr@esden.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __PWM_H
#define __PWM_H

extern volatile uint16_t pwm_val;
extern volatile uint16_t pwm_offset;
extern volatile int pwm_free_wheeling;
extern volatile int pwm_trig_led;

void pwm_init(void);
void pwm_off(void);
void pwm_all_lo(void);
void pwm_all_hi(void);
void pwm_comm(void);
void tim1_trg_com_irq_handler(void);
void tim1_cc_irq_handler(void);

#endif /* __PWM_H */
