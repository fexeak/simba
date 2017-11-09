/**
 * @section License
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2014-2017, Erik Moqvist
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * This file is part of the Simba project.
 */

#ifndef __BOARD_H__
#define __BOARD_H__

/* Pin device objects. */
#define pin_b0_dev pin_device[0]
#define pin_b1_dev pin_device[1]
#define pin_b2_dev pin_device[2]
#define pin_b3_dev pin_device[3]
#define pin_b4_dev pin_device[4]
#define pin_b5_dev pin_device[5]
#define pin_b6_dev pin_device[6]
#define pin_b7_dev pin_device[7]

#define pin_c0_dev pin_device[8]
#define pin_c1_dev pin_device[9]
#define pin_c2_dev pin_device[10]
#define pin_c3_dev pin_device[11]
#define pin_c4_dev pin_device[12]
#define pin_c5_dev pin_device[13]
#define pin_c6_dev pin_device[14]


#define pin_d0_dev pin_device[15]
#define pin_d1_dev pin_device[16]
#define pin_d2_dev pin_device[17]
#define pin_d3_dev pin_device[18]
#define pin_d4_dev pin_device[19]
#define pin_d5_dev pin_device[20]
#define pin_d6_dev pin_device[21]
#define pin_d7_dev pin_device[22]

// #define pin_led_dev pin_d13_dev

/* External interrupt objects. */
#define exti_d2_dev exti_device[4]
#define exti_d3_dev exti_device[5]
#define exti_d18_dev exti_device[3]
#define exti_d19_dev exti_device[2]
#define exti_d20_dev exti_device[1]
#define exti_d21_dev exti_device[0]

/* Pin change interrupt objects. */
#define pcint_d10_dev pcint_device[4]
#define pcint_d11_dev pcint_device[5]
#define pcint_d12_dev pcint_device[6]
#define pcint_d13_dev pcint_device[7]
#define pcint_d14_dev pcint_device[9]
#define pcint_d15_dev pcint_device[8]
#define pcint_d50_dev pcint_device[3]
#define pcint_d51_dev pcint_device[2]
#define pcint_d52_dev pcint_device[1]
#define pcint_d53_dev pcint_device[0]
#define pcint_a8_dev  pcint_device[16]
#define pcint_a9_dev  pcint_device[17]
#define pcint_a10_dev pcint_device[18]
#define pcint_a11_dev pcint_device[19]
#define pcint_a12_dev pcint_device[20]
#define pcint_a13_dev pcint_device[21]
#define pcint_a14_dev pcint_device[22]
#define pcint_a15_dev pcint_device[23]

/* PWM device objects.

   PWM d11 and d12 cannot be used since timer 1 is used for the system
   tick. */
#define pwm_d2_dev pwm_device[0]
#define pwm_d3_dev pwm_device[1]
#define pwm_d4_dev pwm_device[9]


/* ADC device object. */
#define adc_0_dev adc_device[0]

/* I2C device object*/
#define i2c_0_dev i2c_device[0]

/* SPI device object*/
#define spi_0_dev spi_device[0]

/**
 * Convert given pin string to the pin number.
 *
 * @param[in] str_p Pin as a string.
 *
 * @return Pin number or negative error code.
 */
int board_pin_string_to_device_index(const char *str_p);

#endif
