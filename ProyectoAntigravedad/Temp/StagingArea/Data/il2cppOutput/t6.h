#pragma once
#include <stdint.h>
struct t7;
struct t8;
#include "t7.h"
struct t6  : public t7
{
	int32_t f0;
	int32_t f1;
	t7 * f2;
	t8 * f3;
};
