/*
 * simple_filters.c
 *
 *  Created on: Apr 12, 2023
 *      Author: piotr
 */

#include "string.h"

#include "main.h"
#include "simple_filters.h"

lowpass_filter_t filter;

void filter_lowpass_init(void)
{
	filter.out = 0.0f;
	filter.alpha = LOW_PASS_ALPHA;
}

int32_t filter_lowpass(int32_t new_data)
{
	filter.out = filter.alpha * new_data + (1.0f-filter.alpha) * filter.out;

	return filter.out;
}
