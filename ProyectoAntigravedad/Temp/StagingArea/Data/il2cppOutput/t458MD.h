#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t458;
struct t458_marshaled;

 void m2584 (t458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2585 (t458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2586 (t458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t458_marshal(const t458& unmarshaled, t458_marshaled& marshaled);
void t458_marshal_back(const t458_marshaled& marshaled, t458& unmarshaled);
void t458_marshal_cleanup(t458_marshaled& marshaled);
