#pragma once
#include <stdint.h>
struct t7;
#include "t7.h"
struct t24  : public t7
{
	int32_t f0;
	t7 * f1;
};
