#pragma once
#include <stdint.h>
struct t2;
#include "t3.h"
#include "t4.h"
#include "t5.h"
struct t1  : public t3
{
	float f2;
	float f3;
	float f4;
	float f5;
	t4  f6;
	t4  f7;
	t2 * f8;
	bool f9;
	float f10;
	bool f11;
	t5  f12;
};
