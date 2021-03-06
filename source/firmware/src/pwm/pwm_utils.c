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

#include <stm32/tim.h>

#include "config.h"
#include "pwm.h"

#include "pwm_utils.h"

#include "led.h"

void pwm_trigger(uint16_t zone){
    if(PWM_PHASE_TRIGGER == zone){
        LED_BLUE_OFF();
    }
    if(PWM_PHASE_TRIGGER == zone + 1){
        LED_BLUE_ON();
    }
}

void pwm_set_____hi(uint16_t phase){
    TIM_SelectOCxM(TIM1, phase, TIM_ForcedAction_Active );
    TIM_CCxCmd(TIM1, phase, TIM_CCx_Enable);
    TIM_CCxNCmd(TIM1, phase, TIM_CCxN_Enable);
}

void pwm_set_____lo(uint16_t phase){
    TIM_SelectOCxM(TIM1, phase, TIM_ForcedAction_InActive );
    TIM_CCxCmd(TIM1, phase, TIM_CCx_Enable);
    TIM_CCxNCmd(TIM1, phase, TIM_CCxN_Enable);
}

void pwm_set_pwm_hi(uint16_t phase){
    TIM_SelectOCxM(TIM1, phase, TIM_OCMode_PWM1);
    TIM_CCxCmd(TIM1, phase, TIM_CCx_Enable);
    TIM_CCxNCmd(TIM1, phase, TIM_CCxN_Disable);
}

void pwm_set_pwm_lo(uint16_t phase){
    TIM_SelectOCxM(TIM1, phase, TIM_OCMode_PWM1);
    TIM_CCxCmd(TIM1, phase, TIM_CCx_Disable);
    TIM_CCxNCmd(TIM1, phase, TIM_CCxN_Enable);

}

void pwm_set____off(uint16_t phase){
    TIM_CCxCmd(TIM1, phase, TIM_CCx_Disable);
    TIM_CCxNCmd(TIM1, phase, TIM_CCxN_Disable);
}
