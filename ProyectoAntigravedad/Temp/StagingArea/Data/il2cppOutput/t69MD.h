#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t69;
struct t69_marshaled;

 void m2182 (t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2183 (t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2184 (t69 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t69_marshal(const t69& unmarshaled, t69_marshaled& marshaled);
void t69_marshal_back(const t69_marshaled& marshaled, t69& unmarshaled);
void t69_marshal_cleanup(t69_marshaled& marshaled);
