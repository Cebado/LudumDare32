#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t933;
struct t933_marshaled;

void t933_marshal(const t933& unmarshaled, t933_marshaled& marshaled);
void t933_marshal_back(const t933_marshaled& marshaled, t933& unmarshaled);
void t933_marshal_cleanup(t933_marshaled& marshaled);
