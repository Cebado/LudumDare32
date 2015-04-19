#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t534;
struct t534_marshaled;
struct t535;

 void m2760 (t534 * __this, t535* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2761 (t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2762 (t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2763 (t534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2764 (t534 * __this, t535* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t534_marshal(const t534& unmarshaled, t534_marshaled& marshaled);
void t534_marshal_back(const t534_marshaled& marshaled, t534& unmarshaled);
void t534_marshal_cleanup(t534_marshaled& marshaled);
