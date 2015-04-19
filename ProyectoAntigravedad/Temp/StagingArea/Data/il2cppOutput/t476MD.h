#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t476;
struct t476_marshaled;

 void m2231 (t476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2232 (t476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2233 (t476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2234 (t476 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t476_marshal(const t476& unmarshaled, t476_marshaled& marshaled);
void t476_marshal_back(const t476_marshaled& marshaled, t476& unmarshaled);
void t476_marshal_cleanup(t476_marshaled& marshaled);
