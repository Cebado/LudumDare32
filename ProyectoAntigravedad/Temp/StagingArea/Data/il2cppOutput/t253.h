#pragma once
#include <stdint.h>
struct t253;
struct t253_marshaled;
struct t502;
#include "t7.h"
#include "t114.h"
struct t253  : public t7
{
	t114 f0;
};
struct t253_SFs{
	t253 * f1;
	t253 * f2;
	t502 * f3;
};
// Native definition for marshalling of: UnityEngine.Event
struct t253_marshaled
{
	t114 f0;
};
