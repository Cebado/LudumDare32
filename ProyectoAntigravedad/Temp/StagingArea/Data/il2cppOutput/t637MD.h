#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t637;
struct t637_marshaled;

void t637_marshal(const t637& unmarshaled, t637_marshaled& marshaled);
void t637_marshal_back(const t637_marshaled& marshaled, t637& unmarshaled);
void t637_marshal_cleanup(t637_marshaled& marshaled);
