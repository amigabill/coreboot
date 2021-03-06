/*
 * This file is part of the coreboot project.
 *
 * Copyright 2017 Intel Corp.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <baseboard/variants.h>
#include <ec/google/chromeec/ec.h>

uint8_t __attribute__((weak)) variant_board_id(void)
{
	if (IS_ENABLED(CONFIG_EC_GOOGLE_CHROMEEC))
		return google_chromeec_get_board_version();
	else
		return 0;
}
