#pragma once
#include <stdint.h>
struct t210;
#include "t100.h"
#include "t302.h"
#include "t267.h"
struct t303  : public t100
{
	int32_t f2;
	int32_t f3;
	t210 * f4;
	t267  f5;
};
