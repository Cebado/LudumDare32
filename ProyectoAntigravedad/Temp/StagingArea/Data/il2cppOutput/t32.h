#pragma once
#include <stdint.h>
struct t10;
#include "t7.h"
struct t32  : public t7
{
	t10* f1;
	int32_t f2;
	int32_t f3;
};
struct t32_SFs{
	int32_t f0;
	t10* f4;
};
