/*
 *  GRUB  --  GRand Unified Bootloader
 *  Copyright (C) 2008  Free Software Foundation, Inc.
 *
 *  GRUB is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  GRUB is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GRUB.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GRUB_CONSOLE_MACHINE_HEADER
#define GRUB_CONSOLE_MACHINE_HEADER 1

#include <grub/symbol.h>

/* Initialize the console system.  */
void grub_console_init_early (void);
void grub_console_init_lately (void);

/* Finish the console system.  */
void grub_console_fini (void);

struct grub_serial_port *
grub_ofserial_add_port (const char *name);

#endif /* ! GRUB_CONSOLE_MACHINE_HEADER */
