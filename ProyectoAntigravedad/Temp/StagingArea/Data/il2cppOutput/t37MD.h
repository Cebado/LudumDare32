#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t37;
struct t37_marshaled;
struct t34;
struct t70;

 void m196 (t37 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2185 (t7 * __this, t37 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t37 * m2186 (t7 * __this, t34* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t37 * m2187 (t7 * __this, t70 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t37 * m2188 (t7 * __this, t70 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t37_marshal(const t37& unmarshaled, t37_marshaled& marshaled);
void t37_marshal_back(const t37_marshaled& marshaled, t37& unmarshaled);
void t37_marshal_cleanup(t37_marshaled& marshaled);
