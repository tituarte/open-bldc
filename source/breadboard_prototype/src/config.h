/*
 * Open-BLDC - Open BruschLess DC Motor Controller
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

#ifndef __CONFIG_H
#define __CONFIG_H

#define PWM_PHASE_TRIGGER 5

//#define PWM_SCHEME pwm_scheme_6step_h_pwm_l_on
//#define PWM_SCHEME pwm_scheme_6step_h_on_l_pwm
//#define PWM_SCHEME pwm_scheme_6step_on_pwm
//#define PWM_SCHEME pwm_scheme_6step_pwm_on
#define PWM_SCHEME pwm_scheme_12step_pwm_on_pwm

#endif /* __CONFIG_H */
