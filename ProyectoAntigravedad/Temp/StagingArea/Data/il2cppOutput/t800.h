#pragma once
#include <stdint.h>
struct t800;
struct t801;
struct t782;
struct t792;
struct t793;
struct t786;
#include "t7.h"
struct t800  : public t7
{
	t801 * f2;
	bool f3;
	uint8_t* f4;
	uint8_t* f5;
	t782 * f6;
	uint8_t* f7;
	t782 * f8;
	int32_t f9;
	t792* f10;
	t793* f11;
	t786* f12;
};
struct t800_SFs{
	bool f0;
	t800 * f1;
};
