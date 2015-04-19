#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t540;
struct t540_marshaled;
struct t34;

 t34* m2786 (t540 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2787 (t540 * __this, t34* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t34* m2788 (t540 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2789 (t540 * __this, t34* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t540_marshal(const t540& unmarshaled, t540_marshaled& marshaled);
void t540_marshal_back(const t540_marshaled& marshaled, t540& unmarshaled);
void t540_marshal_cleanup(t540_marshaled& marshaled);
