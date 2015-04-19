#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t72;
struct t72_marshaled;
struct t34;
struct t7;
#include "t405.h"
#include "t114.h"

 void m2659 (t72 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2660 (t7 * __this, t72 * p0, float p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1933 (t7 * __this, t72 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2661 (t7 * __this, t72 * p0, bool p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m134 (t7 * __this, t72 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t34* m1516 (t72 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m2019 (t72 * __this, t34* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m135 (t7 * __this, t72 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 void m1888 (t72 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t34* m115 (t72 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m112 (t72 * __this, t7 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m114 (t72 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2662 (t7 * __this, t72 * p0, t72 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m2663 (t7 * __this, t72 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m2664 (t72 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t114 m2665 (t72 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m132 (t7 * __this, t72 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m211 (t7 * __this, t72 * p0, t72 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
 bool m190 (t7 * __this, t72 * p0, t72 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t72_marshal(const t72& unmarshaled, t72_marshaled& marshaled);
void t72_marshal_back(const t72_marshaled& marshaled, t72& unmarshaled);
void t72_marshal_cleanup(t72_marshaled& marshaled);
