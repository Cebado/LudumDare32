#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t536;
struct t536_marshaled;
struct t7;

 bool m2899 (t536 * __this, t7 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2900 (t536 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2901 (t7 * __this, t536 * p0, t536 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t536_marshal(const t536& unmarshaled, t536_marshaled& marshaled);
void t536_marshal_back(const t536_marshaled& marshaled, t536& unmarshaled);
void t536_marshal_cleanup(t536_marshaled& marshaled);
