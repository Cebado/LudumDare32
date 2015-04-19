#pragma once
#include <stdint.h>
struct t34;
struct t250;
#include "t7.h"
struct t34  : public t7
{
	int32_t f0;
	uint16_t f1;
};
struct t34_SFs{
	t34* f2;
	t250* f3;
};
