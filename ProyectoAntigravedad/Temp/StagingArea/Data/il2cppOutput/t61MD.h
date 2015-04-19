#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t61;
struct t61_marshaled;

 void m118 (t61 * __this, float p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t61_marshal(const t61& unmarshaled, t61_marshaled& marshaled);
void t61_marshal_back(const t61_marshaled& marshaled, t61& unmarshaled);
void t61_marshal_cleanup(t61_marshaled& marshaled);
