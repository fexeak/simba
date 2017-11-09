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

#include "simba.h"


struct pin_device_t pin_device[PIN_DEVICE_MAX] = {
    // /* Port A. 0..7 */
    // { .sfr_p = &PINA, .mask = _BV(PINA0) },
    // { .sfr_p = &PINA, .mask = _BV(PINA1) },
    // { .sfr_p = &PINA, .mask = _BV(PINA2) },
    // { .sfr_p = &PINA, .mask = _BV(PINA3) },
    // { .sfr_p = &PINA, .mask = _BV(PINA4) },
    // { .sfr_p = &PINA, .mask = _BV(PINA5) },
    // { .sfr_p = &PINA, .mask = _BV(PINA6) },
    // { .sfr_p = &PINA, .mask = _BV(PINA7) },

    /* Port B. 0..7 */
    { .sfr_p = &PINB, .mask = _BV(PINB0) },
    { .sfr_p = &PINB, .mask = _BV(PINB1) },
    { .sfr_p = &PINB, .mask = _BV(PINB2) },
    { .sfr_p = &PINB, .mask = _BV(PINB3) },
    { .sfr_p = &PINB, .mask = _BV(PINB4) },
    { .sfr_p = &PINB, .mask = _BV(PINB5) },
    { .sfr_p = &PINB, .mask = _BV(PINB6) },
    { .sfr_p = &PINB, .mask = _BV(PINB7) },

    /* Port C. 8..14 */
    { .sfr_p = &PINC, .mask = _BV(PINC0) },
    { .sfr_p = &PINC, .mask = _BV(PINC1) },
    { .sfr_p = &PINC, .mask = _BV(PINC2) },
    { .sfr_p = &PINC, .mask = _BV(PINC3) },
    { .sfr_p = &PINC, .mask = _BV(PINC4) },
    { .sfr_p = &PINC, .mask = _BV(PINC5) },
    { .sfr_p = &PINC, .mask = _BV(PINC6) },
    // { .sfr_p = &PINC, .mask = _BV(PINC7) },

    /* Port D. 15..22 */
    { .sfr_p = &PIND, .mask = _BV(PIND0) },
    { .sfr_p = &PIND, .mask = _BV(PIND1) },
    { .sfr_p = &PIND, .mask = _BV(PIND2) },
    { .sfr_p = &PIND, .mask = _BV(PIND3) },
    { .sfr_p = &PIND, .mask = _BV(PIND4) },
    { .sfr_p = &PIND, .mask = _BV(PIND5) },
    { .sfr_p = &PIND, .mask = _BV(PIND6) },
    { .sfr_p = &PIND, .mask = _BV(PIND7) },
};

struct exti_device_t exti_device[EXTI_DEVICE_MAX] = {
    { .drv_p = NULL, .pin_p = &pin_device[17], .id = 0 },
    { .drv_p = NULL, .pin_p = &pin_device[18], .id = 1 }
};

struct pcint_device_t pcint_device[PCINT_DEVICE_MAX] = {
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL },
    { .drv_p = NULL }
};

struct spi_device_t spi_device[SPI_DEVICE_MAX] = {
    {
        .drv_p = NULL,
        .ss_p = &pin_device[2],
        .sck_p = &pin_device[5],
        .mosi_p = &pin_device[3],
        .miso_p = &pin_device[4],
        .mutex = {
            .is_locked = 0,
            .waiters = {
                .head_p = NULL
            }
        }
    }
};

struct uart_device_t uart_device[UART_DEVICE_MAX] = {
    { .drv_p = NULL, .sfr_p = &UCSR0A }
};

struct pwm_device_t pwm_device[PWM_DEVICE_MAX] = {
    { .index = 0, .pin_dev_p = &pin_device[20] }, /* timer 1 */
};

struct adc_device_t adc_device[ADC_DEVICE_MAX] = {
    { .jobs = { .head_p = NULL, .tail_p = NULL } },
};

struct i2c_device_t i2c_device[I2C_DEVICE_MAX] = {
};
