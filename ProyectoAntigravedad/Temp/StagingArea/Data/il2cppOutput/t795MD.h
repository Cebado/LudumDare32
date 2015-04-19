#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t795;
struct t795_marshaled;
#include "t796.h"

 void m4056 (t795 * __this, int32_t p0, uint8_t* p1, uint8_t* p2, uint8_t* p3, uint8_t* p4, uint8_t* p5, bool p6, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t795_marshal(const t795& unmarshaled, t795_marshaled& marshaled);
void t795_marshal_back(const t795_marshaled& marshaled, t795& unmarshaled);
void t795_marshal_cleanup(t795_marshaled& marshaled);
