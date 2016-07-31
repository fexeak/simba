/**
 * @file avr/gnu/setting_port.i
 * @version 4.0.0
 *
 * @section License
 * Copyright (C) 2014-2016, Erik Moqvist
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * This file is part of the Simba project.
 */

#include <avr/eeprom.h>

/* The array is generated by settings.py. */
extern uint8_t setting_area[SETTING_AREA_OFFSET + SETTING_AREA_SIZE] __attribute__ ((section (".eeprom")));

static int setting_port_module_init(void)
{
    return (0);
}

static int setting_port_read(void *dst_p, size_t src, size_t size)
{
    eeprom_read_block(dst_p, &setting_area[src], size);

    return (size);
}

static int setting_port_write(size_t dst, const void *src_p, size_t size)
{
    eeprom_update_block(src_p, &setting_area[dst], size);

    return (size);
}
