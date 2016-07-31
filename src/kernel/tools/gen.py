#!/usr/bin/env python

import sys
import json
import time
import re
import getpass

file_fmt = """/**
 * @file {filename}
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

/**
 * This file was generated by gen.py {major}.{minor} {date}.
 */

#include "simba.h"
#include <stdarg.h>

{sysinfo}
"""

SYSINFO_FMT = """const FAR char sysinfo[] = "app:    {name}-{version} built {date} by {user}.\\r\\n"
                           "board:  {board}\\r\\n"
                           "mcu:    {mcu}\\r\\n";
"""

MAJOR = 1
MINOR = 0


if __name__ == '__main__':
    name = sys.argv[1]
    version = sys.argv[2]
    board = sys.argv[3]
    mcu = sys.argv[4]
    outfile = sys.argv[5]

    now = time.strftime("%Y-%m-%d %H:%M %Z")

    sysinfo = SYSINFO_FMT.format(name=name,
                                 version=version,
                                 date=now,
                                 user=getpass.getuser(),
                                 board=board,
                                 mcu=mcu)

    fout = open(outfile, 'w').write(
        file_fmt.format(filename=outfile,
                        major=MAJOR,
                        minor=MINOR,
                        date=time.strftime("%Y-%m-%d %H:%M %Z"),
                        sysinfo=sysinfo))
