#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t465;
struct t465_marshaled;

 void m2695 (t465 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t465_marshal(const t465& unmarshaled, t465_marshaled& marshaled);
void t465_marshal_back(const t465_marshaled& marshaled, t465& unmarshaled);
void t465_marshal_cleanup(t465_marshaled& marshaled);
