#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t797;
struct t797_marshaled;

 void m4057 (t797 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t797_marshal(const t797& unmarshaled, t797_marshaled& marshaled);
void t797_marshal_back(const t797_marshaled& marshaled, t797& unmarshaled);
void t797_marshal_cleanup(t797_marshaled& marshaled);
