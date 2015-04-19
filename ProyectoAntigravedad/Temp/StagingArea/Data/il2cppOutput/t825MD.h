#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t825;
struct t825_marshaled;

void t825_marshal(const t825& unmarshaled, t825_marshaled& marshaled);
void t825_marshal_back(const t825_marshaled& marshaled, t825& unmarshaled);
void t825_marshal_cleanup(t825_marshaled& marshaled);
