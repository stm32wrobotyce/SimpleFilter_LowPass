/*
 * filter.h
 *
 *  Created on: Apr 12, 2023
 *      Author: piotr
 */

#ifndef INC_SIMPLE_FILTERS_H_
#define INC_SIMPLE_FILTERS_H_

#include "main.h"

#define LOW_PASS_ALPHA	(0.01f)

typedef struct
{
	float out;
	float alpha;
} lowpass_filter_t;

void filter_lowpass_init(void);
int32_t filter_lowpass(int32_t new_data);

#endif /* INC_SIMPLE_FILTERS_H_ */
