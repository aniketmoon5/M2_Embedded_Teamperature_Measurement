#ifndef __T_3_H__
#define __T_3_H__
#define PWM_20_PERCENT (205) /**< Output PWM for 20% duty cycle */
#define PWM_40_PERCENT (410) /**< Output PWM for 40% duty cycle */
#define PWM_70_PERCENT (717) /**< Output PWM for 70% duty cycle */
#define PWM_95_PERCENT (973) /**< Output PWM for 95% duty cycle */

/**
 * Include files
 */ 
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Initialize Timer1 registers 
 * 
 */
void InitTimer();

/**
 * @brief Produce duty cycle in PWM according to i/p ADC value
 * 
 * @param[in] temp The ADC value from t2
 */
void activity3_PWM(uint16_t temp);

#endif /* __T_3_H__ */
