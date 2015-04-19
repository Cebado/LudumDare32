#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t168;
struct t168_marshaled;
#include "t4.h"
#include "t351.h"

 int32_t m1540 (t168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 t4  m1542 (t168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
 int32_t m1541 (t168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t168_marshal(const t168& unmarshaled, t168_marshaled& marshaled);
void t168_marshal_back(const t168_marshaled& marshaled, t168& unmarshaled);
void t168_marshal_cleanup(t168_marshaled& marshaled);
